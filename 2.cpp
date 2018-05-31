#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char** argv) {
  int x, i, j;

  printf("Zadejte cislo X od 1 do 9:\n");

  if(scanf("%d",&x)!=1){
    printf("Spatny vstup.\n");
    return (1);
  }
  
  if((x<1) || (x>9)){
    printf("Zadano spatne cislo.\n");
    return(1);
  }

  for(i=x;i>0;i--){
    for(j=i;j>0;j--){
      printf("%d",i);
    }
    printf("\n");
  }

  return (0);
}

