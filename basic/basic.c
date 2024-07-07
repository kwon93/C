#include <stdio.h>

/**
 * 두 변수의 값을 서로 변환하는 포인터 함수 
 */
void swap(int *x, int *y)
{
  int temp;
  temp = *x; //pointer가 가리키는 값 가져오기 
  *x = *y;
  *y = temp;
}

int main(void)
{
  int x = 1;
  int y = 2;
  swap(&x, &y);

  printf("x: %d, y: %d \n", x, y);
  return 1;
}