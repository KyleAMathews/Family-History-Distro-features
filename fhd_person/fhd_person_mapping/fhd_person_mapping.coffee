do ->
  $ = jQuery
  Drupal.behaviors.fhdRemoveReferencedPerson =
    attach: ->
      $('.remove-referenced-person').click ->
        url = Drupal.settings.basePath + 'fhd-person-mapping/callback'
        pid = $(@).attr('data-pid')
        nid = $(@).attr('data-nid')
        # Tell Drupal to remove the pid.
        $.post url, {action: 'remove', pid: pid, nid: nid}
        # Remove the person block off the page.
        $(@).parent().slideUp()
      .tipsy()
