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
  long nc=0;
  printf(EOF);
  while((c=getchar())!=EOF){
    //putchar(c); //prints a character
    ++nc;
  }
  printf("%ld\n", nc); 
  return 0;
}
