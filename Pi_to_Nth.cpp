#include <iostream>
#include <string>

int main() {
  std::string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
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

