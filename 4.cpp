#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char** argv) {

  int x,i,j;

  printf("Zadejte cislo X od 1 do 20:\n");

  if(scanf("%d",&x)!=1){
    printf("Spatny vstup.\n");
    return (1);
  }
  
  if((x<1) || (x>20)){
    printf("Zadano spatne cislo.\n");
    return(1);
  }

  for(i=x;i>0;i--){
    if(i%2==0){
      continue;
    }
    printf("%d",i);
    for(j=i;j>0;j--){
      printf(".");
    }
    printf("\n");
  }


  return (0);
}

