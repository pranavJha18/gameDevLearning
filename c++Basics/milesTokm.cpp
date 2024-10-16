#include <ios>
#include <iostream>
#include <limits>

int main() {
  const double CONVERSION = 1.609344;
  double distMi =
      0; // always give default vlaue or always initialize your variable
  std::cout << "Enter the distance in miles: " << "\n";
  std::cin >> distMi;

  while (!std::cin.good()) { // input error handling
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Error input! Please enter a number: " << "\n";
    std::cin >> distMi;
  }

  double distKm;
  distKm = distMi * CONVERSION;
  std::cout << "The distance in kilometers is: " << distKm << "\n";
  return 0;
}