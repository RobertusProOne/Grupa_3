#include <stdio.h>

int main()
{
  int x=0;
  srand((unsigned int)time(NULL));
  do 
  {
  x=1 + rand() %6;
  printf("Wylosowano: %d\n", x);
  }
  while (x!=6);
  return 0;
  }
