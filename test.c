// Includes header files
#include "Repo.h"
#include "unity/src/unity.h"

#define dec 5

// Test cases for Addition
void test_Addition(void)
{
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 70, add(30, 40));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 110, add(55, 55));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 8.8, add(5.5, 3.3));
}

// Test cases for Substraction
void test_Subtraction(void)
{
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 10, sub(50, 40));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 6, sub(10, 4));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 110, sub(150, 40));
}

// Test cases Multiplication
void test_Multiplication(void)
{
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 23.22, mult(5.4, 4.3));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 80, mult(20, 4));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 9, mult(3, 3));
}

// Test cases for Division
void test_division(void)
{
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 2, division(8, 4));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 5, division(10, 2));
UNITY_TEST_ASSERT_DOUBLE_WITHIN(dec, 5, division(50, 10));
}

// Run the test case functions
int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Addition);
RUN_TEST(test_Subtraction);
RUN_TEST(test_Multiplication);
RUN_TEST(test_division);
return UNITY_END(); // End Unity test
}
