#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < 3; i++)
    {
        char ch[100];
        scanf("%[^\n]c",&ch);
        printf("%s\n",ch);
    }
    
    return 0;
}
