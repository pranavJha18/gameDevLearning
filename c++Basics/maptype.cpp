// In vectors we can store any type we want not just int or string

#include <iostream>
#include <map>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string>
      names; // In this arrangement we have to make sure that indices of names
  std::vector<int>
      ids; // and indices of ids are same otherwise we can make mistakes
  std::map<std::string, int> IDS{{"steve", 123}, {"adam", 231}, {"ava", 533}};
  std::cout << IDS["adam"] << "\n"; // use keys instead of index to find values

  IDS["adam"] = 233;
  std::cout << IDS["adam"] << "\n";

  IDS.insert({"leo", 787});
  std::cout << IDS["leo"] << "\n";

  IDS.erase(
      "leo"); // the erase function erases the leo key-value pair from the map
  std::cout << "the size of IDS is: " << IDS.size() << "\n";
  std::cout << IDS["leo"]
            << "\n"; // this one actually checks if "leo" exists, if not, it
                     // adds the a leo basically doing   IDS.insert({"leo", 0});
  std::cout << "the size of IDS is: " << IDS.size() << "\n";

  /*IDS.clear(); // this removes everything from IDS*/
  /*std::cout << "the size of IDS is: " << IDS.size() << "\n";*/
  bool exists = IDS.find("leo") == IDS.end();
  std::cout << exists << "\n";
  return 0;
}
