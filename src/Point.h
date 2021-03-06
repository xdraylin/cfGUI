#ifndef POINT_H
#define POINT_H

#include <stdint.h>

namespace Codingfield {
  namespace UI {
    struct Point {
      Point() : x{0}, y{0} {}
      Point(int32_t x, int32_t y) : x{x}, y{y} {}
      int32_t x;
      int32_t y;
    };
  }
}

#endif //POINT_H