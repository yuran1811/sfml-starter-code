#include "Generator.hpp"

void generateBalls(vector<Ball*>& balls, int ballSize) {
  balls.resize(NUM_BALLS);
  for (int i = 0; i < ballSize; i++) {
    const float radius = rand_in_range(10, 18);

    const float coorX =
        rand_in_range(radius * 2, SCREEN_SIZE.width - radius * 2);
    const float coorY =
        rand_in_range(radius * 2, SCREEN_SIZE.height - radius * 2);

    float veloX;
    float veloY;

    while (!(veloX = rand_in_range(-3, 3)))
      ;
    while (!(veloY = rand_in_range(-3, 3)))
      ;

    const int randomColor = rand_in_range(0, NUM_COLORS - 1);

    balls[i] = new Ball(radius, Vector2f(coorX, coorY), Vector2f(veloX, veloY),
                        get_tw_color(static_cast<TW_COLORS>(randomColor)));
  }
}

void generateColorPalette(vector<Ball*>& colors, int colorSize) {
  colors.resize(colorSize);

  const int GAP = 25;
  const int NUM_COL = NUM_COLOR_LEVELS * 4;

  for (int i = 0; i < colorSize; i++) {
    colors[i] = new Ball(
        10, Vector2f((i * GAP) % (GAP * NUM_COL), floor(i / NUM_COL) * GAP),
        Vector2f(0, 0), get_tw_color(static_cast<TW_COLORS>(i)));
  }
}