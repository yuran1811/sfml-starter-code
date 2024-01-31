#include "./main.hpp"

void generateBalls(vector<Ball*>& balls, int ballSize);

int main() {
  srand(time(0));

  // Objects
  vector<Ball*> balls(NUM_BALLS);
  generateBalls(balls, NUM_BALLS);
  // Objects

  RenderWindow app(VideoMode(SCREEN_SIZE.width, SCREEN_SIZE.height),
                   "SFML Starter Demo");
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
      ball->update(SCREEN_SIZE);
      app.draw(ball->shape);
    }
    // Objects Updates

    app.display();
  }
}

void generateBalls(vector<Ball*>& balls, int ballSize = 10) {
  for (int i = 0; i < ballSize; i++) {
    const float radius = rand_in_range(10, 20);

    const float coorX = rand_in_range(radius, SCREEN_SIZE.width - radius);
    const float coorY = rand_in_range(radius, SCREEN_SIZE.height - radius);

    const float veloX = rand_in_range(-3, 3);
    const float veloY = rand_in_range(-3, 3);

    balls[i] = new Ball(radius, Vector2f(coorX, coorY), Vector2f(veloX, veloY),
                        get_tw_color(TW_COLORS::Violet300));
  }
}
