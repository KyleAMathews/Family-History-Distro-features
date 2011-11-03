<div class="block">
  <h2><?php print fhd_core_type_pluralizer($nodes[0]->type); ?></h2>
<?php
$count = 1;
$length = count($nodes);
foreach($nodes as $node) {
  print "<article class='tagged-content'>";
  print  "<h1>" . l($node->title, 'node/' . $node->nid) . "</h1>";
  print text_summary($node->body['und'][0]['safe_value'], NULL, 1200);
  print  "<span class='read-more'>" .
    l(t('Read more') . " &#8594;", 'node/' . $node->nid, array('html' => TRUE)) .
    "</span>";
  print "</article>";
  // Add a dividing line between rows unless we're at the end.
  if ($count % 2 === 0 && $length - $count !== 0) {
    print "<div class='clear-both'></div>";
  }
  $count++;
}
?>
</div>
