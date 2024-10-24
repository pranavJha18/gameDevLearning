#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <vector>

int main(int argc, char *argv[]) {

  std::vector<int> randomNumbers;
  std::srand(std::time(nullptr));

  for (int i = 0; i < 12; i++) {
    int number = std::rand() % 100 - 50;
    randomNumbers.push_back(number);
    std::cout << number << " ";
  }

  std::cout << "\n";

  /*int smallest = std::numeric_limits<int>::max();*/ // this is the first
                                                      // approach
  /*for (int num : randomNumbers) {*/
  /*  if (num < smallest) {*/
  /*    smallest = num;*/
  /*  }*/
  /*}*/

  /*std::cout << "The smallest number is: " << smallest << "\n";*/

  if (!randomNumbers.empty()) {
    int smallest = randomNumbers[0];
    for (int num : randomNumbers) {
      if (num < smallest) {
        smallest = num;
      }
    }

    std::cout << "The smallest number is: " << smallest << "\n";
  } else {
    std::cout << "The number is empty" << "\n";
  }

  return 0;
}
