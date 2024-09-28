#include <cstdio>
#include <iostream>

int main(int argc, char *argv[]) {
  // arithimetic operators
  // + - * / %
  int a = 12;
  int b = 21;
  int c = a + b;
  int d = a / b;
  std::cout << c << "\n";
  std::cout << d << "\n";
  /*int e = 0.6;*/ // if we assign float to int, we loose precision, anything
                   // after the decimal point will be discarded
  /*std::cout << e << "\n";*/
  /*int e = a % b;*/
  /*std::cout << e << "\n";*/
  /*float f = 12 / 10;*/
  /*std::cout << f << "\n";*/
  /*a += b; // this is equivalent of a = a + b*/
  /*std::cout << a << "\n";*/

  /*int g = --a;*/
  /*printf("%d \n", g);*/

  int h = a--;
  printf("%d \n", h);

  bool aEqualsb = a == b; // comoparison operators give boolean values
  printf("%b \n", aEqualsb);
  return 0;
}
