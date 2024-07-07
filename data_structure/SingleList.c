#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>

typedef struct NODE
{
  char szData[64];
  struct NODE* next;
  
} NODE;

NODE* g_pHead = NULL;

/**
 * 연결리스트 전체 데이터 출력 함수
 */
void printList(void)
{
  while (g_pHead != NULL)
  {
    printf("[%p] %s\n, next[%p]",g_pHead, g_pHead->szData, g_pHead->next);
    g_pHead = g_pHead->next;
  }
  
}

int insertNewNode(char* pszData)
{
  NODE* pNode = (NODE*) malloc(sizeof(NODE));
  memset(pNode, 0, sizeof(NODE));
  strcpy_s(pNode->szData, sizeof(pNode->szData), pszData);

  if (g_pHead == NULL)
  {
    g_pHead = pNode;
  }
  else
  {
    pNode->next = g_pHead;
    g_pHead = pNode;
  }
  
  return 1;
}

int main()
{
  //List Test code
  return 0;
}