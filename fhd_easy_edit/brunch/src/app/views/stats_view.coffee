statsTemplate = require('templates/stats')
class exports.StatsView extends Backbone.View
  id: 'stats'

  initialize: ->
    app.models.stats.bind('change', @render)

  render: =>
    $(@el).html statsTemplate(app.models.stats)
    console.log 'rendering stats!'
    @
