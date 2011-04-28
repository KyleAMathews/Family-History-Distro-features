<?php

//print_r(entity_get_info('fhd_person'));

$entity = array(
  'name' => "Fred Flinstone",
  'birth_date' => 456210000,
  'birth_place' => 'Toledo, Oregon',
  'family_search_id' => 'abc',
);
//print_r(entity_save('fhd_person', $entity));


$entities = entity_load('fhd_person', array(7));
//print_r($entities[1]);
$entity = $entities[1];

echo "\nentity uri:\n";
//  print_r(entity_uri('fhd_person', $entities[1]));
echo "\nentity identifier: " . $entity->identifier() . "\n";
echo "\nentity url: " . $entity->url() . "\n";
echo "\nentity path: " . $entity->path() . "\n";

