#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  // arrays can hold elements of any types
  // arrays do not change size
  // size of an array is one bigger than the index of last elenent
  int IDA[] = {123, 432, 523, 564};

  // {...} is called initilaizer list
  std::vector<int> IDV = {123, 432, 523, 564};

  std::cout << "The first element of IDA is: " << IDA[0] << "\n";
  std::cout << "The first element of IDV is: " << IDV[0] << "\n";
  std::cout << "The last element of IDA is: "
            << IDV[sizeof(IDA) / sizeof(int) - 1] << "\n";
  std::cout << "The last element of IDV is: " << IDV.back() << "\n";
  std::cout << "The size of IDA is: " << sizeof(IDA) / sizeof(int) << "\n";
  std::cout << "The size of IDV is: " << IDV.size() << "\n";

  // vecotrs can grow and even shrink
  // grow:->
  IDV.push_back(675);
  std::cout << "The last element of IDV is: " << IDV.back() << "\n";
  std::cout << "The first element of IDV is: " << IDV.front() << "\n";

  // insert:->
  IDV.insert(IDV.begin() + 1, 112);
  std::cout << "The first element of IDV is: " << IDV.front() << "\n";
  std::cout << "The second element of IDV is: " << IDV[1] << "\n";

  // remove:->
  IDV.erase(IDV.begin());
  std::cout << "The first element of IDV is: " << IDV.front() << "\n";
  IDV.shrink_to_fit();
  return 0;
}
