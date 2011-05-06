<div class="associated-person">
  <span class="name"><?php print $person_link; ?></span> <br />
  <?php if (!empty($birth_string)): ?>
    <strong>Born:</strong> <?php print $birth_string; ?> <br />
  <?php endif; ?>
  <?php if (!empty($death_string)): ?>
    <strong>Died:</strong> <?php print $death_string; ?>
  <?php endif; ?>
  <span data-nid="<?php print $nid; ?>" data-pid="<?php print $person->pid; ?>" class="remove-referenced-person" title="Remove this referenced person">x<span>
</div>
