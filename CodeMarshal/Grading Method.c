#include<math.h>
int main ()
{
    int i, j, n, number;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &number);
        if(number >= 90 && number <= 100)
            printf("Student %d: %s\n", i, "A+");
        if(number >= 80 && number <= 89)
            printf("Student %d: %s\n", i, "A");
        if(number >= 70 && number <= 79)
            printf("Student %d: %s\n", i, "A-");
        if(number >= 60 && number <= 69)
            printf("Student %d: %s\n", i, "B+");
        if(number >= 50 && number <= 59)
            printf("Student %d: %s\n", i, "B-");
        if(number >= 40 && number <= 49)
            printf("Student %d: %s\n", i, "C");
        if(number >= 35 && number <= 39)
            printf("Student %d: %s\n", i, "D");
        if(number >= 0 && number <= 34)
            printf("Student %d: %s\n", i, "F");
    }
}
