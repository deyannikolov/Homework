#include <stdio.h>

int function(int);

int main()
{
    int a,b,c;
    int D;
    scanf("%d %d %d", &a, &b, &c);
    D = b*b + 4*a*c;
    printf("%d",function(D));

return 0;
}

int function(int D){

    int results;

    if(D == 0){
        results = 1;
    }else if(D < 0){
        results = 0;
    }else if(D > 0){
        results = 2;
    }

return results;
}
