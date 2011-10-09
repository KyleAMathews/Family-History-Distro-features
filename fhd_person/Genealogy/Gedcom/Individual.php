<?php
/**
 * Genealogy_Individual
 *
 * PHP Versions 4 and 5
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  CVS: $Id: Genealogy_Individual.php,v 1.4 2008/09/05 21:23:59 kguest Exp $
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
// $Id: Genealogy_Individual.php,v 1.4 2008/09/05 21:23:59 kguest Exp $
//

/**
 * Genealogy_Individual
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  Release: @PACKAGE_VERSION@
 * @access   public
 * @link     http://pear.php.net/package/Genealogy_Gedcom
 */
class Genealogy_Individual
{

    /**
     * Identifier
     *
     * @var    string
     * @access public
     */
    var $Identifier = '';

    /**
     * Lastname
     *
     * @var    string
     * @access public
     */
    var $Lastname = '';

    /**
     * Firstname
     *
     * @var    string
     * @access public
     */
    var $Firstname = '';

    /**
     * Nickname
     *
     * @var    string
     * @access public
     */
    var $Nickname = '';

    /**
     * Title
     *
     * @var    string
     * @access public
     */
    var $Title = '';

    /**
     * Birth
     *
     * @var    array
     * @access public
     */
    var $Birth = array('Date'   => '',
                       'Place'  => '',
                       'Source' => '',
                       'Note'   => ''
                       );

    /**
     * Death
     *
     * @var    array
     * @access public
     */
    var $Death = array('Date'   => '',
                       'Place'  => '',
                       'Source' => '',
                       'Note'   => ''
                       );

    /**
     * First communion
     *
     * @var    array
     * @access public
     */
    var $FirstCommunion = array('Date'   => '',
                                'Place'  => '',
                                'Source' => '',
                                'Note'   => ''
                                );

    /**
     * Sex
     *
     * @var    string
     * @access public
     */
    var $Sex = '';

    /**
     * Occupation
     *
     * @var    string
     * @access public
     */
    var $Occupation = array();

    /**
     * Source
     *
     * @var    string
     * @access public
     */
    var $Source = '';

    /**
     * Object
     *
     * @var    string
     * @access public
     */
    var $Object = '';

    /**
     * Family spouse
     *
     * @var    string
     * @access public
     */
    var $FamilySpouse = array();

    /**
     * Family child
     *
     * @var    string
     * @access public
     */
    var $FamilyChild = '';

    /**
     * Nationality
     *
     * @var    string
     * @access public
     */
    var $Nationality = '';

    /**
     * Burial
     *
     * @var    array
     * @access public
     */
    var $Burial = array('Date'   => '',
                        'Place'  => ''
                        );

    /**
     * Note
     *
     * @var    string
     * @access public
     */
    var $Note = '';

    /**
     * Constructor
     *
     * Creates a new Genealogy_Individual Object
     *
     * @param array $arg Array of details.
     *
     * @access public
     * @return object Genealogy_Individual
     */
    function Genealogy_Individual($arg)
    {
        $this->Identifier               = $arg[0];
        $this->Lastname                 = $arg[1];
        $this->Firstname                = $arg[2];
        $this->Nickname                 = $arg[3];
        $this->Title                    = $arg[4];
        $this->Birth['Date']            = $arg[5];
        $this->Birth['Place']           = $arg[6];
        $this->Birth['Source']          = $arg[7];
        $this->Birth['Note']            = $arg[8];
        $this->Death['Date']            = $arg[9];
        $this->Death['Place']           = $arg[10];
        $this->Death['Source']          = $arg[11];
        $this->Death['Note']            = $arg[12];
        $this->Sex                      = $arg[13];
        $this->Occupation               = $arg[14];
        $this->Source                   = $arg[15];
        $this->Object                   = $arg[16];
        $this->FamilySpouse             = $arg[17];
        $this->FamilyChild              = $arg[18];
        $this->Nationality              = $arg[19];
        $this->FirstCommunion['Date']   = $arg[20];
        $this->FirstCommunion['Place']  = $arg[21];
        $this->FirstCommunion['Source'] = $arg[22];
        $this->FirstCommunion['Note']   = $arg[23];
        $this->Burial['Date']           = $arg[24];
        $this->Burial['Place']          = $arg[25];
        $this->Note                     = $arg[26];
    }
}
?>
