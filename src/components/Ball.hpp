#ifndef BALL_HPP
#define BALL_HPP

#include "../shared/index.hpp"
#include "../utils/index.hpp"

class Ball {
 private:
  float size;
  Color color;
  CircleShape shape;

  Vector2f coor;
  Vector2f velocity;

 public:
  Ball();
  Ball(float size, Vector2f coor, Vector2f velocity, Color color);
  ~Ball();

  CircleShape get_shape();

  void update_pos(ScreenSize SCREEN_SIZE);
  void update(ScreenSize SCREEN_SIZE);

  void render();

  void debug();
};

#endif