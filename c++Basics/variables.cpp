// The variables consists of name, type, value and size

#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int num = 10;
  std::cout << num << "\n";
  std::string name = "golu";
  std::cout << name << "\n";
  printf("num is: %d \n", num);
  float temp = 29.5;
  std::cout << "The temperature is: " << temp << "\n";
  char charA = 'a';
  //  char charA = '$';  If the variable have the same name as some other
  //  variable then it will produce error even if the type of variable are
  //  differernt from each other
  // std::cout << charA << "\n";
  std::cout << charA << "\n";
  bool lightIsOn = false; // will produce 0 with false and 0; will produce 1
                          // with anything else
  printf("%b \n", lightIsOn);
  std::cout << "The size of int is: " << sizeof(int) << " bytes \n";
  std::cout << "The size of float is: " << sizeof(float) << " bytes \n";
  std::cout << "The size of char is: " << sizeof(char) << " bytes \n";
  std::cout << "The size of bool is: " << sizeof(bool) << " bytes \n";
  std::cout << "The size of string is: " << sizeof(std::string) << " bytes \n";

  // int newnum = 12345678912345;
  // printf("%d \n", newnum); // This will not print the desired number because
  // int
  // cannot hold this big number
  float newtemp = 45.2345687899;
  std::cout << "The new temperature is: " << newtemp
            << "\n"; // This will not print the exact value because the
                     // precision is not been set by us
  std::cout << std::setprecision(10) << newtemp
            << "\n"; // We will not see the exact value because float sets
                     // precision upto 7 decimal places
  double newtemperature =
      45.2345687899; // double provides precision upto 15 decimal places
  std::cout << std::setprecision(15) << newtemperature << "\n";
  return 0; // This completes our discussion on variables
}
