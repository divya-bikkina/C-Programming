#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char c,p[20],pp[100];
scanf("%c",&c);
scanf("%s\n",&p);
scanf("%[^\n]%s",&pp);
printf("%c\n%s\n%s",c,p,pp);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
