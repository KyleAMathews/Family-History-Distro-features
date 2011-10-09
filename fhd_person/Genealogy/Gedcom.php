<?php
/**
 * Genealogy_Gedcom
 *
 * PHP Versions 4 and 5
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  CVS: $Id: Genealogy_Gedcom.php,v 1.4 2008/09/03 22:40:32 kguest Exp $
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
// $Id: Genealogy_Gedcom.php,v 1.4 2008/09/03 22:40:32 kguest Exp $
//

require_once 'Gedcom/Parser.php';

/**
 * Genealogy_Gedcom
 *
 * Example:
 *
 *   require_once 'Genealogy/Gedcom.php';
 *   $ged =& new Genealogy_Gedcom('test.ged');
 *
 *   echo 'Number of individuals : '.  $ged->getNumberOfIndividuals().'<br>';
 *   echo 'Number of families : '.     $ged->getNumberOfFamilies().   '<br>';
 *   echo 'Number of objects :' .      $ged->getNumberOfObjects().    '<br>';
 *   echo 'Last Update :'.             $ged->getLastUpdate().         '<br>';
 *   echo '<br>';
 *
 *   echo '<pre>';
 *   print_r($ged->GedcomIndividualsTreeObjects);
 *   print_r($ged->GedcomFamiliesTreeObjects);
 *   print_r($ged->GedcomObjectsTreeObjects);
 *   print_r($ged->GedcomHeaderTreeObject);
 *   print_r($ged->getIndividual('I1'));
 *   print_r($ged->getFamily('F1'));
 *   print_r($ged->getObject('O1'));
 *   echo '</pre>';
 *
 *   display all firstname and lastname of individuals
 *
 *   foreach ($ged->GedcomIndividualsTreeObjects as $obj) {
 *     echo $obj->Firstname.' '.$obj->Lastname.'<br>';
 *   }
 *
 * Contributors:
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  Release: @PACKAGE_VERSION@
 * @access   public
 * @link     http://pear.php.net/package/Genealogy_Gedcom
 */
class Genealogy_Gedcom extends Genealogy_Parser
{

    /**
     * Constructor
     *
     * Creates a new Genealogy_Gedcom Object
     *
     * @param string $filename Gedcom filename
     *
     * @access public
     * @return object Genealogy_Gedcom the new Genealogy_Gedcom object
     */
    function Genealogy_Gedcom($filename)
    {
        $this->_GedcomFile = $filename;
        parent::parse();
    }

    /**
     * return the number of individual
     *
     * @access public
     * @return integer
     */
    function getNumberOfIndividuals()
    {
        return count($this->_GedcomIndividualsTree);
    }

    /**
     * return the number of family
     *
     * @access public
     * @return integer
     */
    function getNumberOfFamilies()
    {
        return count($this->_GedcomFamiliesTree);
    }

    /**
     * return the number of object
     *
     * @access public
     * @return integer
     */
    function getNumberOfObjects()
    {
        return count($this->_GedcomObjectsTree);
    }

    /**
     * return the last update
     *
     * @access public
     * @return string
     */
    function getLastUpdate()
    {
        return $this->GedcomHeaderTreeObject->Date;
    }

    /**
     * Get an Individual (object) from an identifier
     *
     * @param string $identifier Identifier
     *
     * @access public
     * @return mixed object or boolean (error)
     */
    function getIndividual($identifier)
    {
        foreach ($this->GedcomIndividualsTreeObjects as $obj) {
            if ($obj->Identifier == $identifier) {
                return $obj;
            }
        }
        return false;
    }

    /**
     * Get a family (object) from an identifier
     *
     * @param string $identifier Identifier
     *
     * @access public
     * @return mixed object or false on error.
     */
    function getFamily($identifier)
    {
        foreach ($this->GedcomFamiliesTreeObjects as $obj) {
            if ($obj->Identifier == $identifier) {
                return $obj;
            }
        }
        return false;
    }

    /**
     * Get an object (object) from an identifier
     *
     * @param string $identifier Identifier
     *
     * @access public
     * @return mixed object or false on error.
     */
    function getObject($identifier)
    {
        foreach ($this->GedcomObjectsTreeObjects as $obj) {
            if ($obj->Identifier == $identifier) {
                return $obj;
            }
        }
        return false;
    }

    /**
     * test if an individual exists
     *
     * @param string $identifier Identifier
     *
     * @access public
     * @return boolean
     */
    function isIndividual($identifier)
    {
        foreach ($this->GedcomIndividualsTreeObjects as $obj) {
            if ($obj->Identifier == $identifier) {
                return true;
            }
        }
        return false;
    }

    /**
     * test if a family exists
     *
     * @param string $identifier Identifier
     *
     * @access public
     * @return boolean
     */
    function isFamily($identifier)
    {
        foreach ($this->GedcomFamiliesTreeObjects as $obj) {
            if ($obj->Identifier == $identifier) {
                return true;
            }
        }
        return false;
    }

    /**
     * test if an object exists
     *
     * @param string $identifier Identifier
     *
     * @access public
     * @return boolean
     */
    function isObject($identifier)
    {
        foreach ($this->GedcomObjectsTreeObjects as $obj) {
            if ($obj->Identifier == $identifier) {
                return true;
            }
        }
        return false;
    }
}
?>
