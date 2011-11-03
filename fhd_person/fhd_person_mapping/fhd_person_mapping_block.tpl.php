<div class="associated-person">
  <h2 class="name"><?php print $person_link; ?></h2>
  <?php if (!empty($birth_string)): ?>
    <strong>Born:</strong> <?php print $birth_string; ?> <br />
  <?php endif; ?>
  <?php if (!empty($death_string)): ?>
    <strong>Died:</strong> <?php print $death_string; ?>
  <?php endif; ?>
  <?php if (user_access('adminster content-person mappings')): ?>
    <span data-nid="<?php print $nid; ?>" data-pid="<?php print $person->pid; ?>" class="remove-referenced-person" title="Remove this referenced person">x<span>
  <?php endif; ?>
</div>
