window.app = {}
app.routers = {}
app.models = {}
app.collections = {}
app.views = {}

Editing = require('models/editing').Editing
Stats = require('models/stats').Stats
MainRouter = require('routers/main_router').MainRouter
HomeView = require('views/home_view').HomeView

# app bootstrapping on document ready
$(document).ready ->
  app.initialize = ->
    app.models.editing = new Editing()
    app.models.stats = new Stats()
    app.routers.main = new MainRouter()
    app.views.home = new HomeView()
    app.routers.main.navigate 'home', true if Backbone.history.getFragment() is ''
  app.initialize()
  Backbone.history.start()

window.converter = new Markdown.Converter()

window.renderMarkdown = ->
  $('#markdown').html(window.converter.makeHtml(
    "# " + $('#title').val() + "\n\n" + $('#body').val())
  )
  app.models.editing.set title: $('#title').val(), { silent:true }
  app.models.editing.set body: $('#body').val(), { silent:true }
