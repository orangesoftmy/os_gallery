<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <div class="album-wrapper">
      <div class="album"><?php print $field->content; ?></div>
  </div>
<?php endforeach; ?>