#include <stdio.h>

int test(int a)
{
  return 2 * a;
}

int main()
{
  /**
   * 함수의 이름은 그 자체가 주소다.
   * 함수의 이름을 저장할 수 있는 포인터가 함수 포인터다.
   * 함수 포인터가 꼭 필요한 시점은 여러 사람이 함께 작업할 때
   */
  
  // test(5);
  int (*pfTest)(int) = test; //pointerFunction
  printf("%d \n",pfTest(5));

  return 0;
}
