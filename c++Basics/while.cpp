#include <iostream>

int main(int argc, char *argv[]) {
  int i = 0;
  while (i < 10) { // this is same as for (int i = 0; i < 10; i++)....
                   // while(condition) is same as for(;condition;)
    if (i == 9) {
      i++;
      continue; // this will cause infinite loop
    }
    std::cout << i << "\n";
    i++;
  }
  // for(int i = n; i < num; ++i) this is faster than i++ because it does not
  // copies initial value of i

  int m = 10;
  do { // do while loop will execute the code in {...} once before checking the
       // condition
    std::cout << m << "\n";
    m++;
  } while (m < 10);
  return 0;
}
