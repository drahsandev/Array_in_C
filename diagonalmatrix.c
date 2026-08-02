//Write a function to check whether a given square matrix is a diagonal matrix.
#include <stdio.h>
void diagonal(int[3][3]);
int main()
{
    int matric[3][3]={
                        {1,0,0},
                        {0,5,0},
                        {0,0,9}

                     };
    diagonal(matric);
    return 0;
}
void diagonal(int m[3][3])
{
    int flg=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i!=j && m[i][j]!=0)
            {
                flg++;
            }
        }
    }
    if(flg==0)
    printf("Matrix is Diagonal\n");
    else
    printf("Matrix is not Diagonal\n");
}