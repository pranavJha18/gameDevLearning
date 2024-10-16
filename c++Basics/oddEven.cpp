#include <ios>
#include <iostream>
#include <limits>
#include <string>

int main(int argc, char *argv[]) {
  int num = 0;
  std::cout << "Enter a number: \n";
  std::cin >> num;

  std::string input;
  std::getline(std::cin, input);

  while (!std::cin.good()) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Error input! Please enter an integer \n";
    std::cin >> num;
  }

  if (num % 2 == 0) {
    std::cout << num << " is an even number \n";
  } else {
    std::cout << num << " is an odd number \n";
  }
  return 0;
}
