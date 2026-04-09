#include <stdio.h>
#include  <string.h>

int main(){
    int t;
    scanf("%d",&t);
    char a[4];
    char b[4];
    for (int i=0; i<t; i++){
        scanf("%s %s",a , b);

            char temp = a[0];
            a[0] = b[0];
            b[0] = temp;

            printf("%s ",a);
            printf("%s\n",b);       
  
    }
return 0;
}