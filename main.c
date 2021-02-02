#include <stdio.h>

int main(int argc, char const *argv[])
{
    int in[2];
    float fl[2];
    scanf("%d %d",&in[0],&in[1]);
    scanf("%f %f",&fl[0],&fl[1]);
    printf("%d %d\n%.1f %.1f",
            in[0]+in[1],
            in[0]-in[1],
            fl[0]+fl[1],
            fl[0]-fl[1]);
    return 0;
}
