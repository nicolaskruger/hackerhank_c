#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char* number[10]= {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };
    char* evenOdd[2]={
        "even",
        "odd"
    };
    for (size_t i = a; i <= b; i++)
    {
        if(i<=9)
            printf("%s\n",number[i]);
        else{
            printf("%s\n",evenOdd[i%2]);
        }
    }
    
    return 0;
}

