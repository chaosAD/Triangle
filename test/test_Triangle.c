#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_getTriangleName_given_2_2_5_expects_is_isosceles(void) {
  TEST_ASSERT_EQUAL_STRING("isosceles", getTriangleName(2, 2, 5));
}

void test_getTriangleName_given_3_4_4_expects_is_isosceles(void) {
  TEST_ASSERT_EQUAL_STRING("isosceles", getTriangleName(2, 2, 5));
}

void test_getTriangleName_given_5_10_5_expects_is_isosceles(void) {
  TEST_ASSERT_EQUAL_STRING("isosceles", getTriangleName(2, 2, 5));
}

void test_getTriangleName_given_16_16_16_expects_is_equilateral(void) {
  TEST_ASSERT_EQUAL_STRING("equilateral", getTriangleName(16, 16, 16));
}

void test_getTriangleName_given_minus1_minus1_minus1_expects_is_not_a_triangle(void) {
  TEST_ASSERT_EQUAL_STRING("is not a triangle", getTriangleName(-1, -1, -1));
}

void test_getTriangleName_given_1_6_12_expects_is_scalene(void) {
  TEST_ASSERT_EQUAL_STRING("scalene", getTriangleName(1, 6, 12));
}

void test_getTriangleName_given_15_60_15_expects_is_scalene(void) {
  TEST_ASSERT_EQUAL_STRING("isosceles", getTriangleName(15, 60, 15));
}

void test_getTriangleName_given_1_0_3_expects_is_not_a_triangle(void) {
  TEST_ASSERT_EQUAL_STRING("is not a triangle", getTriangleName(1, 0, 3));
}

void test_getTriangleName_given_0_6_7_expects_is_not_a_triangle(void) {
  TEST_ASSERT_EQUAL_STRING("is not a triangle", getTriangleName(0, 6, 7));
}

void test_getTriangleName_given_9_10_0_expects_is_not_a_triangle(void) {
  TEST_ASSERT_EQUAL_STRING("is not a triangle", getTriangleName(9, 10, 0));
}

void test_getTriangleName_given_2_2_minus5_expects_is_not_a_triangle(void) {
  char *triangleName = getTriangleName(2, 2, -5);
  
  TEST_ASSERT_EQUAL_STRING("is not a triangle", triangleName);
}

void test_add_2_with_5_expect_7(void) {
  int result = add(2, 5);
  
//  printf("result = %d", result);
  
  TEST_ASSERT_EQUAL(7, result);
}

void test_add_9_with_minus20_expect_minus11(void) {
  int result = add(9, -20);
  
//  printf("result = %d", result);
  
  TEST_ASSERT_EQUAL(-11, result);
}



