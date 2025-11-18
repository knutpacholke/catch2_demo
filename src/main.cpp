#include <iostream>
#include <string>
#include "fizzbuzz.h"

int main() {
  for (int i = 1; i <= 100; ++i) {
    std::cout<<fizzBuzz(i)<<std::endl;
  }
}
