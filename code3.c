#include<stdio.h>
int main(void) {

  int a;

  printf("성적을 입력하세요: ");
  scanf("%d",&a);

  while(1) {
    if(a>=95) {
      printf("A"); break;
    }
    else if(a>=90) {
      printf("B"); break;
    }
    else if(a>=85) {
      printf("C"); break;
    }
    else if(a>=0) {
      printf("F"); break;
    }
    printf("성적을 입력하세요. ");
    scanf("%d",&a);
  }
}
