#include "./Ball.hpp"
#include "Ball.hpp"

Ball::Ball() : size(50.f), coor(0, 0), velocity(0, 0), color(Color::Blue) {}

Ball::Ball(float size, Vector2f coor, Vector2f velocity, Color color)
    : size(size), coor(coor), velocity(velocity), color(color) {
  this->shape = CircleShape(this->size);
  this->shape.setFillColor(this->color);
  this->shape.setPosition(this->coor);
}

Ball::~Ball() { delete this; }

CircleShape Ball::get_shape() { return shape; }

void Ball::update_pos(ScreenSize SCREEN_SIZE) {
  if (is_out_range(this->coor.x, this->size / 2.f,
                   SCREEN_SIZE.width - 2 * this->size))
    this->velocity.x *= -1;
  if (is_out_range(this->coor.y, this->size / 2.f,
                   SCREEN_SIZE.height - 2 * this->size))
    this->velocity.y *= -1;

  this->coor += this->velocity;
  this->shape.setPosition(this->coor);
}

void Ball::update(ScreenSize SCREEN_SIZE) { this->update_pos(SCREEN_SIZE); }

void Ball::render() {}

void Ball::debug() {
  // cout << "Position: " << this->coor.x << "," << this->coor.y << endl;
}
