#pragma once

#include "../App.hpp"

#ifndef BALL_HPP
#define BALL_HPP
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

  void update_pos();
  void update();

  void debug();
};
#endif