#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  int ids[6] = {1, 2, 3, 4, 5}; // it's same as ids[6] = {1, 2, 3, 4, 5}
  for (int i = 0; i < (sizeof(ids) / sizeof(int));
       i++) { // if we write i <=(...) we get one extra element... this is
              // called "off by one problem"
    std::cout << ids[i] << "\n";
  }
  std::cout << "In the reverse order: " << "\n";
  for (int j = sizeof(ids) / sizeof(int) - 1; j >= 0; j--) {
    std::cout << ids[j] << "\n";
  }
  for (int item : ids) {       // it's same as above code
    std::cout << item << "\n"; // the downside of this is that we don't get the
                               // index this kind of loop is called foreach loop
  }

  // the vector type gives error for off by one problem
  std::cout << "for loop for vectors: " << "\n";
  std::vector<int> idv = {1, 2, 3, 4, 5};
  for (int i = 0; i <= idv.size(); i++) {
    std::cout << idv[i] << "\n";
  }

  for (int item : idv) {
    std::cout << item << "\n";
  }

  // iterator for loop:-> iterator is like an agent to loop through the vector
  // iterator doesn't works with raw array type
  std::cout << "using iterator for loop" << "\n";
  for (std::vector<int>::iterator itr = idv.begin(); itr != idv.end(); itr++) {
    std::cout << *itr << "\n";
  }
  return 0;
}
