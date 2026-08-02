//Write a function to print the main diagonal elements of a square matrix.
#include <stdio.h>
int main()
{
    int n=1;
    int matrix[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d ",i+1);
            }
            else
            {
                printf("%d ",0);
            }
            
        }
        printf("\n");
    }
    return 0;
}