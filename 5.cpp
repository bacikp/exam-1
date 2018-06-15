#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char** argv) {

  int numbers[20];
  int input;
  int i = 20;
  int j;

  for(j=0;j<20;j++){
    numbers[j]=0;
  }

  while(i>0){
    i--;
    if(scanf("%d",&input)!=1){
      printf("Spatny vstup.\n");
      return (1);
    }
    if(input<0 || input > 15){
      printf("Zadane spatne cislo.\n");
      return(1);
    }
    if(input == 0){
      break;
    }
    numbers[input-1]++;
  }

  for(j=0;j<20;j++){
    if(numbers[j]==0){
      continue;
    }
    printf("%d - %dx\n", j+1,numbers[j]);
  }

  return (0);
}
