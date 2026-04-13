#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n] , c[n];
    int m_count =0;
    int c_count =0;
    for (int i=0; i<n ; i++){
        scanf("%d %d",&m[i] ,&c[i]);

        if(m[i]==c[i]){
           continue;
        }
        else if (c[i]<m[i])
        {
            m_count++;
        }
        else{
            c_count++;
        }
    }
    if(m_count == c_count){
        printf("Friendship is magic!^^");
    }
    else if (m_count>c_count)
    {
        printf("Mishka");
    }
    else
        printf("Chris");
    
    return 0;
}