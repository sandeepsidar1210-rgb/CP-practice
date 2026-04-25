#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    
    for(int i=0; i<t; i++){
         int a, b, c;
        scanf("%d %d %d",&a , &b, &c);

        if((a>b && b>c)||(a<b && b<c)){
            printf("%d\n",b);
        }
        else if ((a<b && a>c)||(a>b && a<c))
        {
           printf("%d\n",a);
        }
        else if ((c>a && c<b)||(c>b && c<a))
        {
            printf("%d\n",c);
        }
        
        
    }
   return 0;
}