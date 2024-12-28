#include<stdio.h>
int display(int arr[3][3]);
int initialize(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=i+j;
        }
    }
}
int display(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][3];
    initialize(arr);
    display(arr);
    printf("%d",arr[2][2]);
    return 0;
}