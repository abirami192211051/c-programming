#include <stdio.h>
int main()  
{  
    int i, j, rows, k;  
    printf (" Enter a number of columns: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("%d",k); 
        }  
        printf ("\n");   
    }  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 2; j <= i; j++)  
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("%d",k); 
        }  
        printf ("\n");   
    }  
    return 0;      
}  
