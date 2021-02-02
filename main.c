#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    // Complete this function
    int res[2];
    res[0] = (*a) + (*b);
    res[1] = abs((*a) - (*b));
    *a = res[0];
    *b = res[1];    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
