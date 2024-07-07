#include <stdio.h>

typedef struct NODE
{
  // value
  int nData;

  // 다음 노드를 가리키는 포인터
  struct NODE* next;
} NODE;

int main()
{
  NODE list[5] = {0};
  //값 초기화 
  list[0].nData = 100;
  list[1].nData = 200;
  list[2].nData = 300;
  list[3].nData = 400;
  list[4].nData = 500;

  //연결리스트 구조화 
  list[0].next = &list[1];
  list[1].next = &list[2];
  list[2].next = &list[3];
  list[3].next = &list[4];
  list[4].next = NULL;


  // for (int i = 0; i < 5; i++)
  //   printf("list[%d] : %d\n", i, list[i].nData);
  
  //pointer로 chain
  NODE* pTemp = &list[0];
  while (pTemp != NULL)
  {
    printf("%p : %d\n", pTemp , pTemp->nData);
    pTemp = pTemp->next;
  }
  
  return 0;
}