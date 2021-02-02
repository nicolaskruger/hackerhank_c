#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    const int N = 2*n+1;
    for (size_t j = 1; j < N-1; j++)
        for (size_t i = 1; i < N-1; i++){
            printf("%d ",max(abs(n-j),abs(n-i))+1);
            if(i==(N-2))
                printf("\n");
        }
    
    return 0;
}