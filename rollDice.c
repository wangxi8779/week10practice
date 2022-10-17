#include<stdio.h>
#include<stdlib.h> // for malloc
#include <time.h>
//roll a dice
int roll() {
    return rand() % 6 + 1;
}
int main() {
    srand(time(0));
    printf("roll(): %d\n", roll());
    return 0;
}

// roll twenty 
int roll() {
    return rand() % 6 + 1;
}

void roll20() {
    for (int i = 0; i < 19; i++) {
        printf("%d, ", roll());
    }
    printf("%d\n", roll());
    return;
}
 int main() {
    srand(time(0));
    roll20();

    return 0;
 }