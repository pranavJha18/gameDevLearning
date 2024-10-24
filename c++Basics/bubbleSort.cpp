#include <cstdlib>
#include <ctime>
#include <iostream>
#include <utility>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> randomNumbers;
  std::srand(std::time(nullptr));

  for (int i = 0; i < 12; i++) {
    int number = std::rand() % 100 - 50;
    randomNumbers.push_back(number);
    //  std::cout << number << " ";
  }

  std::cout << "\n";

  // bubble sort is slow but simple

  for (int i = 0; i < randomNumbers.size(); i++) {
    for (int j = i + 1; j < randomNumbers.size(); j++) {
      if (randomNumbers[i] > randomNumbers[j]) {
        std::swap(randomNumbers[i], randomNumbers[j]);
      }
    }
  }

  for (int num : randomNumbers) {
    std::cout << num << " ";
  }

  return 0;
}
