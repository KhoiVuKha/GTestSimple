// function_need_to_test.cpp
#include "function_need_to_test.h"

int retangleArea(int width, int height) {
    int area = 0;

    if (width > 0 && height > 0) {
        area = width*height;
    }

    return area;
}
