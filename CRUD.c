#include<stdio.h>
int display(int arr[3][3]);

int initialize(int arr[3][3]);
int update(int arr[3][3]);
int delete(int arr[3][3]);
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
int delete(int arr[3][3])
{
    printf("Enter ixj to delete: ");
    int ij[2];
    scanf("%d %d",&ij[0],&ij[1]);
    arr[ij[0]][ij[1]]=0;
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
    int x=1;
    int arr[3][3];
    do
    {
        printf("Enter 0 to exit");
        scanf("%d",&x);
        initialize(arr);
        update(arr);
        delete(arr);
        display(arr);
    } while (x!=0);
    
    return 0;
}