#ifndef BALL_HPP
#define BALL_HPP

#include "../shared/Common.hpp"
#include "../shared/index.hpp"
#include "../utils/index.hpp"

class Ball {
 private:
  float size;
  Vector2f coor;
  Color color;
  Vector2f velocity;

 public:
  CircleShape shape;

  Ball();
  Ball(float size, Vector2f coor, Vector2f velocity, Color color);
  ~Ball();

  void draw();

  void update_pos(ScreenSize SCREEN_SIZE);
  void update(ScreenSize SCREEN_SIZE);

  void debug();
};

#endif