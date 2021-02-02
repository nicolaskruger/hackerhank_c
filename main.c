#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    char str[20];
    sprintf(str,"%d",n);
    size_t len = strlen(str);
    int sum =0;
    for(size_t i = 0; i<len ;i++)
        sum+= str[i]-'0';
    printf("%d",sum);
    return 0;
}