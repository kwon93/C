#include <stdio.h>

int recursion(int a)
{
  if (a <= 0) 
      return 0;

  printf("recursion(%d)\n", a);
  return recursion(a -1);
}

int main()
{
  recursion(5);
  return 1;
}