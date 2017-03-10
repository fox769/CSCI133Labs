#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "prob.h"
#include "basicmath.h"



TEST_CASE("Basic Math Division Tests","[divide]"){
  // REQUIRE(divide(10,2) == 5); // like CHECK but stops after the first failure
  SECTION("This is section 1"){
  
  CHECK(divide(10,2) == 5);
  CHECK(divide(0,3) == 0);
  CHECK(divide(9,2) == 4.5);
  }

  SECTION("This is section 2"){
    for (int i=10; i < 20; i++){
      CHECK(divide(i,2) == i/2);
    }  
    
  }
  
}
