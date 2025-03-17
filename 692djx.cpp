#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int min = a < b ? a : b;
	int max = a > b ? a : b;
	int i = 0;
	int c3 = 0;
	int c4 = 0;
	int c5 = 0;
	for (i = min; i <= max; i++)
	{
		if (i % 3 == 0)
			c3++;
		if (i % 4 == 0)
			c4++;
		if (i % 5 == 0&&i%2!=0)
			c5++;
	}
	printf("%d %d %d\n", c3, c4, c5);
	int x = c3 % c4;
	int y = c3 % c5;
	int z = c4 % c5;
	int q = c4 % c3;
	int r = c5 % c3;
	int t = c5 % c4;
	int A = x > y ? x : y;
	int B = z > q ? z : q;
	int C = r > t ? r : t;
	int big = A > B ? A : B;
	int imax = C > big ? C : big;
	printf("%d", imax);
	return 0;
}
