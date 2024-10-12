#include <iostream>

int main(int argc, char *argv[]) {
  enum class Mood { // enums are basically named integers
    Happy = -1,     // defaults to 0
    Angry,          // defaults to prevous + 1
    Sad             // ....
  }; // this means we are declaring a type "Mood" which has 3 values Happy,
  // Angry, Sad
  // by using class we made Mood strongly typed
  Mood mood = Mood::Happy;

  int moodInt = (int)mood;
  std::cout << moodInt << "\n";

  Mood moodFromInt = (Mood)-143543;
  std::cout << (int)moodFromInt << "\n";

  switch (moodFromInt) { // we can also use enum values (Happy, Angry, Sad) or
                         // int values 0,1,2,3,.........
  case Mood::Happy:
    std::cout << "Happy" << "\n";
    break;
  case Mood::Angry:
    std::cout << "Angry" << "\n";
    break;
  case Mood::Sad:
    std::cout << "Sad" << "\n";
    break;
  default:
    std::cout << "no mood" << "\n";
  }
  return 0;
}
