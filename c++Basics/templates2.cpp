#include <iostream>
#include <string>

template <typename T> T sum(T t) { return t; }

template <typename ArgOne, typename... Others>
ArgOne sum(ArgOne argOne, Others... others) {
  return argOne + sum(others...);
}

std::string sum(std::string t) { return t; }

template <typename... Others>
std::string sum(std::string argOne, Others... others) {
  return argOne + " " + sum(others...);
}

int main(int argc, char *argv[]) {
  std::cout << sum(1, 2, 23.5) << "\n";
  std::cout << sum(std::string{"Golu"}, std::string{"Jha"}) << "\n";
  return 0;
}
