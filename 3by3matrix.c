#include <stdio.h>
int main()
{
    int matrix[3][3];
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            printf("Enter %d Row %d coloum: ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
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
    return 0;
}