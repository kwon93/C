#include <stdio.h>

/**
 * ptr가 가리키는 주소의 값 변경하기 
 */
int main(void)
{
  int i = 10;
  int *p;
  
  p = &i;
  printf("i = %d\n",i);

  *p = 20;
  printf("i = %d\n",i);

  return 0;
}