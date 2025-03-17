#include<stdio.h>
#include<math.h> 
int main()
{
    float r = 0;
    float n = 0;
    float p = 0;
    scanf("%f %f", &r, &n);
    p = pow(1+r, n);
    printf("%.2f", p);
    return 0;
}
