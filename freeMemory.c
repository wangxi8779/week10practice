#include<stdio.h>
#include<stdlib.h> // for malloc

int main() {
    char *vals;
    vals = malloc(sizeof(char)*20);
    if(vals == NULL) {
      printf("error allocating memory\n");
      return 1;  
    }
    //initialise string
    for(int i=0; i <20; i++){
        vals[i]=0;
    }
    printf("vals are: %s\n",vals);
    free(vals);
}