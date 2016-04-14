#include <stdio.h>
#include <cs50.h>

int main (void)
{
    
   
    
    for(int d=0;d<=1;d++)
    {
        printf("height:");
        int h = GetInt();
    if (h>23||h<0)
    {
        printf("wrong entery the hight must be integer no greater than 23\n");
    d--;
    }
    else 
    {
        for(int i=1;i<=h;i++)
        {
            for (int v=h-i ; v>0 ;v--)
            {
              printf(" ");  
            }
            for (int k=0;k<=i;k++)
           { printf("#");}
             printf("\n");
        }
        break;
       
    }
    }
    
    
}