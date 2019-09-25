#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dec(char *str){
  for(unsigned i = 0; i < strlen(str); i++){
    str[i] ^= 0x12;
  }
  return str;
}

static void erro(char *str){
  fprintf(stderr, dec(str));
}

int main(int argc, char **argv){

  char s1[] = "W@@]";
  char s2[] = "U}}v2X}p";

  if(argc == 2){
    if(*argv[1] == 'M'){
      unsigned len = strlen(argv[1]);
      if(len < 10){
        erro(s1);
      }else{
        puts(dec(s2));
      }  
    }else{
      erro(s1);
    }
  }else{
    erro(s1);
  }

  return 0;

}
