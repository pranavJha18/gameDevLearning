#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

std::vector<int> generateRandomNumbers(int range) {
  std::vector<int> randomNumbers;
  std::srand(std::time(nullptr));

  for (int i = 0; i < range; i++) {
    int number = std::rand() % 100 - 50;
    randomNumbers.push_back(number);
    std::cout << number << " ";
  }

  std::cout << "\n";
  return randomNumbers;
}

// & means taking arguments as a reference
// not having & means pass by value/copy, with & means pass by reference
// missing a const means that the variable can be altered
// modifier
void sortVector(std::vector<int> &vectorToSort) { // does alter the value
  for (int i = 0; i < vectorToSort.size(); i++) {
    for (int j = i + 1; j < vectorToSort.size(); j++) {
      if (vectorToSort[i] > vectorToSort[j]) {
        std::swap(vectorToSort[i], vectorToSort[j]);
      }
    }
  }
}

// accessor only
void printVector(
    const std::vector<int> &printvect) { // only reads the arguments
  for (int num : printvect) {
    std::cout << num << " ";
  }
}
