   #include<stdio.h>
int main()
{
    int a = 0;
    char b = 0;
    scanf("%d,%c", &a, &b);
    int s1 = a + b; 
    char s2 = a + b; 
    printf("%d,%c", s1, s2);
    return 0;
}
