#include<stdio.h>
#include<math.h>
int main()
{
    float N1,N2,N3,N4,Exam;
    float Media,Media_Final;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    Media=((N1*2)+(N2*3)+(N3*4)+N4)/10;
    printf("Media: %.1f\n",Media);
    if(Media>=7.0)
        printf("Aluno aprovado.\n");
    else if(Media<5.0)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&Exam);
        printf("Nota do exame: %.1lf\n",Exam);
        Media_Final=(Media+Exam)/2;
        if(Media_Final>=5.0)
            printf("Aluno aprovado.\n");
        else if(Media_Final<=4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",Media_Final);
    }
    return 0;

}
