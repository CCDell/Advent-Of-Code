#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  
  char * input = malloc(50 * sizeof(char));
  int inputL;
  input = gets(input);
  inputL = strlen(input);
  long total = 0;

  printf("%d", inputL/2);
  
  for(int i = 0; i < inputL; i ++){
    
    if(input[i] == input[(inputL/2+i >= inputL ? (inputL/2 +i) - inputL : inputL/2+i) ]){
      printf(" -%d- ",total);
      printf(" /%d/ \n", input[i]-48);
      total += (input[i]-48);
    }
  }
  printf(" |%d| ",total);
  
  return 0;
}
