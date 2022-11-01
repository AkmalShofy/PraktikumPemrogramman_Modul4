#include <stdio.h>
int main () {
int a,b,i,j;
scanf ("%d", &a); scanf ("%d", &b);
if (a>b)
{for (i=a,j=b; i>=b,j<=a; i--,j++) {printf ("%d %d - ",i,j);}}
else 
{for (i=a,j=b; i<=b,j>=a; i++,j--) {printf ("%d %d - ",i,j);}}
}