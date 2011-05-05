<div class="associated-person">
  <span class="name"><?php print $person->name; ?></span> <br />
  <strong>Born:</strong> <?php print date('Y', $person->birth_date) . ' ' . check_plain($person->birth_place); ?>
  <span data-nid="<?php print $nid; ?>" data-pid="<?php print $person->pid; ?>" class="remove-referenced-person" title="Remove this referenced person">x<span>
</div>
