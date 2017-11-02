#include <stdio.h>
#include "head.h"
int main()
{
    printf("Kolku broevi sakate da vnesete?\n");
    int m;
    scanf("%d", &m);
    int i=0;
    for(i;i<m;i++)
    {
    	int n;
    	printf("Vnesete trocifren broj\n");
    	scanf("%d",&n);
    	if(n>99&&n<1000)
        	func(n);
        else
        	printf("Nevaliden vnes\n");
    }
    return 0;
}

