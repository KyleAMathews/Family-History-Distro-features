<?php

module_load_include('inc', 'pathauto', 'pathauto');

function bulk_insert_person_aliases() {
  $results = db_query("SELECT * from fhd_person");
  foreach ($results as $result) {
    save_person_alias($result);
  }
}

function save_person_alias($person) {
  $year = "";
  if (!empty($person->birth_date)) {
    $year = adodb_date('Y', $person->birth_date);
  }
  $url = $person->name . " " . $year;
  $alias = pathauto_cleanstring($url);
  print $alias;
  echo "\n";
  db_insert('url_alias')
  ->fields(array(
      'source' => 'person/' . $person->pid,
      'alias' => $alias,
      'language' => 'und',
  ))
  ->execute();
}

bulk_insert_person_aliases();
