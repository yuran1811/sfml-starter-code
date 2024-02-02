#ifndef SIZE_HPP
#define SIZE_HPP

class Size {
 private:
 public:
  float width;
  float height;

  Size() : width(0), height(0){};
  Size(float width) : width(width), height(width){};
  Size(float width, float height) : width(width), height(height){};

  Size& operator=(const Size& other) {
    width = other.width;
    height = other.height;
    return *this;
  }
};

#endif
