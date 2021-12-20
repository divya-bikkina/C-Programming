#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
    float e,f,i,j;
    scanf("%d%d%f%f",&a,&b,&e,&f);
    c=a+b;
    d=a-b;
    i=e+f;
    j=e-f;
    printf("%d %d\n%.1f %.1f",c,d,i,j);
    
    
    return 0;
}
