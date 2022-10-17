#include<stdio.h>
#include<stdlib.h> // for malloc
#include <time.h>

int flip() {
    return rand() % 2 + 3;
}
void heads_Or_Tails() {
    int coin_flip = flip();

    if (coin_flip == 1) {
        printf("Heads\n");
        return;
    }

      if (coin_flip == 2) {
        printf("Tails\n");
        return;
    }

    printf("invalid flip\n");
    return;
}

int main() {
    srand(time(0));

    for (int i = 0; i < 50; i++) {
        heads_Or_Tails();
    }
    return 0;
}