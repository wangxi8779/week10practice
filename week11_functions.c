#include<stdio.h>
#include<stdlib.h> // for malloc
// A function in C is made up of:
//1. return type, 2. name, 3.parameters and 4. body
//eg:
int two_plus_two() {
    return 2+2;
}

void print_greeting() {
    printf("Hello there\n");
    return; // returns nothing
}

//void: means "no data type" and "Nothing"
void nothing_to_see_here(){
    return;
}
int value = nothing_to_see_here();
//error: because this function returns nothing
void* data_p = ....;// A pointer that points to
//some unkown data type

// calling a function
int twelve() {
    return 12;
}
int number = twelve();
double number = twelve();
// this called an implicit conversion
//--e.g. the integer was converted to a double
//the compiler will not warn you, so make sure
// you check the data type of the variable and 
// the function
int calculate() {
    int value = 20;
    return value;
}
int main() {
    printf("calculate(): %d\n", calculate());
    return 0;
}

void greeting() {
    printf("Hello there\n");
    return;
}
int main() {
    greeting();// call function 
    return 0;
}

//roll a dice
int roll() {
    return rand() % 6 + 1;
}
int main() {
    srand(time(0));
    printf("roll(): %d\n", roll());
    return 0;
}