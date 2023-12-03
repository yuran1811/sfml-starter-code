#include "Ball.hpp"

Ball::Ball() : size(50.f), coor(0, 0), velocity(0, 0), color(Color::Blue) {}
Ball::Ball(float size, Vector2f coor, Vector2f velocity, Color color)
    : size(size), coor(coor), velocity(velocity), color(color) {
  this->shape = CircleShape(this->size);
  this->shape.setFillColor(this->color);
  this->shape.setPosition(this->coor);
}

Ball::~Ball() { delete this; }

void Ball::draw() {}

void Ball::update_pos() {
  if (is_out_range(this->coor.x, this->size, SCREEN_SIZE.width - this->size))
    this->velocity.x *= -1;
  if (is_out_range(this->coor.y, this->size, SCREEN_SIZE.height - this->size))
    this->velocity.y *= -1;

  this->coor.x += this->velocity.x;
  this->coor.y += this->velocity.y;
  this->shape.setPosition(this->coor);
}

void Ball::update() {
  this->update_pos();
}

void Ball::debug() {
  cout << "Position: " << this->coor.x << "," << this->coor.y << endl;
}
