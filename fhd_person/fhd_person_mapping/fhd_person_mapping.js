(function() {
  var $;
  $ = jQuery;
  return Drupal.behaviors.fhdRemoveReferencedPerson = {
    attach: function() {
      return $('.remove-referenced-person').click(function() {
        var nid, pid, url;
        url = Drupal.settings.basePath + 'fhd-person-mapping/callback';
        pid = $(this).attr('data-pid');
        nid = $(this).attr('data-nid');
        $.post(url, {
          action: 'remove',
          pid: pid,
          nid: nid
        });
        return $(this).parent().slideUp();
      }).tipsy();
    }
  };
})();