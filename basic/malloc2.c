#include <stdio.h>
#include <stdlib.h>


/**
 * 동적 메모리 할당으로 알파벳 출력하기
 */
int main()
{
  char *pc = NULL;
  int i = 0;
  pc = (char *) malloc(100 * sizeof(char));
  if(pc == NULL)
  {
    printf("동적 메모리 할당 실패");
    exit(1);
  }

  for (i = 0; i < 26; i++)
  {
    *(pc + i)  = 'a' + i;
  }
  printf("before free: %s \n", pc);
  free(pc);
  printf("after free: %s \n", pc);
  
  return 0;
}