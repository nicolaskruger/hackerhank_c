#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int serialMax[] ={
        0,//and
        0,//or
        0//xor
    };
    for (size_t a = 1; a < n; a++)
        for (size_t b = a+1; b <= n; b++)
        {
            /* code */
            int serialCur[]={
                a&b,
                a|b,
                a^b
            };
            for (size_t i = 0; i < 3; i++)
                if(serialCur[i]>(serialMax[i])
                    && serialCur[i]<k)
                    serialMax[i]=serialCur[i];
             
        }
    for (size_t i = 0; i < 3; i++)
        printf("%d\n",serialMax[i]);
    
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
