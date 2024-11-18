#include "utility.cpp"
#include "utility.h"
#include <vector>

// declaration.... says this thing called generateRandomNumbers exists, and it
// takes int argument and returns an int vector
// std::vector<int> generateRandomNumbers(int numberOfNumbers);

int main(int argc, char *argv[]) {
  std::vector<int> randomNums = generateRandomNumbers(10);
  return 0;
}
