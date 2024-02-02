#include "ProgressBar.hpp"

#include <stdio.h>

ProgressBar::ProgressBar() {
  position = Point(0, 0);
  size = Size(0, 0);
  timeToLive = 2;

  currentIndicate = 0;
  maxIndicate = 100;
  frameRate = 30;
}

ProgressBar::ProgressBar(Point position, Size size, int timeToLive,
                         int frameRate)
    : ProgressBar() {
  this->position = position;
  this->size = size;
  this->timeToLive = timeToLive;
  this->frameRate = frameRate;

  innerBar = RectangleShape(Vector2f(0, size.height));
  innerBar.setPosition(position.x, position.y);
  innerBar.setFillColor(Color::White);

  outerBar = RectangleShape(Vector2f(size.width, size.height));
  outerBar.setPosition(position.x, position.y);
  outerBar.setFillColor(Color::Black);

  clock.restart();
}

ProgressBar::~ProgressBar() {}

bool ProgressBar::isDone() { return currentIndicate >= maxIndicate; }

RectangleShape* ProgressBar::getShapes() {
  RectangleShape* shapes = new RectangleShape[2];
  shapes[0] = outerBar;
  shapes[1] = innerBar;

  return shapes;
}

void ProgressBar::update() {
  if (isDone()) return;

  currentIndicate =
      min(maxIndicate,
          maxIndicate * clock.getElapsedTime().asSeconds() / timeToLive);

  innerBar.setSize(
      Vector2f(size.width * currentIndicate / maxIndicate, size.height));
}

void ProgressBar::render() {}
