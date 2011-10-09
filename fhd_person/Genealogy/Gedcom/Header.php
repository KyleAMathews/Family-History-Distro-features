<?php
/**
 * Genealogy_Header
 *
 * PHP Versions 4 and 5
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  CVS: $Id: Genealogy_Header.php,v 1.3 2008/09/03 20:35:26 kguest Exp $
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
// $Id: Genealogy_Header.php,v 1.3 2008/09/03 20:35:26 kguest Exp $
//

/**
 * Genealogy_Header
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  Release: @PACKAGE_VERSION@
 * @access   public
 * @link     http://pear.php.net/package/Genealogy_Gedcom
 */
class Genealogy_Header
{

    /**
     * Contains Gedcom information
     *
     * @var    array
     * @access public
     */
    var $Gedcom = array('Version' => '',
                        'Format'  => ''
                        );

    /**
     * Contains File
     *
     * @var    string
     * @access public
     */
    var $File = '';

    /**
     * Contains Copyright
     *
     * @var    string
     * @access public
     */
    var $Copyright = '';

    /**
     * Contains date
     *
     * @var    string
     * @access public
     */
    var $Date = '';

    /**
     * Contains Character
     *
     * @var    string
     * @access public
     */
    var $Character = '';

    /**
     * Contains Object
     *
     * @var    string
     * @access public
     */
    var $Object = '';

    /**
     * Contains Language
     *
     * @var    string
     * @access public
     */
    var $Language = '';

    /**
     * Contains Submitter
     *
     * @var    array
     * @access public
     */
    var $Submitter = array('Name'    => '',
                           'Note'    => '',
                           'Address' => '',
                           'Phone'   => ''
                           );

    /**
     * Contains the source information
     *
     * @var    array
     * @access public
     */
    var $Source = array('Name'      => '',
                        'Version'   => '',
                        'Corporate' => '',
                        'Address'   => '',
                        'Country'   => '',
                        'Phone'     => '',
                        'Data'      => ''
                        );

    /**
     * Constructor
     *
     * Creates a new Genealogy_Header Object
     *
     * @param array $arg Array of arguments
     *
     * @access public
     *
     * @return object Genealogy_Header
     */
    function Genealogy_Header($arg)
    {
        $this->Gedcom['Version']    = $arg[0];
        $this->Gedcom['Format']     = $arg[1];
        $this->Date                 = $arg[2].' '.$arg[3];
        $this->Source['Name']       = $arg[4];
        $this->Source['Version']    = $arg[5];
        $this->Source['Corporate']  = $arg[6];
        $this->Source['Address']    = $arg[7].' '.
                                      $arg[8].' '.
                                      $arg[9].' '.
                                      $arg[10].' '.
                                      $arg[11];
        $this->Source['Country']    = $arg[12];
        $this->Source['Phone']      = $arg[13];
        $this->Source['Data']       = $arg[14];
        $this->Object               = $arg[15];
        $this->Language             = $arg[16];
        $this->Character            = $arg[17];
        $this->Copyright            = $arg[18];
        $this->File                 = $arg[19];
        $this->Submitter['Name']    = $arg[20];
        $this->Submitter['Note']    = $arg[21];
        $this->Submitter['Address'] = $arg[22];
        $this->Submitter['Phone']   = $arg[23];
    }
}
?>
