#include <stdio.h>
#include <windows.h>

void erro(){
  MessageBox(NULL, "!!!", "ERRO", MB_OKCANCEL);
  ExitProcess(1);
}

int main(int argc, char **argv){

  if(argc == 2){
    if(*argv[1] == 'M'){
      puts("Good job!");
    }else{
      erro();
    }
  }else{
    erro();
  }

  return 0;

}
