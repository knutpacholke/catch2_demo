#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include <string>
#include "fizzbuzz.h"

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...

  return result;
}

TEST_CASE("Can call FizzBuzz function") {
  REQUIRE(fizzBuzz(1) == "1");
}
TEST_CASE("For input as 3 output should be Fizz") {
  REQUIRE(fizzBuzz(3) == "Fizz");
}

