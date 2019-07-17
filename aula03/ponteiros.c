#include <stdio.h>

/*
  A ideia aqui é dar um pequeno exemplo da explicação dada em aula sobre o ponteiro argv[1].
  Quando criamos um array em C o nome da variável criada se torna uma referência, isto é, contém o endereço do primeiro
  elemento deste array. Neste exemplo podemos notar que o valor dentro do primeiro endereço deste array pode ser acessado
  pelo seu índice (str[0]) ou utilizando ponteiros. Isto acontece pois em C não existem strings, mas sim endereços e as
  diferente formas que temos de acessá-los.
*/

int main(void){

  char str[] = "mentebinaria";

  puts(str);
  printf("%c\n", str[0]);
  printf("%c\n", *str);

  return 0;

}
