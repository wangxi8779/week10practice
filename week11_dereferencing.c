#include <stdio.h>
//vedio 1
//create a pointer to dynamically allocated integer
int main(){
int *number = malloc(sizeof(int));
//print the value of the dynamic integer
printf("%d\n", *number);
// assign value of 10 where number point to 
*number = 10;
//is the same
int numbers[0] = 10;//convention to use square bracket[]
//notation for accessing element in array and * othewise
}
// demo
int main() {
int count = 12;
printf("count: %d\n", count);// 12

int *count_p = &count;
printf("count: %d\n", count);// 12
printf("count_p: %d\n", *count_p);//12

*count_p = 15;
printf("count: %d\n", count); //15
printf("count_p: %d\n", *count_p); //15

count = count + 1;
printf("count: %d\n", count); //16
printf("count_p: %d\n", *count_p); //16
//Asterisk *syntax
// data_type *variable_name = ...;---> *after a data 
//type declares a pointer
//*variable_name and *variable_name = ...;---> *before a 
// variable name(without the data type) dereferences the 
//pointer.

//Dereference arrays using the [] notation
//Dereferencing using the * is used when accessing
//an element that is not in a list -- such as a
//single integer, double, char,etc
//It is critical to be able to read and write code
//that uses both * and []notation to dereferencing
//(not array or array).
}


