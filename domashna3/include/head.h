void func(int n)
{
	int a,b,c;
        a=n/100;
        b=(n/10)%10;
        c=n%10;
	printf("Cifrite na brojot %d se %d, %d i %d \n",n,a,b,c);
	printf("Proizvodot na cifrite na brojot %d e ednakov na %d\n",n,a*b*c);
}
