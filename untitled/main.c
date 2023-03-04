#include <stdio.h>
#define MAX_SIZE 5 //Maximum size of the array
int main()
{
    int arr[MAX_SIZE];
    int i, num;
    printf("Enter size of the array: "); // array is already initialized with length 5
    scanf("%d", &num);
    printf("Enter elements in array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are: "); // maybe there aren't any negative elements, use condition

    for(i=0; i<num; ++i)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}