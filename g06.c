/*Vanesa, a Math teacher, is eager to introduce students to relational operators (>, >=, <, <=, ==, !=). 



Create a program that takes two integer inputs x and y, and prints the results: 1- true, and 0- false for the given relational expressions.



Assist Vanesa in crafting an engaging lesson on relational operators using this program.

Input format :
The input consists of two space-separated integers, x and y.

Output format :
The output prints the results of various relational expressions based on the given performance scores in the following format:

"x > y: " followed by the result of x > y.

"x >= y: " followed by the result of x >= y.

"x < y: " followed by the result of x < y.

"x <= y: " followed by the result of x <= y.

"x == y: " followed by the result of x == y.

"x != y: " followed by the result of x != y.*/

// You are using GCC
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    
    printf("x > y: %d\n",x > y);
    printf("x >= y: %d\n",x >= y);                   //4   5
    printf("x < y: %d\n",x < y);
    printf("x <= y: %d\n",x <= y);
    printf("x == y: %d\n",x == y);
    printf("x != y: %d\n",x != y);
    
    return 0;
    
}
