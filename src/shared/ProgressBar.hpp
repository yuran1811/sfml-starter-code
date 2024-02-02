#ifndef PROGRESSBAR_HPP
#define PROGRESSBAR_HPP

#include "./Common.hpp"
#include "./Point.hpp"

class ProgressBar {
 private:
  float currentIndicate;
  float maxIndicate;
  int timeToLive;
  Clock clock;

  int frameRate;

  Point position;
  Size size;

  RectangleShape innerBar;
  RectangleShape outerBar;

 public:
  ProgressBar();
  ProgressBar(Point position, Size size, int timeToLive, int frameRate = 30);
  ~ProgressBar();

  bool isDone();
  RectangleShape* getShapes();

  void update();
  void render();
};

#endif