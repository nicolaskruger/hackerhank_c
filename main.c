#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int sum=0;
    int buff;
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&buff);
        sum+=buff;
    }
    printf("%d",sum);
    return 0;
}