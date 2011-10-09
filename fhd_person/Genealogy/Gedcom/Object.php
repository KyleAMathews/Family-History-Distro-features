<?php
/**
 * Genealogy_Object
 *
 * PHP Versions 4 and 5
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  CVS: $Id: Genealogy_Object.php,v 1.3 2008/09/03 20:35:26 kguest Exp $
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
// $Id: Genealogy_Object.php,v 1.3 2008/09/03 20:35:26 kguest Exp $
//

/**
 * Genealogy_Object
 *
 * @category Genealogy
 * @package  Genealogy_Gedcom
 * @author   Olivier Vanhoucke <olivier@php.net>
 * @license  http://www.php.net/license/3_01.txt PHP License 3.0.1
 * @version  Release: @PACKAGE_VERSION@
 * @access   public
 * @link     http://pear.php.net/package/Genealogy_Gedcom
 */
class Genealogy_Object
{

    /**
     * Contains the Gedcom object identifier
     *
     * @var    string
     * @access public
     */
    var $Identifier = '';

    /**
     * Contains the Gedcom object : FILE
     *
     * @var    string
     * @access public
     */
    var $File = '';

    /**
     * Constructor
     *
     * Creates a new Genealogy_Object Object
     *
     * @param array $arg Array of arguments
     *
     * @access public
     *
     * @return object Genealogy_Object
     */
    function Genealogy_Object($arg)
    {
        $this->Identifier = $arg[0];
        $this->File       = $arg[1];
    }
}
?>
