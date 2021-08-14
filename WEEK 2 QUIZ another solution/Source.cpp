#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	int most = 0;
	scanf("%d", &x);
	if (x > most)
	{
		most = x;
	}
	scanf("%d", &y);
	if (y > most)
	{
		most = y;
	}
	scanf("%d", &z);
	if (z > most)
	{
		most = z;
	}
	printf("Most number is : %d", most);

}