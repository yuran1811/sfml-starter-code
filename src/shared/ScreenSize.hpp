#ifndef SCREENSIZE_HPP
#define SCREENSIZE_HPP

struct ScreenSize {
  float width;
  float height;

  ScreenSize() : width(480), height(480){};
  ScreenSize(int width) : width(width), height(width){};
  ScreenSize(int width, int height) : width(width), height(height){};
};

#endif
