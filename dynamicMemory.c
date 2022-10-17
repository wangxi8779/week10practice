#include<stdio.h>
#include<stdlib.h> // for malloc

//To create dynamic memory in C
//the program needs to request memory
//to be allocated from the operation system
//---> the function called malloc() that takes in a 
//parameter of how many bytes of memory to allocate
//---malloc is short for memory allocate
int mian() {
malloc(1);// allocate 1 byte of dynamic memory
malloc(100);// allocate 100 bytes of dynamic memory
malloc(sizeof(int));//create 1 integer amount of dynamic memory
malloc(sizeof(int)*10);//create 10 integer amount of dynamic memory
malloc(sizeof(double)*1000);//create dynamic arrray of 1000 doubles
malloc (sizeof(char)*12);}// createds dynamic array of 12 charaters
//dynamic array lives in the heap
//to grow an array
//1. create a new array
//2. copy the old array in to the new array
//3. free the old array
 
//shrink arrays

