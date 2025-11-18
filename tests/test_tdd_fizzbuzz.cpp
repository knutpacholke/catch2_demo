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

TEST_CASE("For input as multiple of 3 output should be Fizz") {
  REQUIRE(fizzBuzz(6) == "Fizz");
}

TEST_CASE("For input as multiple of 5 output should be Buzz") {
  REQUIRE(fizzBuzz(10) == "Buzz");
}

TEST_CASE("For input multiple of both 3 & 5 output should be FizzBuzz") {
   REQUIRE(fizzBuzz(15) == "FizzBuzz");
}
