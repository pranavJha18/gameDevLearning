#include <iostream>

int main(int argc, char *argv[]) {
  std::string employees[] = {"golu", "mitthu",
                             "sonu"}; // this is an array of string
  std::cout << employees[1] << "\n";
  // if you used index out of bounds of an array then it wil do undefined
  // behaviour
  employees[1] = "kurrukie";
  std::cout << employees[1] << "\n";
  std::cout << sizeof(employees) / sizeof(std::string)
            << "\n"; // by dividing the size of array by the size of data type
                     // of element stored in the array we get the number of
                     // elements in that array
  return 0;
}
