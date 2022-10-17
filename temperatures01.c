#include <stdio.h>
#include <stdlib.h>  // for malloc
#include <string.h>  // for string funs

int main() {
  int number;
  // read in number of the temperature
  printf("how many temperature you want to read in: ");
  scanf("%d", &number);
  float *temperatures;
  temperatures = malloc(sizeof(float) * number);
  for (int i = 0; i < number; i++) {
    printf("Enter the temperature: ");
    scanf("%f", &temperatures[i]);
  }
  for(int i =0; i < number; i ++){
    printf("%.1f ", temperatures[number-1-i]);
  }
  printf("\n");


  free(temperatures);

  return 0;
}