#include <stdio.h>
int main()
{
    int arr[5][5];
    int c;
    int r;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j]==1)
            {
               c=i;
               r=j;
            }
            
        }
    }
    int count=0;
    while (r!=2 || c!=2)
    {
        if (r>2)
        {
            r--;
            count++;
        }else if(r<2){
            r++;
            count++;
        }
        if (c>2)
        {
            c--;
            count++;
        }else if(c<2){
            c++;
            count++;
        }
        
    }
    printf("%d",count);
    
}