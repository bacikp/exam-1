#include <stdio.h> 
#include <stdlib.h>

void printing(int count, int starter, int end){
  
  int i;	
	
  if(starter==end){
    printf("%d\n",starter);
    return;
  }
  
  for(i=0;i<count;i++,starter--){
    printf("%d\t",starter);
  }
  printf("\n");
  printing(count-1,starter-end+count,end);
  return;
}

int main(int argc, char** argv) {

  int x, powerx;

  printf("Zadejte cislo X od 1 do 10:\n");

  if(scanf("%d",&x)!=1){
    printf("Spatny vstup.\n");
    return (1);
  }
  
  if((x<1) || (x>10)){
    printf("Zadano spatne cislo.\n");
    return(1);
  }

  powerx=x*x;

  printing(x,powerx,x);

  return (0);
}

