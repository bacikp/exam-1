#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char** argv) {

int x, i, j;

  printf("Zadejte cele cislo X:\n");

  if(scanf("%d",&x)!=1){
    printf("Spatny vstup.\n");
    return (1);
  }

  if(x<=0){
    printf("Zadano spatne cislo.\n");
    return(1);
  }


  for(i=1;i<=x;i++){
    for(j=0;j<i;j++){
      printf("*");
    }
    printf("\n");
  }

  return (0);
}

