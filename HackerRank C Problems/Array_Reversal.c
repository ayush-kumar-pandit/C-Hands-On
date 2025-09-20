#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int brr[num];
    for(int j=i,k=0;j>0&&k<num;j--,k++)
    {
        brr[j]=arr[k];
    }

    /* Write the logic to reverse the array. */

    for(i = 1; i <= num; i++)
        printf("%d ", brr[i]);
    return 0;
}
