#include<stdio.h>
#include<stdlib.h> // for malloc
#include <string.h>

//strlen() // for finding the length of the string
//* strlen()function measure the length of a string
// up to but *not including* the null character at 
//the end of its parameter.
int main(void) {
    char name[] = "Anh"; // declare and initialise a string array
    int name_len = strlen(name); //find length
    //print the name and length
    printf("the string %s is %d character long\n", name,name_len);
    return 0;
    //even change char name [20]= "Anh";, name_len still 3
}

//strcpy() // for copying one string to another
int main (void) {
    char name1[] = "Anh";
    char name2[20];
    strcpy(name2,name1); //copy string: copy name1 to name2
    printf("name1 is %s name 2 is %s\n", name1,name2);
    return 0;
}
//strcat() // for concatenating two strings
int main(void) {
    char name1[] = "Susan";
    char name2[] = "Jones";
    char full_name[20];

    //strcat to make a full name
    strcat(full_name,name1);
    strcat(full_name," ");
    strcat(full_name, name2);
    printf("Full name is: %s\n", full_name);
    return 0;
}
//strcmp() // for comparing two strings
//strcmp(str1,str2) compare str1 and str2
//-returns less than zero if str1 is lexigraphically less than str2
//-returns 0 if str1 is equal to str2
//-returns greater than zero if str1 is lexigraphically greater than str2
int main(void) {
    char name1[] = "Tom";
    char name2[] = "Tony";

    if(strcmp(name1,name2)<0){
        printf("string %s is less than %s\n", name1,name2);
    }
    else{
         printf("string %s is not less than %s\n", name1,name2);
    }
    return 0;

}