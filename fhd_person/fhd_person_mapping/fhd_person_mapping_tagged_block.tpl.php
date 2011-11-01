<div class="block">
  <h2><?php print fhd_core_type_pluralizer($nodes[0]->type); ?></h2>
  <ul>
<?php
foreach($nodes as $node) {
  print "<li>" . l($node->title, 'node/' . $node->nid) . "</li>";
}
?>
  </ul>
</div>
