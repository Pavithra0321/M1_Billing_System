#include "unity.h"
#include "func.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_get_userdetails()
{
    int d;
    int c=2;
    TEST_ASSERT_EQUAL(1,get_userdetails(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_get_userdetails);
  return UNITY_END();
}