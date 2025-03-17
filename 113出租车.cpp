#include<stdio.h>
int main()
{
    float kilo = 0.0;
    int min = 0;
    int sum = 0;
    float part1 = 0.0;
    int part2 = 0;
    scanf("%f%d", &kilo, &min);
    if (kilo <= 3.0)
        part1 = 10.0;
    else if (kilo > 3.0 && kilo <= 10.0)
        part1 = kilo*2 + 4;
    else 
        part1 = kilo*3 - 6; 
    if (part1 - (int)part1/1 >= 0.5)
        part1 = part1/1 +1;
    else 
        part1 = (int)part1; 
    part2 = 2*(min/5);
    sum = part1 + part2;
    printf("%d", sum);
    return 0;
}
