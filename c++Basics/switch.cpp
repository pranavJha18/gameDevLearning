#include <iostream>

int main(int argc, char *argv[]) {
  int age = 15;
  switch (age) { // switch only allows int or enum types
    /*case 6:*/
    /*  std::cout << "go to elementary school" << "\n";*/
    /*  break;*/
    /**/
    /*case 12:*/
    /*  int i = 12;*/
    /*  std::cout << i << "\n";*/
    /*  std::cout << "go to middle school" << "\n";*/
    /*  break;*/
    /**/
    /*case 15:*/
    /*  std::cout << "go to high school" << "\n";*/
    /*  break;*/

  case 6:
  case 15:
    std::cout << "go to the next level" << "\n";
    break;

  case 12: { // to initialize any variable inside switch we need to surround the
             // case with {...}, for simply printing a value we don't need the
             // {...}
    int i = 12;
    std::cout << i << "\n";
    std::cout << "go to middle school" << "\n";
    break;
  }
  default:
    std::cout << "stay at your school" << "\n";
    break;
  }
  return 0;
}
