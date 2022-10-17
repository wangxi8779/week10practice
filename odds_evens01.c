#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  scanf("%d", &number);
  int *numbers = malloc(sizeof(int) * number);
  int *evens = malloc(sizeof(int) * number);
  int *odds = malloc(sizeof(int) * number);
  int evens_index = 0;
  int odds_index = 0;

  for (int i = 0; i < number; i++) {
    scanf("%d", &numbers[i]);
    if (numbers[i] % 2 == 0) {
      evens[evens_index] = numbers[i];
      evens_index++;
    } else {
      odds[odds_index] = numbers[i];
      odds_index++;
    }
  }

  for (int i = 0; i < odds_index; i++) {
    printf("%d ", odds[i]);
  }
  printf("\n");

  for (int i = 0; i < evens_index; i++) {
    printf("%d ", evens[i]);
  }
  printf("\n");

  free(numbers);
  free(evens);
  free(odds);

  return 0;
}
