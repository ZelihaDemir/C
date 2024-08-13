#include <stdio.h>
int ft_atoi(char *str)
{
    int i;
    int c;
    i= 0;
    c = 1;
    int nb;
    nb = 0;
    
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        c = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb *10) +(str[i]-'0');
        i++;
    }
    nb*=c;
    return(nb);
}

int main()
{
    printf("%d",ft_atoi("       -----++++--234bnm5678"));
    
    return 0;
}
