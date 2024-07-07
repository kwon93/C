#include <stdio.h>
#include <stdlib.h>

/**
 * program 실행 도중 동적으로 메모리를 할당
 * 동적 메모리 사용이 끝나면 명시적으로 반납해야함.
 */
int main()
{
  int *pi; //pointer integer
  pi = (int *)malloc(sizeof(int)); // malloc : 메모리를 할당 (int = 4byte)

  if (pi == NULL)
  {
    printf("dynamic memory fail \n");
    exit(1);
  }

  *pi = 100;
  printf("%d\n", *pi);

  //동적 메모리 반환
  free(pi);
  
  return 0;
}