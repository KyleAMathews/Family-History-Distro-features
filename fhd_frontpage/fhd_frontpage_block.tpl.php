<div class='ancestor-profile'>
  <?php print $profile; ?>
  <ul class='linked-nodes'>
  <?php
    foreach ($nodes as $node) {
      print "<li>" .
        l($node->title . " (" . $node->type . ")", 'node/' . $node->nid) .
        "</li>";
    }
  ?>
  </ul>
</div>
