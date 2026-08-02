//Write a function to interchange the first and last columns of a matrix.
#include <stdio.h>
void interchange(int[3][3]);
int main()
{
    int matric[3][3]={
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}

                     };
    interchange(matric);
    printf("matrix after swap first and last colum\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matric[i][j]);
        }
        printf("%c",10);
    }

}
void interchange(int m[3][3])
{
 int temp;
 for(int i=0;i<3;i++)
 {
    temp=m[i][0];
    m[i][0]=m[i][2];
    m[i][2]=temp;
 }    
}

