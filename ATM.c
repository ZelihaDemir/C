#include <stdio.h>

int main()
{
    int param=1000;
    int x,y;
    
    char ch='e';

    while(ch=='e')
    
    {
         printf(" 1. Bakiye sorgulama : \n 2.Para çekme : \n 3.Para yatırma :\n");
        printf("Lütfen yapmak istediğiniz işlemi seçin :");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            
            printf("bakiyeniz %d liradır.\n",param); break;
 
            case 2:
            
            printf("Miktar giriniz : ");
            scanf("%d",&y);
            param-=y;
            printf("Bakiyeniz %d liradır.\n",param);
            break;
            
            case 3: 
            printf("Miktar giriniz : ");
            scanf("%d",&y);
            param+=y;
            printf("Bakiyeniz %d liradır.\n",param);
            break;
            default:
            printf("Gecersiz bir islem girdiniz!!");
            
        }
        printf("yeniden islem yapmak ister misiniz ? (e/h) :");
        scanf("%s",&ch);
       
    }
     printf("Görüşmek dileğiyle...");

  

    return 0;
}
