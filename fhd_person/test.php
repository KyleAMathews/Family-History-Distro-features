<?php

require_once 'Genealogy/Gedcom.php';

$ged = new Genealogy_Gedcom('/tmp/sevenGenerationsLegacy.ged');
$persons = $ged->GedcomIndividualsTreeObjects;

foreach ($persons as $person) {

  $bplace = $person->Birth['Place'];
  $entity = array(
    'name' => fixEncoding(trim($person->Firstname) . " " . trim($person->Lastname)),
    'birth_date' => _fhd_get_date($person->Birth['Date']),
    'birth_place' => utf8_encode($person->Birth['Place']),
    'sex' => $person->Sex,
    'gedcom_id' => $person->Identifier,
  );

    // Gedcom parser erroneously duplicates birth info into death/burial
    if ($person->Death['Date'] != $person->Birth['Date']) {
      $entity['death_date'] = _fhd_get_date($person->Death['Date']);
      $entity['death_place'] = utf8_encode($person->Death['Place']);
    }
    if ($person->Burial['Date'] != $person->Birth['Date']) {
      $entity['burial_date'] = _fhd_get_date($person->Burial['Date']);
      $entity['burial_place'] = utf8_encode($person->Burial['Place']);
    }
    if($entity['birth_date'] == 0) {
  //   print_r($person->Birth);
//  print_r($entity);
    }
//  entity_save('fhd_person', $entity);
  mb_detect_encoding($bplace, "UTF-8") == "UTF-8" ? '' : $bplace = utf8_encode($bplace);
  $bplace = utf8_encode($bplace);
/*  echo "encoding: " . mb_detect_encoding($bplace) . "\n";
  echo "name: " . $person->Firstname . $person->Lastname . "\n";
  echo "birth place: " . $bplace . "\n";
  echo "birth date: " . strtotime($person->Birth['Date']) . "\n";
  echo "\n"; */
}

$entity = array(
  'name' => "Fred Flinstone",
  'birth_date' => 456210000,
  'birth_place' => 'Toledo, Oregon',
  'gedcom_id' => 'abc',
);
//print_r(entity_save('fhd_person', $entity));


/** Loading **/
/*
$entities = entity_load('fhd_person', array(7));
//print_r($entities[1]);
$entity = $entities[1];

echo "\nentity uri:\n";
//  print_r(entity_uri('fhd_person', $entities[1]));
echo "\nentity identifier: " . $entity->identifier() . "\n";
echo "\nentity url: " . $entity->url() . "\n";
echo "\nentity path: " . $entity->path() . "\n";
 */

// Fixes the encoding to uf8 
function fixEncoding($in_str) 
{ 
  $cur_encoding = mb_detect_encoding($in_str) ; 
  if($cur_encoding == "UTF-8" && mb_check_encoding($in_str,"UTF-8")) 
    return $in_str; 
  else 
    return utf8_encode($in_str); 
} // fixEncoding 

function _fhd_get_date($str) {
  if (($timestamp = strtotime($str)) === false && !empty($str)) {
    // Trim off "Abt" or other odd charecters that slip in
    $str = trim($str, ' Aabt<>');
    // Sometimes there's a date range, just grab the first.
    $str = array_pop(explode('-',$str));
    $timestamp = strtotime($str);
  }
  return $timestamp;
}
