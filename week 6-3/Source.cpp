#include <stdio.h>
int main()
{
	int a, b, c;
	printf("a: "); scanf_s("%d", &a);
	printf("b: "); scanf_s("%d", &b);
	printf("c: "); scanf_s("%d", &c);
	if (a > 0 && b > 0 && c > 0) 
	{
		a *= a;
		b *= b;
		c *= c;
		if ((a + b == c) || (a + c == b) || (b + c == a)) 
		{
			printf("Yes");
		}
		else {
			printf("No");
		}
	}
	else {
		printf("width and height must be greater than 0");
	}
}