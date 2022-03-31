#include <stdio.h>
#include <stdlib.h>
/* C-strings, pointers arrays and chars.*/
int main(){
  printf("Vowels:\n");
  char c='A';
  char *pc=&c; 
  char v[]={'A','E','I','O','U'};
  char *pv = v;
  printf("A char is %ld byte.\n", sizeof(v[0]));
  printf("Print a char: %c\n",c);
  printf("Print the char via a pointer: %s \n", pc);
  int l = sizeof(v)/sizeof(v[0]); // get the length of the array (5)
  for(int i=0;i <l;++i) // print addresses of characters
    printf("&v[%d]: %p, pv + %d: %p, v + %d: %p\n", i, &v[i], i, pv + i, i, v + i);
  for (int i = 0; i < 5; i++) // Print the values
    printf("v[%d]: %c, *(pv + %d): %c, *(v + %d): %c\n", i, v[i], i, *(pv + i), i, *(v + i));
  return 0;
}
