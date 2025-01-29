#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

// Test cases for Sum function
TEST_CASE("Sum function") {
    REQUIRE(Sum({1, 2, 3}) == 6);  

}

// Test cases for Product function
TEST_CASE("Product function") {
    REQUIRE(Product({2, 3, 4}) == 24);  
      
}

// Test cases for Factorial function
TEST_CASE("Factorial function") {
    REQUIRE(Factorial(5) == 120); 
}

// Test cases for AddN function
TEST_CASE("AddN function") {
    REQUIRE(AddN({1, 2, 3}, 2) == std::vector<int>({3, 4, 5})); 
    REQUIRE(AddN({}, 5) == std::vector<int>({}));              
}


// Test cases for int Sign function 
TEST_CASE("Sign function (int)") {
    REQUIRE(Sign(-5) == -1);  
    REQUIRE(Sign(7) == 1);    
}

// Test cases for double Sign function 
TEST_CASE("Sign function (double)") {
    REQUIRE(Sign(-3.5) == -1.0); 
    REQUIRE(Sign(2.7) == 1.0);  
}