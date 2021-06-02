#include <iostream>
#include <math.h>
#include <string>

int current_prime = 5;

int gen_next_prime(std::string if_want_next_prime) {
  if(if_want_next_prime == "y") {
A:
  for (int i = 3; i < current_prime/2; i += 2) {
    if (current_prime % i == 0) {
      current_prime += 2;
      goto A;
      }
    }
  }
  current_prime += 2;
  return current_prime - 2;
}

int main() {
  std::cout << 2 << std::endl << 3 << std::endl;
  std::cout << "Print the next prime? y/n: " << std::endl;
  std::string if_want_next_prime = "";
  while (true) {
    std::cin >> if_want_next_prime;
    std::cout << "Next Prime is :" << gen_next_prime(if_want_next_prime) << std::endl;
  }
}

