#include<stdio.h>
#include<string.h>
int main()
{
    char LED[100],N;
    scanf("%d",&N);
    for(int j=0; j<N; j++)
    {
        int sum=0;
        scanf("%s",&LED);
        int l=strlen(LED);
        for(int i=0; i<l; i++)
        {
            if(LED[i]=='1')
                sum+=2;
            else if(LED[i]=='2'||LED[i]=='3'||LED[i]=='5')
                sum+=5;
            else if(LED[i]=='4')
                sum+=4;
            else if(LED[i]=='6'||LED[i]=='9'||LED[i]=='0')
                sum+=6;
            else if(LED[i]=='7')
                sum+=3;
            else if(LED[i]=='8')
                sum+=7;
        }
        printf("%d leds\n",sum);
    }
    return 0;
}
