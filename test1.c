#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m = 10, n = 20;
    char s[11] = "Hello";

    printf("m=%d, n=%d, str=%s\n", m, n, s);
    scanf("%s", s);
    printf("m=%d, n=%d, str=%s\n", m, n, s);
    
    char s1[] = {'H', 'i', '\0', 'I', 'T'};
    puts(s1);

    system("pause");
    return 0;
}