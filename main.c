#include <stdio.h>

int max_of_four(int a,int b, int c, int d){
    int array[]= {
        a,b,c,d
    };
    int max = a;
    for (size_t i = 0; i < 4; i++)
    {
        if(array[i]>max)
            max = array[i];
    }
    return max;
}   

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
