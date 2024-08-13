#include <stdio.h>

int ft_fibonacci(int index)
{
    int a;
    int b;
    int c;
    
    a= 0;
    b= 1;
    
    if (index == 0)
    return(0);
    if(index == 1)
    return(a);
    if (index > 1)
    {
        while(index > 0)
        {
            c = a+b;
            a = b;
            b = c;
            printf("%d ",c);
            index --;
        }
    }
    else
    return(-1);
}
int main()
{
    ft_fibonacci(5);
    

    return 0;
}
