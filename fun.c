#include <stdio.h>
#include <stdlib.h>

#define UP 100
#define PI 3.14159 // PI yo

typedef struct {
  char * name;
  int id; 
} myob;

int power(int base, int n);

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
  
  // Dynamic memory allocation
  myob * o1 = (myob *) malloc(sizeof(myob)); // allocate a  new person
  o1->name="Vladimir";                       // access o1's members
  o1->id=48593;
  printf("\n%s had id %d. Stored at: %p\n", o1->name, o1->id, o1);
  free(o1);                                  // release the data (does not delete the variable)

  
  printf("// Print out values from an array of ints");
  printf("\nOur power function in action: power(2,8)=%d\n",power(2,8));
  printf("\n%d\nNow type some characters and if u hit the EOF i'll quit and tell you how many u typed\n",EOF);
  printf("^D to enter EOF\n");
  while((c=getchar())!=EOF){
    //putchar(c); //prints a character
    ++nc;
    if(c=='\n')
      ++nl;
    if(c=='\n'||c==' '||c=='\t') 
      ++nw;
  }
  printf("\n");
  printf("Chars, words, lines: %d, %d, %d\n", nc, nw, nl); // print number of chars, words and lines
  return 0;
}

int power(int base, int n){
  int p=1;
  for(int i=0;i<n;++i)
    p*=base;
  return p;
}
