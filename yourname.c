#include <stdio.h>
#include<string.h>
int main(){
    int n,num;
    char s[50];
    char t[50];

    scanf("%d",&n);
    while( n --){
    

        scanf("%d",&num);

        scanf("%s %s",s,t);
    

    for(int i=0; i<num;i++){
        for (int j=i+1 ; j<num;j++){
            if (s[i]>s[j] || s[i]==s[j]){
                int temp= s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    for(int i=0; i<num;i++){
        for (int j=i+1 ; j<num;j++){
            if (t[i]>t[j] || t[i]==t[j]){
                int temp= t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }


    if(strcmp(s,t)==0)
        printf("YES\n");
    
    else
        printf("NO\n");

}
return 0;
}
    



