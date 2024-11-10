#include <ctime>
#include <iostream>
#include <string>
#include <vector>

// the name of the functions can be same as long as the arguments are different
// the rerurn type alone is not sufficient to distinguish between two functions
// of same name their arguments have to be different to distinguish them
// this creates a function called printHelloWorld
void printHelloWorld() { // it is called function signature
  // body of the function
  std::cout << "Hello World \n";
}
// the order of the functions do matter so if we want to call any function A
// inside any other function B then A shoud be defined before B
void printMsg(
    std::string msg,
    bool newLine) { // this function takes one argument as a string type
  std::cout << msg;
  if (newLine) {
    std::cout << "\n";
  }
  printHelloWorld();
  std::cout << "\n";
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

int main(int argc, char *argv[]) { // this is the entry point of the program
  printHelloWorld();
  printMsg("Golu is my name", true);
  std::vector<int> randNum = generateRandomNumbers(20);
  std::vector<int> randNum2 = generateRandomNumbers(10);
  return 0;
}
