class exports.MainRouter extends Backbone.Router
  routes :
    "home": "home"

  home: ->
    jQuery('body').html app.views.home.render().el
