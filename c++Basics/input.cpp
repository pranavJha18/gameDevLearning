#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  int age;
  std::cout << "Please enter ur age: " << "\n";
  std::cin >> age;
  std::cin
      .clear(); // to clear the error, tell buffer that everything is ok... if
                // we give it anything other than int it will give it to name
  std::cin.ignore(10000);
  std::string name;
  std::cout << "Please enter ur name: " << "\n";
  std::cin >> name;
  std::cout << "Hello " << age << " " << "years old " << name << "\n";
  return 0;
}
