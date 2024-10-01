#include <iostream>

int main(int argc, char *argv[]) {
  // get the sum of the numbers from 1 to 100
  int sum = 0;
  // for loops keep looking or keep calling the code in the {...} again and
  // again untill the condition is false
  // for (initialization; condiotion; incrementation)
  // initialization is called once in the begining of the for loop
  // avoid infinite loop, be sure that your conditon is false at some point
  /*for (int i = 1; i <= 100; i++) {*/
  /*  sum = sum + i;*/
  /*  i++;*/
  /*}*/
  int i = 1;
  for (;;) {
    if (i > 100)
      break;
    if (i == 99) {
      i++;
      continue; // without i++ it wil create an infinite loop
      // incrementation is called at end of the each loop even if we use
      // continue
    }
    sum = sum + i;
    i++;
  }
  std::cout << sum << "\n";
  return 0;
}
