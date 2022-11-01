#include <stdio.h>
int main (){
int a,b,c,d,e,i,j,h,t;
scanf("%d %d", &a, &b);
for (i=1; i<=a; i++) 
{for (j=i; j>=2; j--) {printf("(%d * %d) + ", j,b);}
 for (c=1, h=c*b; c<i; c++, h+=(c*b)){}
 printf("(%d * %d) = %d\n", j,b,h);}
for (d=1, e=1, t=0; d<=a; e+=d+1, d++) {t+=e*b ;}
printf("%d", t);
}