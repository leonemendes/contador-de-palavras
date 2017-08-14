/* Contador de palavras
 * Leone Almendro Mendes
 * RA: 172125
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c, last, lastbutone;
  int words = 0;

  c = 1;
  last = 1;
  lastbutone = 1;

  while (c != '\n') {
    scanf("%c", &c);
    if(c == ' ' || c == '.' || c == ',' || c == '!' || c == '?' || c == '-' || c == ';' || c == ':' || c == '\n'){
      
      if((last >= 0x41 && last <= 0x5A) || (last >= 0x61 && last <= 0x7A) || (last >= 0x30 && last <= 0x39)){
	words ++;
      }
    }
    if(((lastbutone) >= 0x30 && (lastbutone) <= 0x39) && (last == '.' || last == ',') && ((c >= 0x30) && (c <= 0x39))){
      words --;
    }
    lastbutone = last;
    last = c;
  }

  printf("%d\n", words);
  return 0;
}
