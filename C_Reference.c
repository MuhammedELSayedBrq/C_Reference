/*************************************
A Reference For C Language
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#include <string.h>
#include <stdint.h>

int sum(int *a, int *b)
{
    return (*a + *b);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Global var
int yy = 5000;

int main()
{
    /*
    printf("Hello World!\n");
    //%d - Print an integer.
    //%f - Print a floating-point number.
    //%s - Print a string.
    //%c - Print a character.
    //%% - Print a literal percent sign.
    //%i - signed integer
    //%p - an address
    //%u - unsinged int
    int b = 0x45; //hexadecimal
    int oct = 062;
    int x=3, y;
    printf("%d \n",x);
    // Extern means the variable is in another file to define in linking step
    extern int z;
    char c='a';
    char str[]="Hello World!\n";

    printf("Enter Char: ");
    char input = y;
    fflush(stdin);fflush(stdout);
    scanf("%s",&y);
    printf("The input char is %c \n",y);
    */

    /*
    signed int cv= -1;
    unsigned int vc = 5;
    if(cv > vc){
        printf("wtf! haha");
    }
    else{
        printf("~wtf! hehe");
    }

    int cx = 1;
    int b = cx<<2;
    printf("\n%d\n",b);


    char c = 'a';
    int i = 10;

    int j = c + i;

    //The value of j will be 107, because the value of c is promoted to 97 before the addition is performed.

    printf("a is promoted then j = %d \n",j);

    int ab=1, cd=2;
    char op = '-';
    switch(op){
    case '+':
        printf("Sum = %d ",ab+cd);
        break;

    case '-':
        printf("Sub = %d ",ab-cd);
        break;

    case '*':
        printf("Multiply = %d ",ab*cd);
        break;

    case '/':
        printf("division = %d ",ab/cd);
        break;
    }



    int id = (ab!=1)? 1 : 2;
    printf("\n%d\n",id);

    for(int i=0;i<11;i++)
        printf("%d\n",i);

    while(ab<10)
        printf("%d\n",ab++);

    goto here;
    here:

    i=0;
    do{
        printf("hello\n");
        i++;
    }
    while(i<10);
    ab=1;
    cd=2;
    printf("%d\n",sum(&ab , &cd));

    */

    printf("%d\n", factorial(5));

    // volatile means it can be changed later
    volatile uint32_t xcv;
    // hello
    // cube ide is good for Embedded Systems STM32

    return 0;
}
