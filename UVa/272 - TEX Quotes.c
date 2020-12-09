#include <stdio.h>
#include <string.h>
int main()
{
    char c[100000];
    int q = 0;
    while (gets(c))
    {
        int l = strlen(c);
        for (int i = 0; i < l; i++)
        {
            if (c[i] == '"')
            {
                q++;
                if (q % 2 == 1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c", c[i]);
        }
        printf("\n");
    }
    return 0;
}
