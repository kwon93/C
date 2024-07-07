#include <stdio.h>
#include <string.h> 

/**
 * struct: 여러개의 자료형을 묶어 새로운 자료형을 만든다.
 */
struct student
{
  int number;
  char name[10];
  double grade;
};

int main()
{
  struct student s;
  printf("학번을 입력하세요.\n");
  scanf("%d", &s.number);
  printf("이름을 입력하세요.\n");
  scanf("%s", s.name);
  printf("학번: %d, 이름: %s \n", s.number, s.name);
  return 0;
}