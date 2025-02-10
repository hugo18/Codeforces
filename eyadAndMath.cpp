#include <stdio.h>
#include <math.h>
 
int main(){
    int a, b, c, d, T;
    scanf("%d", &T);
 
    while(T--){
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(((double) b) * ((double)log(a)) < ((double) d) * ((double)log(c)))
            printf("<\n");
        else
            printf(">\n");
    }
 
        return 0;
}

