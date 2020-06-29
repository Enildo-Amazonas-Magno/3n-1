#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, m, t, j, h=0, cont=0;
    while(scanf("%d %d", &m, &t)!=EOF){cont=0;h=0;
        if(m<t){
        for(i=m;i<t+1;i++){
            cont=1;
            j=i;
            while(j!=1){
            cont++;
            if(j%2==0)j=j/2;
            else j=3*j+1;
            }
            if(cont>h)h=cont;
        }
        printf("%d %d %d\n", m, t, h);}
        else{for(i=t;i<m+1;i++){
            cont=1;
            j=i;
            while(j!=1){
            cont++;
            if(j%2==0)j=j/2;
            else j=3*j+1;
            }
            if(cont>h)h=cont;
        }
        printf("%d %d %d\n", m, t, h);}}
	return 0;
}