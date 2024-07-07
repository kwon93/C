#include <stdio.h>

int main()
{
  char input[1001];
  gets(input);

  int count = 0;
  // \0 == null 배열안에 문자열 외의 공간은 null로 채워진다.
  while (input[count] != '\0')
  {
    count++;
  }

  printf("입력한 문자의 길이는 : %d \n", count);
  return 0;
}