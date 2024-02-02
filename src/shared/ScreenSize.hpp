#ifndef SCREENSIZE_HPP
#define SCREENSIZE_HPP

#include "./Size.hpp"

class ScreenSize : public Size {
 private:
 public:
  ScreenSize() : Size(){};
  ScreenSize(float width) : Size(width){};
  ScreenSize(float width, float height) : Size(width, height){};

  ScreenSize& operator=(const ScreenSize& other) {
    width = other.width;
    height = other.height;
    return *this;
  }
};

#endif
