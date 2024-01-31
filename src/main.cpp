#include "./main.hpp"

#include <math.h>

#include <iostream>

void generateBalls(vector<Ball*>& balls, int ballSize);
void generateColorPalette(vector<Ball*>& colors, int colorSize);

int main() {
  srand(time(0));

  // Objects
  vector<Ball*> balls(NUM_BALLS);
  generateBalls(balls, NUM_BALLS);
  // Objects

  RenderWindow app(VideoMode(SCREEN_SIZE.width, SCREEN_SIZE.height), APP_TITLE);
  app.setFramerateLimit(60);

  while (app.isOpen()) {
    for (Event event = Event{}; app.pollEvent(event);) {
      if (event.type == Event::Closed) app.close();
      if (Keyboard::isKeyPressed(Keyboard::Escape)) {
        std::cout << "Esc Pressed" << std::endl;
        app.close();
      }

      // Movement Handles
      if (Keyboard::isKeyPressed(Keyboard::Left)) {
      }
      if (Keyboard::isKeyPressed(Keyboard::Right)) {
      }
      if (Keyboard::isKeyPressed(Keyboard::Up)) {
      }
      if (Keyboard::isKeyPressed(Keyboard::Down)) {
      }
      // Movement Handles

      // Mouse Event Handles
      if (event.type == Event::MouseMoved) {
      }
      if (event.type == Event::MouseLeft) {
        std::cout << "Not Focus " << std::endl;
      }
      if (event.type == Event::MouseEntered) {
        std::cout << "Focus" << std::endl;
      }
      if (event.type == Event::MouseWheelScrolled) {
      }
      // Mouse Event Handles
    }

    app.clear(get_palette_color(PALETTE::Background));

    // Objects Updates
    for (Ball* ball : balls) {
      ball->update(SCREEN_SIZE);
      app.draw(ball->shape);
    }
    // Objects Updates

    app.display();
  }
}

void generateBalls(vector<Ball*>& balls, int ballSize = 10) {
  for (int i = 0; i < ballSize; i++) {
    const float radius = rand_in_range(10, 15);

    const float coorX = rand_in_range(radius, SCREEN_SIZE.width - radius);
    const float coorY = rand_in_range(radius, SCREEN_SIZE.height - radius);

    const float veloX = rand_in_range(-3, 3);
    const float veloY = rand_in_range(-3, 3);

    const int randomColor = rand_in_range(0, NUM_COLORS - 1);

    balls[i] = new Ball(radius, Vector2f(coorX, coorY), Vector2f(veloX, veloY),
                        get_tw_color(static_cast<TW_COLORS>(randomColor)));
  }
}

void generateColorPalette(vector<Ball*>& colors, int colorSize) {
  for (int i = 0; i < colorSize; i++) {
    const int GAP = 25;
    const int NUM_COL = NUM_COLOR_LEVELS * 4;

    colors[i] = new Ball(
        10, Vector2f((i * GAP) % (GAP * NUM_COL), floor(i / NUM_COL) * GAP),
        Vector2f(0, 0), get_tw_color(static_cast<TW_COLORS>(i)));
  }
}
