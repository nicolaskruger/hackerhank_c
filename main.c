#include <stdio.h>
#include <stdlib.h>


void swap(int* arr, int a, int b){
    int buff = arr[a];
    arr[a]=arr[b];
    arr[b]=buff;
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for (size_t i = 0; i < num/2; i++)
        swap(arr,i,num-1-i);
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}