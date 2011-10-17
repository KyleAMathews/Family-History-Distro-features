homeTemplate = require('templates/home')
Editing = require('models/editing').Editing

class exports.HomeView extends Backbone.View
  id: 'home-view'

  initialize: ->
    app.models.editing.bind('change', @render)

  render: =>
    jQuery(@el).html homeTemplate(
      editing: app.models.editing
      stats: app.models.stats
    )
    @

  events:
    'click #new': 'loadNew'
    'click #clean': 'removeEndLines'
    'click #render': 'renderText'
    'click #save': 'save'

  loadNew: =>
    jQuery.getJSON 'http://fhd-staging.eduglu.com/drupal-edit/next', (data, textStatus, jqXHR) =>
      # Change all H1s to H2s
      changeh1Toh2 = /^#{1}\s/gm
      data.markdown = data.markdown.replace(changeh1Toh2, '## ')

      app.models.stats.set( remaining: data.remaining, { silent: true } )
      app.models.stats.set( completed: data.completed )
      app.models.stats.set( completed_count: data.completed_count )

      app.models.editing.set( title: data.title, {silent: true} )
      app.models.editing.set( nid: data.nid, {silent: true} )
      app.models.editing.set( body: data.markdown, {silent: true} )
      app.models.editing.set( link: data.link )
      renderMarkdown()
      console.log data

  removeEndLines: ->
    text = jQuery('#body')[0]
    lineEndings = /(\S)\n/gm

    window.selectedText = jQuery(text).val().substring(text.selectionStart, text.selectionEnd)

    # For each blank line, make it two spaces so that when we remove line
    # endings, there'll still be a line break there.
    selectedText = window.selectedText.replace(/^\n/gm, "\n\n")
    selectedText = selectedText.replace(lineEndings, '$1 ')
    # console.log selectedText
    jQuery(text).val(
          jQuery(text).val().substring(0, text.selectionStart) +
          selectedText +
          jQuery(text).val().substring(text.selectionEnd)
    )
    renderMarkdown()

  renderText: ->
    renderMarkdown()

  save: =>
    node =
      nid: app.models.editing.get('nid')
      title: app.models.editing.get('title')
      body: app.models.editing.get('body')

    jQuery.post 'http://fhd-staging.eduglu.com/drupal-edit/save', node

    jQuery('#tools').append('<span class="success">Node saved</span>')
    setTimeout (-> jQuery('#tools .success').fadeOut()), 5000
