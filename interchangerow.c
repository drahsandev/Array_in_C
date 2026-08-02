//Write a function to interchange the first and last rows of a matrix.
#include <stdio.h>
void interchange(int[3][3]);
int main()
{
    int matrix[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter %d row %d colum: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
            fflush(stdin);
        }
    }
    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            printf("%d ",matrix[k][l]);
        }
        printf("\n");
    }
    interchange(matrix);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void interchange(int m[3][3])
{
        for(int j=0;j<3;j++)
        {
            int temp=m[0][j];
            m[0][j]=m[2][j];
            m[2][j]=temp;
        }
     
}
