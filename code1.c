#include <stdio.h>

int main(void)
{
  int i,j;
  int k;

  printf("수를 입력하세요: ");
  scanf("%d",&k);

  while((getchar() !='0'))
  {
    for(i=1; i<=5; i++)
    {
      for( j=5; j>i-1; j--)
      {
        printf("*");

      }
      printf("\n");
    }
  }
}
