#include <stdio.h>

int gugu(a)
{
  int i,j;
  int k;

    for( i=a; i<=a; i++)
    {
      for( j=1; j<=9; j++)
      {
       printf("%d*%d=%d",i,j,i*j);
       printf("\n");

      }
    }
}



int main(void)
{
  int a;
  while (1)
  {
    printf("원하는 단의 수 입력 : ");
    scanf("%d", &a);

    if (a == 0) break;

    gugu(a);

  }
}
