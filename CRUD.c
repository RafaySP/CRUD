#include<stdio.h>
int initialize(int arr[3][3]);
int update(int arr[3][3]);
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
int update(int arr[3][3])
{
    int ij[2];
    printf("Enter the ixj to update");
    scanf("%d %d",&ij[0],&ij[1]);
    int updatedelement;
    printf("Enter the value to update: ");
    scanf("%d",&updatedelement);
    arr[ij[0]][ij[1]]=updatedelement;
}
int main()
{
    int arr[3][3];
    initialize(arr);
    update(arr);
    printf("%d",arr[2][2]);
    return 0;
}