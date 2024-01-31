#ifndef POINT_HPP
#define POINT_HPP

struct Point {
  int x;
  int y;

  Point() : x(0), y(0) {}
  Point(int x, int y) : x(x), y(y) {}
};

#endif