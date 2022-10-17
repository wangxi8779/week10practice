#include<stdio.h>
#include<stdlib.h> // for malloc

//Pointer is a variable with a data type that stores an address to 
//somewhere in computer memory, in other words:
//-A pointer variable stores a location 
//-A pointer variable stores an address in memory
//-A pointer points to something in memory

int main(){
   //create a character array of 20 elements
    char name[20];
    //read a sting from the user and store
    //at the location stored in the variable name
     scanf("%s", name);

     //create a 4 integer dynamic array and return the address
     //of the arry in memory
     int address = malloc(sizeof(int)*4);

     //integer variable
     int a;
     //integer pointer
     int* a;
     //create a 2 integer dynamic array
     int* numbers = malloc(sizeof(int)*2);
     //create a 10 double dynamic array
     double* value = malloc(sizeof(double)*10);
     //create a 500 dynamic array into a pointer called title
     char* title = malloc (sizeof(char)*500);

     //using dynamic arrays
     int* numbers = malloc (sizeof(int)*20);
     numbers[0] = 12;
     //display all the elements in numbers array
     for(int i = 0; i <20; i++) {
        printf("number: %d\n", numbers[i]);
     }



}