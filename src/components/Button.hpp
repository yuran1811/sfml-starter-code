#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "../shared/Common.hpp"

enum class ButtonState { IDLE, HOVER, PRESSED };

class Button {
 private:
  Text text;
  Image icon;
  ButtonState state;
  RectangleShape shape;

 public:
  Button();
  ~Button();

  void update();
  void render();
};

#endif