#include <iostream>
#include <limits>

int main(int argc, char *argv[]) {
  int age;
  std::cout << "Please enter your age: " << "\n";
  std::cin >> age;
  if (age > 20) { // inside () a bool is expected, if the bool is true, then
                  // only the code inside the if {} will be executed
    std::cout << "You are old enough to play the game " << "\n";
  } else if (age > 10) {
    std::cout << "You can play this game with some adult " << "\n";
  } else { // when the code in if (...) is false then only the code inside else
           // {...} block is executed
    std::cout << "You are too young to play this game!" << "\n";
  }
  // {....} is called a scope, a code block
  // if here we do :-> if (age) it will always evaluate and will be true
  // unless the value of age is 0 here in the if() the compiler tries to
  // convert our inputs to a bool so even if we pass a string it will be legal
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                  '\n'); // Ignore everything until the next newline
  /*int a;*/
  /*std::cin >> a;*/
  /*if (a = 10) { // this will always result to true because the (a = 10)
   * assigns*/
  /*              // the value 10 to a everytime even if the iput is
   * different*/
  /*  std::cout << "you are: " << a << " years old!" << "\n";*/
  /*}*/
  return 0;
}
