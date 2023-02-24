#include <stdio.h>    
int main()  
{  
    int num, i, j, m = 1;  
    printf (" Enter the num of columns: \n");  
    scanf ("%d", & num);  
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( "%d ",j);  
        }  
        printf("\n");  
    }  
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("%d ",j);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
