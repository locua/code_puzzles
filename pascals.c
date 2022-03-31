#include <stdio.h>
#include <stdlib.h>

/* Factorial function */
int fact(int n){
  int o=1;
  for(int i=1;i<n;i++){
    o*=(i+1);
  }
  return o;
}

int * pline(int n){
  int m=n+1;
  int * o = (int *) malloc(m*sizeof(int));
  for(int r=0;r<n;r++){
    o[r]=fact(n)/(fact(r)*(fact(n-r)));
  }
  return o;
}

/* Pascals triangle generator using dynamic memory allocation*/
int** triangle(int h){
  int **o = (int **) malloc((h+1) * sizeof(int *));
  for(int n=0;n<=h;n++){
    int c=n+1;
    o[n] = (int *) malloc(c * sizeof(int));
    for(int r=0;r<=n;r++){
      o[n][r]=fact(n)/(fact(r)*(fact(n-r)));
    }
  }
  return o;
}


int main(){
  int N=20;
  int ** t = triangle(N); 
  for(int i=0;i<=N;i++){
    for(int j=0;j<=i;j++){
      printf("%d ",t[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<=N;i++)
    free(t[i]);
  free(t);

  // Just one line to investigate bug
  //int m = 17;
  //int * l = pline(m);  
  //for(int i=0;i<=m;i++){
  //  printf("%d ",l[i]);
  //}
  //printf("\n");
  //free(l);
  return 0;
}

