#include <stdio.h>
int main()
{
	int n = 0;
	scanf ("%d", &n);
	int a[n] = {0};
	for(int i=0;i<n;i++){
	scanf ("%d", &a[i]);}
	int low=0,high = n-1;
	int temp = a[low];
	while(low != high)
{
while(low < high && a[high] >= temp){high--; 
if(low < high) {a[low] = a[high],low++;}}
while (low < high && a[low] <= temp) {low++;
if(low < high) { a[high] = a[low]; high--;}}
}
a [low] = temp;
for (int i=0;i<n;i++){
printf("%d ",a[i]);}
printf ("\n");
return 0;
}
