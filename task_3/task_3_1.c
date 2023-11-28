#include <stdio.h>

int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a%3 == 0){
        printf("%d\n",a);
    }
    else if(b%3 == 0){
        printf("%d\n",b);
    }
    if(c%3 == 0){
        printf("%d\n",c);
    }
    if(d%3 == 0){
        printf("%d\n",d);
    }
    if(e%3 == 0){
        printf("%d\n",e);
    }
}