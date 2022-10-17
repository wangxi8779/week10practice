#include <stdio.h>
#include <stdlib.h>  // for malloc
 

int main() {
  float temp = 0;
  int index = 0;
  float *temperatures = malloc(sizeof(float) * 5);
  scanf("%f", &temp);
  while(temp != -100) {
    if (index < 4) {
      temperatures[index] = temp;
    }
    else if (index == 4) {
      temperatures[index] = temp;
      float *newTemperatures = malloc(sizeof(float) * 10);
      for(int i = 0; i < 5; i++) {
        newTemperatures[i] = temperatures[i]; 
      }
      free(temperatures);
      temperatures = newTemperatures;
    } else if (index > 4 && index < 10) {
      temperatures[index] = temp;
    } 
    index++;
    scanf("%f", &temp);
  }

  int length;
  if (index > 10) {
    length = 10;
  } else {
    length = index;
  }

  for(int i = 0; i < length; i++){
    printf("%.1f ", temperatures[length - 1 - i]);
  }
  printf("\n");
  free(temperatures);

  return 0;
}