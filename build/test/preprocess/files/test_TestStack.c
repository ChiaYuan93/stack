#include "TestStack.h"
#include "unity.h"


void setUp(){}



void tearDown(){}



void test_stackCreate_should_return_stack(void){

  Stack *stack = stackCreate();





  if ((((stack)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)12);;};

  if ((((stack->head)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)13);;};

 if ((((stack->tail)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)14);;};

}



void test_stackElementCreate_should_return_element(){

 StackElement * elem = stackElementCreate(1);



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((elem->data)), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

}
