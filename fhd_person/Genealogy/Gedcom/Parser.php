<?php
/**
 * Genealogy_Parser
 *
 * PHP Versions 4 and 5
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  CVS: $Id: Genealogy_Parser.php,v 1.5 2008/09/21 17:16:58 kguest Exp $
 * @link     http://pear.php.net/package/Genealogy_Gedcom
 */
/* vim: set expandtab tabstop=4 shiftwidth=4: */
// +----------------------------------------------------------------------+
// | PHP Version 4                                                        |
// +----------------------------------------------------------------------+
// | Copyright (c) 1997-2003 The PHP Group                                |
// +----------------------------------------------------------------------+
// | This source file is subject to version 2.02 of the PHP license,      |
// | that is bundled with this package in the file LICENSE, and is        |
// | available at through the world-wide-web at                           |
// | http://www.php.net/license/2_02.txt.                                 |
// | If you did not receive a copy of the PHP license and are unable to   |
// | obtain it through the world-wide-web, please send a note to          |
// | license@php.net so we can mail you a copy immediately.               |
// +----------------------------------------------------------------------+
// | Authors: Olivier Vanhoucke <olivier@php.net>                         |
// +----------------------------------------------------------------------+
//
// $Id: Genealogy_Parser.php,v 1.5 2008/09/21 17:16:58 kguest Exp $
//

require_once 'Individual.php';
require_once 'Family.php';
require_once 'Object.php';
require_once 'Header.php';

/**
 * Genealogy_Parser
 *
 * Purpose:
 *
 *     Gedcom file parser
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  Release: @PACKAGE_VERSION@
 * @access   public
 * @link     http://pear.php.net/package/Genealogy_Gedcom
 */
class Genealogy_Parser
{

    /**
     * Contains Gedcom filename
     *
     * @var    string
     * @access private
     */
    var $_GedcomFile = '';

    /**
     * Contains all lines of the Gedcom file
     *
     * @var    array
     * @access private
     */
    var $_FileContent = array();

    /**
     * Contains the all tree of the file contain
     *
     * @var    array
     * @access private
     */
    var $_GedcomTree = array();

    /**
     * Contains the header tree
     *
     * @var    array
     * @access private
     */
    var $_GedcomHeaderTree = array();

    /**
     * Contains the individuals tree
     *
     * @var    array
     * @access private
     */
    var $_GedcomIndividualsTree = array();

    /**
     * Contains the families tree
     *
     * @var    array
     * @access private
     */
    var $_GedcomFamiliesTree = array();

    /**
     * Contains the objects tree
     *
     * @var    array
     * @access private
     */
    var $_GedcomObjectsTree = array();

    /**
     * Contains an array of Genealogy_Individual object
     *
     * @var    array
     * @access public
     */
    var $GedcomIndividualsTreeObjects = array();

    /**
     * Contains an array of Genealogy_Family object
     *
     * @var    array
     * @access public
     */
    var $GedcomFamiliesTreeObjects = array();

    /**
     * Contains an array of Genealogy_Object object
     *
     * @var    array
     * @access public
     */
    var $GedcomObjectsTreeObjects = array();

    /**
     * Contains a Genealogy_Header object
     *
     * @var    array
     * @access public
     */
    var $GedcomHeaderTreeObject = array();

    /**
     * Display error
     *
     * @param string $msg message
     *
     * @return string error message
     * @access private
     */
    function _raiseError($msg)
    {
        include_once 'PEAR.php';
        PEAR::raiseError('<b>Genealogy_Parser Error : </b>'.$msg,
            null,
            PEAR_ERROR_DIE);
    }

    /**
     * Launch parsing (use in Genealogy_Gedcom constructor)
     *
     * @access private
     * @return null
     */
    function parse()
    {
        $this->_getFileContent();

        if ($this->_isValidGedcomFile()) {
            $this->_makeGedcomTree();
            $this->_parseTree();
            $this->_parseHeader();
            $this->_parseIndividuals();
            $this->_parseFamilies();
            $this->_parseObjects();

            unset($this->_FileContent);
            unset($this->_GedcomTree);
            unset($this->_GedcomHeaderTree);
        } else {
            Genealogy_Parser::_raiseError($this->_GedcomFile.
                                          ' is not a valid Gedcom file.');
        }
    }

    /**
     * Read Gedcom file contains
     *
     * @access private
     * @return null
     */
    function _getFileContent()
    {
        $buffer = array();
        if ($fp = @fopen($this->_GedcomFile, 'r')) {
            while (!feof($fp)) {
                $buffer[] = trim(fgets($fp, 1024));
            }
            fclose($fp);
            // unset the last line if it's empty
            if (empty($buffer[count($buffer) - 1])) {
                unset($buffer[count($buffer) - 1]);
            }
            $this->_FileContent = $buffer;
            unset($buffer);
        } else {
            Genealogy_Parser::_raiseError('Cannot open file '.$this->_GedcomFile);
        }
    }

    /**
     * Test if it's a valid gedcom file
     *
     * @access private
     * @return boolean
     */
    function _isValidGedcomFile()
    {
        return (($this->_FileContent[0] == '0 HEAD')
             && ($this->_FileContent[count($this->_FileContent) - 1] == '0 TRLR'))
        ? true : false;
    }

    /**
     * Build Gedcom tree
     *
     * $gedcom = array('0 xxx', '1 yyy', '2 zzz', '0 xxx', '1 yyy');
     * $tree   = array(array('0 xxx', '1 yyy', '2 zzz'),
     *                 array('0 xxx', '1 yyy')
     *                );
     *
     * @access private
     * @return null
     */
    function _makeGedcomTree()
    {
        $i = -1;
        foreach ($this->_FileContent as $element) {
            if (!empty($element)) {
                if ($element{0} == '0') {
                    $i++;
                    $this->_GedcomTree[$i] = array();
                }
                $this->_GedcomTree[$i][] = $element;
            }
        }
    }

    /**
     * Parse Gedcom tree
     *
     * Separate Gedcom tree in 4 parts:
     * gedcom file header, individuals, families, objects.
     *
     * @access private
     * @return null
     */
    function _parseTree()
    {
        /* could replace \d* -> 0 */
        foreach ($this->_GedcomTree as $element) {
            if (@preg_match('/0 @I\d*@ INDI/US', $element[0])) {
                $this->_GedcomIndividualsTree[] = $element;
            }
            if (@preg_match('/0 @F\d*@ FAM/US', $element[0])) {
                $this->_GedcomFamiliesTree[] = $element;
            }
            if (@preg_match('/0 @O\d*@ OBJE/US', $element[0])) {
                $this->_GedcomObjectsTree[] = $element;
            }
        }
    }

    /**
     * Parse Gedcom file header
     *
     * Create a Genealogy_Header object
     *
     * @access private
     * @return null
     */
    function _parseHeader()
    {
        $this->_GedcomHeaderTree = $this->_GedcomTree[0];

        $Header_Param = array(@preg_replace('/\d VERS (.*)/US',
                    '$1', $this->_GedcomHeaderTree[$this->_subTag(
                        $this->_GedcomHeaderTree, 'GEDC', 'VERS')]),
                @preg_replace('/\d FORM (.*)/US',
                    '$1', $this->_GedcomHeaderTree[$this->_subTag(
                        $this->_GedcomHeaderTree, 'GEDC', 'FORM')]),
                @preg_replace('/\d DATE (.*)/US',
                    '$1', $this->_GedcomHeaderTree[$this->_tag(
                        $this->_GedcomHeaderTree, 'DATE')]),
                @preg_replace('/\d TIME (.*)/US',
                    '$1', $this->_GedcomHeaderTree[$this->_subTag(
                        $this->_GedcomHeaderTree, 'DATE', 'TIME')]),
                @preg_replace('/\d NAME (.*)/US',
                    '$1', $this->_GedcomHeaderTree[$this->_subTag(
                        $this->_GedcomHeaderTree, 'SOUR', 'NAME')]),
                @preg_replace('/\d VERS (.*)/US',
                    '$1', $this->_GedcomHeaderTree[$this->_subTag(
                        $this->_GedcomHeaderTree, 'SOUR', 'VERS')]),
                @preg_replace('/\d CORP (.*)/US',
                    '$1', $this->_GedcomHeaderTree[$this->_subTag(
                        $this->_GedcomHeaderTree, 'SOUR', 'CORP')]),
                @preg_replace('/\d ADDR (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'ADDR')]),
                @preg_replace('/\d ADR1 (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'ADR1')]),
                @preg_replace('/\d ADR2 (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'ADR2')]),
                @preg_replace('/\d CITY (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'CITY')]),
                @preg_replace('/\d POST (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'POST')]),
                @preg_replace('/\d CTRY (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'CTRY')]),
                @preg_replace('/\d PHON (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'PHON')]),
                @preg_replace('/\d DATA (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_subTag(
                            $this->_GedcomHeaderTree, 'SOUR', 'DATA')]),
                @preg_replace('/\d OBJE @(O\d*)@/US',
                        '$1', $this->_GedcomHeaderTree[$this->_tag(
                            $this->_GedcomHeaderTree, 'OBJE')]),
                @preg_replace('/\d LANG (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_tag(
                            $this->_GedcomHeaderTree, 'LANG')]),
                @preg_replace('/\d CHAR (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_tag(
                            $this->_GedcomHeaderTree, 'CHAR')]),
                @preg_replace('/\d COPR (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_tag(
                            $this->_GedcomHeaderTree, 'COPR')]),
                @preg_replace('/\d FILE (.*)/US',
                        '$1', $this->_GedcomHeaderTree[$this->_tag(
                            $this->_GedcomHeaderTree, 'FILE')]),
                @preg_replace('/\d NAME (.*)/US',
                        '$1', $this->_GedcomTree[1][$this->_subTag(
                            $this->_GedcomTree[1], 'SUBM', 'NAME')]),
                @preg_replace('/\d NOTE (.*)/US',
                        '$1', $this->_GedcomTree[1][$this->_subTag(
                            $this->_GedcomTree[1], 'SUBM', 'NOTE')]),
                $this->_contTag($this->_GedcomTree[1], 'ADDR'),
                @preg_replace('/\d PHON (.*)/US',
                        '$1',
                        $this->_GedcomTree[1][$this->_subTag(
                            $this->_GedcomTree[1], 'SUBM', 'PHON')])
                    );

        $this->GedcomHeaderTreeObject =& new Genealogy_Header($Header_Param);

        unset($Header_Param);
    }

    /**
     * Parse individuals tree
     *
     * Create an array of Genealogy_Individual object
     *
     * @return null
     * @access private
     */
    function _parseIndividuals()
    {
        for ($i = 0; $i < count($this->_GedcomIndividualsTree); $i++) {
            $Genealogy_Individual_Param = array(
                    @preg_replace('/0 @(I\d*)@ INDI/US',
                        '$1', $this->_GedcomIndividualsTree[$i][0]),
                    @preg_replace('/\d NAME (.*)\/(.*)\//US', '$2',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'NAME')]),
                    @preg_replace('/\d NAME (.*)\/(.*)\//US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'NAME')]),
                    @preg_replace('/\d NICK (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'NICK')]),
                    @preg_replace('/\d TITL (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'TITL')]),
                    @preg_replace('/\d DATE (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'BIRT', 'DATE')]),
                    @preg_replace('/\d PLAC (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'BIRT', 'PLAC')]),
                    @preg_replace('/\d SOUR (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'BIRT', 'SOUR')]),
                    @preg_replace('/\d NOTE (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'BIRT', 'NOTE')]),
                    @preg_replace('/\d DATE (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'DEAT', 'DATE')]),
                    @preg_replace('/\d PLAC (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'DEAT', 'PLAC')]),
                    @preg_replace('/\d SOUR (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'DEAT', 'SOUR')]),
                    @preg_replace('/\d NOTE (.*)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'DEAT', 'NOTE')]),
                    @preg_replace('/\d SEX (\w)/US', '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'SEX')]),
                    $this->_arrayTag($this->_GedcomIndividualsTree[$i], 'OCCU'),

              //      @preg_replace('/\d OCCU (.*)/US',
              //          '$1', $this->_GedcomIndividualsTree[$i][$this->_tag(
              //              $this->_GedcomIndividualsTree[$i], 'OCCU')]),
                    @preg_replace('/\d SOUR (.*)/US',
                        '$1', $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'SOUR')]),
                    @preg_replace('/\d OBJE @(O\d*)@/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'OBJE')]),
                    $this->_arrayTag($this->_GedcomIndividualsTree[$i], 'FAMS'),
                    @preg_replace('/\d FAMC @(F\d*)@/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'FAMC')]),
                    @preg_replace('/\d NATI (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'NATI')]),
                    @preg_replace('/\d DATE (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'FCOM', 'DATE')]),
                    @preg_replace('/\d PLAC (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'FCOM', 'PLAC')]),
                    @preg_replace('/\d SOUR (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'FCOM', 'SOUR')]),
                    @preg_replace('/\d NOTE (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'FCOM', 'NOTE')]),
                    @preg_replace('/\d DATE (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'BURI', 'DATE')]),
                    @preg_replace('/\d PLAC (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_subTag(
                            $this->_GedcomIndividualsTree[$i], 'BURI', 'PLAC')]),
                    @preg_replace('/\d NOTE (.*)/US',
                        '$1',
                        $this->_GedcomIndividualsTree[$i][$this->_tag(
                            $this->_GedcomIndividualsTree[$i], 'NOTE')])
            );

            $this->GedcomIndividualsTreeObjects[] =& new Genealogy_Individual(
                $Genealogy_Individual_Param);
        }
        unset($Genealogy_Individual_Param);
    }

    /**
     * Parse families tree
     *
     * Create an array of Genealogy_Family object
     *
     * @access private
     * @return null
     */
    function _parseFamilies()
    {
        for ($i = 0; $i < count($this->_GedcomFamiliesTree); $i++) {
            $Family = array(@preg_replace(
                    '/0 @(F\d*)@ FAM/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][0]),
                @preg_replace(
                    '/\d HUSB @(I\d*)@/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_tag(
                        $this->_GedcomFamiliesTree[$i],'HUSB')]),
                @preg_replace('/\d WIFE @(I\d*)@/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_tag(
                        $this->_GedcomFamiliesTree[$i],'WIFE')]),
                @preg_replace('/\d NCHI (.*)/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_tag(
                        $this->_GedcomFamiliesTree[$i],'NCHI')]),
                $this->_arrayTag($this->_GedcomFamiliesTree[$i], 'CHIL'),
                @preg_replace('/\d DATE (.*)/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_subTag(
                        $this->_GedcomFamiliesTree[$i],'MARR', 'DATE')]),
                @preg_replace('/\d TIME (.*)/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_subTag(
                        $this->_GedcomFamiliesTree[$i],'MARR', 'TIME')]),
                @preg_replace('/\d PLAC (.*)/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_subTag(
                        $this->_GedcomFamiliesTree[$i],'MARR', 'PLAC')]),
                $this->_arrayWitnessTag($this->_GedcomFamiliesTree[$i]),
                $this->_contTag($this->_GedcomFamiliesTree[$i], 'NOTE'),
                @preg_replace('/\d SOUR (.*)/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_subTag(
                        $this->_GedcomFamiliesTree[$i],'MARR', 'SOUR')]),
                array('Identifier'   => @preg_replace('/\d ASSO @(I\d*)@/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_tag(
                    $this->_GedcomFamiliesTree[$i], 'ASSO')]),
                    'Relationship' => @preg_replace('/\d RELA (.*)/US',
                      '$1',
                      $this->_GedcomFamiliesTree[$i][$this->_subTag(
                          $this->_GedcomFamiliesTree[$i],'ASSO', 'RELA')])
                    ),
                @preg_replace('/\d DATE (.*)/US',
                    '$1',
                    $this->_GedcomFamiliesTree[$i][$this->_subTag(
                        $this->_GedcomFamiliesTree[$i],'DIV', 'DATE')])
            );

            $this->GedcomFamiliesTreeObjects[] =& new Genealogy_Family($Family);
        }
        unset($Family);
    }

    /**
     * Parse objects tree
     *
     * Create an array of Genealogy_Object object
     *
     * @access private
     * @return null
     */
    function _parseObjects()
    { // IMGC -> Parentele
        for ($i = 0; $i < count($this->_GedcomObjectsTree); $i++) {
            $Object = array(@preg_replace('/0 @(O\d*)@ OBJE/US', '$1',
            $this->_GedcomObjectsTree[$i][0]),
            @preg_replace('/\d FILE (.*)/US', '$1',
            $this->_GedcomObjectsTree[$i][$this->_tag($this->_GedcomObjectsTree[$i],'FILE')]));
            $this->GedcomObjectsTreeObjects[] =& new Genealogy_Object($Object);
        }
        unset($Object);
    }

    /**
     * Get subtag id
     *
     * @param array  $tab     tree part
     * @param string $mainTag subtag
     * @param string $tag     tag
     *
     * @return integer subtag id or nothing
     * @access private
     */
    function _subTag($tab, $mainTag, $tag)
    {
        $i     = $this->_tag($tab, $mainTag);
        $level = $tab[$i]{0};

        for ($j=$i+1; $j < count($tab); $j++) {
            if ($level < $tab[$j]{0}) {
                if (@preg_match('/\d '.$tag.' (.*)/US', $tab[$j])) {
                    return $j;
                }
            } else {
                return;
            }
        }
    }

    /**
     * Get tag id
     *
     * @param array  $tab tree part
     * @param string $tag tag
     *
     * @return integer tag id or -1 (force error)
     * @access private
     */
    function _tag($tab, $tag)
    {
        for ($i = 0; $i < count($tab); $i++) {
            if (@preg_match('/'.$tag.'/US', $tab[$i])) {
                return $i;
            }
        }
        return -1;
    }

    /**
     * Get tag contain with CONT
     *
     * @param array  $tab     tree part
     * @param string $mainTag tag
     *
     * @return string tag contain
     * @access private
     */
    function _contTag($tab, $mainTag)
    {
        $str = '';
        $i   = $this->_tag($tab, $mainTag);
        if ($i === -1) {
            return '';
        }
        $level = (integer) $tab[$i]{0};

        do {
            // first line with main tag
            if (@preg_match('/'.$mainTag.'/US', $tab[$i])) {
                $str .= @preg_replace('/'.$level.' '.$mainTag.' (.*)/US',
                                      '$1',
                                      $tab[$i]);
                $i++;
            }
            // continue string with others CONT tag
            if (isset($tab[$i]) && $level < $tab[$i]{0}) {
                $str .= "\n".@preg_replace('/\d CONT (.*)/US', '$1', $tab[$i]);
                $i++;
            } else {
                break;
            }
        } while ($i < count($tab));
        return $str;
    }

    /**
     * Get an array of tags contains
     *
     * example for children (CHIL)
     *
     * @param array  $tab tree part
     * @param string $tag tag
     *
     * @return array
     * @access private
     */
    function _arrayTag($tab, $tag)
    {
        $arr = array();

        for ($i = 0; $i < count($tab); $i++) {
            if (@preg_match('/'.$tag.'/US', $tab[$i])) {
                $arr[] = @preg_replace('/\d '.$tag.' @(.*)@/US', '$1', $tab[$i]);
            }
        }
        return $arr;
    }

    /**
     * Get Witness tags data
     *
     * @param array $tab tree part
     *
     * @return array
     * @access private
     */
    function _arrayWitnessTag($tab)
    {
        $arr = array();
        $k   = 0;

        for ($i=$this->_tag($tab, 'WITN'); $i < count($tab); $i++) {
            if (@preg_match('/NAME/US', $tab[$i])) {
                $arr[$k]['Name'] = trim(@preg_replace('/\d NAME (.*)\/(.*)\//US',
                            '$1 $2',
                            $tab[$i]));
            } elseif (@preg_match('/TITL/US', $tab[$i])) {
                $arr[$k]['Title'] = @preg_replace('/\d TITL (.*)/US',
                        '$1',
                        $tab[$i]);
            }
            if (isset($arr[$k]['Name']) && isset($arr[$k]['Title'])) {
                $k++;
            }
        }
        return $arr;
    }
}
?>
