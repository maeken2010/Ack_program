#include "stdio.h"

int Ack(int,int);

int main(){

  int x1 = 4;
  int x2 = 1;

  int a = Ack(x1,x2);
  printf("Ack(%d,%d)=%d\n",x1,x2,a);

  return (0);
}

int Ack(int x1,int x2){
  while(1){
    if(x1==0 && x2!=0){
      x2 += 1;
      break;
    }
    else if(x1!=0 && x2==0){
      x1 -= 1;
      x2 = 1;
    }
    else{
      x1 -= 1;
      x2 = Ack(x1+1,x2-1);
    }
  }
  return(x2);
}
