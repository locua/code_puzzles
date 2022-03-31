#include <stdio.h>
#include <stdlib.h>

int fact(int n){
  int o=1;
  for(int i=1;i<n;i++){
    o*=(i+1);
  }
  return o;
}

int** triangle(int h){
  int **o = (int **) malloc(h * sizeof(int *));
  for(int n=0;n<h;n++){
    int c=n+1;
    o[n] = (int *) malloc(c * sizeof(int));
    for(int r=0;r<c;r++){
      o[n][r]=fact(n)/(fact(r+1)*(fact(n-r-1)));
    }
  }
  return o;
}

int main(){
  int n=5;
  int ** o = triangle(n); 
  for(int i=0;i<n;i++){
    int l=sizeof(o[i])/sizeof(int);
    for(int j=0;j<l;j++){
      printf("%d ",o[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<n;i++)
    free(o[i]);
  free(o);
  return 0;
}
