#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  
  char * input = malloc(50 * sizeof(char));
  int inputL;
  input = gets(input);
  inputL = strlen(input);
  long total = 0;
  
  if(input[0] == input[inputL-1]){
    total += (input[0]-48);
    
  }
  for(int i = 0; i < inputL-1; i ++){
    if(input[i] == input[i+1]){
      printf(" -%d- ",total);
      printf(" /%d/ \n", input[i]-48);
      total += (input[i]-48);
    }
  }
  printf(" |%d| ",total);
  
  return 0;
}

