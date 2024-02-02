#ifndef POINT_HPP
#define POINT_HPP

class Point : public Vector2f {
 private:
 public:
  Point() : Vector2f(){};
  Point(float x) : Vector2f(x, x){};
  Point(float x, float y) : Vector2f(x, y){};
  ~Point(){};
};

#endif