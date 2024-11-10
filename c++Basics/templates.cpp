#include <ctime>
#include <iostream>
#include <string>
#include <vector>

template <typename T> void printMsg(T msg, bool newLine) {
  std::cout << msg;
  if (newLine) {
    std::cout << "\n";
  }
}

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

void sortVector(std::vector<int> &vectorToSort) { // does alter the value
  for (int i = 0; i < vectorToSort.size(); i++) {
    for (int j = i + 1; j < vectorToSort.size(); j++) {
      if (vectorToSort[i] > vectorToSort[j]) {
        std::swap(vectorToSort[i], vectorToSort[j]);
      }
    }
  }
}

template <typename T> void printVector(const std::vector<T> &printvect) {
  for (int element : printvect) {
    std::cout << element << " ";
  }
}

int main(int argc, char *argv[]) {
  printMsg<std::string>("Hello c-plus-plus!", true);
  printMsg<int>(17, true);
  std::vector<int> randNum = generateRandomNumbers(20);
  sortVector(randNum);
  printVector(randNum);
  std::cout << "\n";
  return 0;
}
