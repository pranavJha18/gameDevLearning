#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {
  std::string text =
      R"""(On a foggy autumn evening, Maya wandered into an old bookstore. Shelves towered above her, casting long shadows, and the scent of aged paper filled the air. Hidden among the dusty tomes, she found a small book with a crescent moon etched in silver on its cover.

Curiosity sparked, she opened it. The pages were blank—until shimmering words appeared, speaking of a forgotten realm where abandoned stories lived. At the end of the page, a single line stood out: "To enter, one must believe."

Compelled, she whispered the words. Suddenly, the bookstore dissolved, and she was swept into darkness. When she opened her eyes, she stood in a silver-lit forest, beneath an enormous crescent moon.

A hooded figure approached, its voice soft yet commanding. "You’ve found the realm of the forgotten," they said. "Here, you can write your own story—but once you begin, there’s no turning back."

In her hand appeared a quill, and before her, a blank parchment hovered. Maya hesitated only for a moment, then began to write, her fate unfolding with every stroke.)""";
  std::stringstream ss;
  ss << text;

  std::string nextString = "";
  std::map<std::string, int> wordCountMap;
  /*ss >> nextString;*/ // this stores the first word of text in nextString
  /*std::cout << nextString << "\n";*/
  while (ss >> nextString) {
    std::string word = "";
    int lastPulledIndex = 0;
    for (char c : nextString) {
      ++lastPulledIndex;
      if (std::isalpha(c)) {
        word.push_back(std::tolower(c));
      } else {
        break;
      }
    }
    if (lastPulledIndex != nextString.size() - 1) {
      std::string leftOverWord = nextString.substr(lastPulledIndex);
      ss << ' ' << leftOverWord;
    }
    if (wordCountMap.find(word) == wordCountMap.end()) {
      wordCountMap.insert({word, 1});
    } else {
      wordCountMap[word] += 1;
    }
  }
  for (std::pair<const std::string, int> &pair : wordCountMap) {
    std::cout << "word: " << pair.first << " is repeated: " << pair.second
              << " times " << "\n";
  }
  return 0;
}
