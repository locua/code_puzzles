#include <stdio.h>

#define UP 100
#define PI 3.14159 // PI yo

int main(){
  int x=1000;
  while(x>UP){
    x-=100;
    printf("%d",x);
  }
  printf("\nHello Schmworld\n");
  printf("%1.3f \n",PI);
  int c;
  int nc, nw, nl; 
  int ndigit[10];
  nc=nl=nw=0; 
  for(int i=0;i<10;i++)
    ndigit[i]=i;
  for(int i=0;i<10;i++)
    printf("%d",ndigit[i]);
  printf(" // Print out values from an array of ints");
  printf("\n%d\nNow type some characters and if u hit the EOF i'll quit and tell you how many u typed\n",EOF);
  while((c=getchar())!=EOF){
    //putchar(c); //prints a character
    ++nc;
    if(c=='\n')
      ++nl;
    if(c=='\n'||c==' '||c=='\t') 
      ++nw;
  }
  printf("\n");
  printf("Chars, words, line: %d, %d, %d\n", nc, nw, nl); // print number of chars, words and lines
  return 0;
}