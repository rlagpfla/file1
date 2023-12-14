#include <stdio.h>

int sorting(int A[9])
{
  int m,n,temp,key,i;
  A[m]=key;

  for(m=0; m<9; m++)
  {
    for(n=m+1; n<9; n++)
    {
      if(A[m]>A[n])
      {
        key=A[n];
        temp=A[m];
        A[m]=A[n];
        A[n]=temp;
      }
    }
  }

  for(i=0; i<9; i++)
  {
    printf("%d ",A[i]);
  }
};

int main() {

  int x,y;
  int A[9]={5,8,3,6,2,5,9,6,7};

    sorting(A);
};
