#include <stdio.h>

int main() {
    int rows,cols,i,j;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    printf("enter the number of cols:");
    scanf("%d",&cols);
    for(i=1;i<=rows;i++)
    {
       for(j=cols;j>cols-i;j--)
       {
           printf("%d",j);
           
       }
       for(j=1;j<=cols-i;j++)
       {
           printf("%d",(rows-i+1));
       }
       printf("\n");
    }
    return 0;
}
    