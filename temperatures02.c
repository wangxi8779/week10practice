#include <stdio.h>
#include <stdlib.h>  // for malloc

int main() {
  float temp = 0;
  int index = 0;
  int size = 5;
  float *temperatures = malloc(sizeof(float) * size);
  scanf("%f", &temp);
  while (temp != -100) {
    if (index < (size - 1)) {
      temperatures[index] = temp;
    } else if (index == (size - 1)) {
      temperatures[index] = temp;
      float *newTemperatures = malloc(sizeof(float) * size * 2);
      for (int i = 0; i < size; i++) {
        newTemperatures[i] = temperatures[i];
      }
      free(temperatures);
      size = size * 2;
      temperatures = newTemperatures;
    }
    index++;
    scanf("%f", &temp);
  }

  for (int i = 0; i < index; i++) {
    printf("%.1f ", temperatures[index - 1 - i]);
  }
  printf("\n");
  free(temperatures);

  return 0;
}