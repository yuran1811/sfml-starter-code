#include "./App.hpp"

#include <iostream>

App::App() {
  generateBalls(balls, NUM_BALLS);
  // generateColorPalette(balls, NUM_BALLS);
}

App::~App() {
  for (Ball* ball : balls) {
    delete ball;
  }
  balls.clear();

  window.close();
  window.~RenderWindow();
}

void App::run() {
  loadingScreen();

  openWindow();

  while (window.isOpen()) {
    eventsHandles();
    update();
    render();
  }
}

void App::loadingScreen() { openSplashScreen(2); }

void App::openWindow() {
  window.create(VideoMode(SCREEN_SIZE.width, SCREEN_SIZE.height), APP_TITLE);
  window.setFramerateLimit(60);

  Image appIcon;
  appIcon.loadFromFile(
      getResourcePath(ASSET_FOLDER::ICONS, "sfml-logo", ASSET_TYPE::PNG));

  window.setIcon(81, 81, appIcon.getPixelsPtr());
}

void App::moveView(Point position) {
  View view = window.getView();
  view.setCenter(position.x, position.y);

  window.setView(view);
}

void App::mouseHandler(Event& event) {
  if (event.type == Event::MouseMoved) {
  }
  if (event.type == Event::MouseLeft) {
  }
  if (event.type == Event::MouseEntered) {
  }
  if (event.type == Event::MouseWheelScrolled) {
  }
}

void App::keyboardHandler(Event& event) {
  if (Keyboard::isKeyPressed(Keyboard::Space)) {
    if (event.type == Event::MouseMoved)
      moveView(Point(event.mouseMove.x, event.mouseMove.y));
  } else
    moveView(Point(SCREEN_SIZE.width / 2.f, SCREEN_SIZE.height / 2.f));

  if (Keyboard::isKeyPressed(Keyboard::Left)) {
  }
  if (Keyboard::isKeyPressed(Keyboard::Right)) {
  }
  if (Keyboard::isKeyPressed(Keyboard::Up)) {
  }
  if (Keyboard::isKeyPressed(Keyboard::Down)) {
  }
}

void App::windowHandler(Event& event) {
  if (event.type == Event::Closed) window.close();

  if (Keyboard::isKeyPressed(Keyboard::Escape)) {
    window.close();
  }

  if (event.type == Event::Resized) {
    // update the view to the new size of the window
    FloatRect visibleArea(0, 0, event.size.width, event.size.height);
    window.setView(View(visibleArea));

    SCREEN_SIZE = ScreenSize(event.size.width, event.size.height);
  }
}

void App::eventsHandles() {
  for (Event event = Event{}; window.pollEvent(event);) {
    windowHandler(event);
    keyboardHandler(event);
    mouseHandler(event);
  }
}

void App::update() {
  for (Ball* ball : balls) {
    ball->update(SCREEN_SIZE);
  }
}

void App::render() {
  window.clear(get_palette_color(PALETTE::Background));

  for (Ball* ball : balls) {
    window.draw(ball->get_shape());
  }

  window.display();
}
