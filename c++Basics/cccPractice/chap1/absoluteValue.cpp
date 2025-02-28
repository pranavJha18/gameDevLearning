#include <cstdio>

int absolute_value(int num) {
  if (num >= 0) {
    num = num;
  } else {
    num = num * (-1);
  }
  return num;
}
