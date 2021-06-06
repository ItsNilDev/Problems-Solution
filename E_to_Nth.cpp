#include <iostream>
#include <string>

int main() {
  std::string pi = "2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274";
  std::cout << "Input The Number: (limit is 100)" << std::endl;
  int number = 0;
  std::cin >> number;
  while(number > 100) {
    std::cout << "I told you the limit!" << std::endl;
    std::cin >> number;
  }
  while (number < 1) {
    std::cout << "Really, What do you expect to print?!" << std::endl;
    std::cin >> number;
  }
  std::cout << pi.substr(0, number + 2) << std::endl;
}

