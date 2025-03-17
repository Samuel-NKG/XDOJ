#include <stdio.h>
#include <string.h>
int main()
{
    char s[61];
    gets(s); 
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'm')
        {
            printf("%c", s[i] + 13);
            continue;
        }
        if (s[i] >= 'n' && s[i] <= 'z')
        {
            printf("%c", s[i] - 13);
            continue;
        }
        if (s[i] >= 'A' && s[i] <= 'M')
        {
            printf("%c", s[i] + 13);
            continue;
        }
        if (s[i] >= 'N' && s[i] <= 'Z')
        {
            printf("%c", s[i] - 13);
            continue;
        }
        printf("%c", s[i]);
    }
    return 0;
}
