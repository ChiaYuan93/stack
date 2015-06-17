#include "unity.h"
#include "TestStack.h"

void setUp(){}

void tearDown(){}

void test_stackCreate_should_return_stack(void){
  Stack *stack = stackCreate();


  TEST_ASSERT_NOT_NULL(stack);
  TEST_ASSERT_NULL(stack->head);
	TEST_ASSERT_NULL(stack->tail);
}

void test_stackElementCreate_should_return_element(){
	StackElement * elem = stackElementCreate(1);
  
	TEST_ASSERT_EQUAL(1,elem->data);
}

void test_stackAdd_should_pass_the_test(){
  
  StackElement *addElement = malloc(sizeof (StackElement));
  
  
}