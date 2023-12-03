#include "src/App.hpp"

int main() {
  srand(time(nullptr));

  // Objects
  int balls_size = 10;
  vector<Ball*> balls(balls_size);

  for (int i = 0; i < balls_size; i++) {
    const float radius = rand_in_range(10, 20);

    const float coorX = rand_in_range(radius, SCREEN_SIZE.width - radius);
    const float coorY = rand_in_range(radius, SCREEN_SIZE.height - radius);

    const float veloX = rand_in_range(-3, 3);
    const float veloY = rand_in_range(-3, 3);

    balls[i] = new Ball(radius, Vector2f(coorX, coorY), Vector2f(veloX, veloY),
                        get_tw_color(TW_COLORS::Violet300));
  }
  // Objects

  RenderWindow app(VideoMode(SCREEN_SIZE.width, SCREEN_SIZE.height),
                   "SFML Starter App");
  app.setFramerateLimit(60);

  while (app.isOpen()) {
    for (Event event = Event{}; app.pollEvent(event);) {
      if (event.type == Event::Closed) app.close();
      if (Keyboard::isKeyPressed(Keyboard::Escape)) app.close();

      // Movement Handles
      if (Keyboard::isKeyPressed(Keyboard::Left)) {
      }
      if (Keyboard::isKeyPressed(Keyboard::Right)) {
      }
      if (Keyboard::isKeyPressed(Keyboard::Up)) {
      }
      if (Keyboard::isKeyPressed(Keyboard::Down)) {
      }

      // Mouse Event Handles
      if (event.type == Event::MouseButtonPressed) {
      }
    }

    app.clear(get_palette_color(PALETTE::Background));

    // Objects Updates
    for (Ball* ball : balls) {
      ball->update();
      app.draw(ball->shape);
    }
    // Objects Updates

    app.display();
  }
}