#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int checkCon(long long x, char* p, int* r);		//Function
int main()
{
	int i = -1;			
	int* r = &i;		//Pointer
	long long x;
	scanf("%lld", &x);
	char array[9];			//Array
	char* p = array;		
	if (checkCon(x,p,r) == 1)
	{
		printf("Error");
		return 0;
	}
	for (int j = i; j >= 0; j--)	//Loop
	{
		printf("%c", *(p + j));
	}
	return 0;
}
int checkCon(long long x,char *p,int *r)
{
	while (x)
	{
		int b = x % 100;
			if (b < 65 || b>90)		//Expression and or
			{
				return 1;
			}
			x /= 100;
			*r = *r+1;
			*(p + *r) = b;
	}
	return 0;
}
