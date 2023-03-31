#include<bits/stdc++.h>
using namespace std;
main()
{
    int T;
    double X,Y,A,PI=acos(-1);
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%lf %lf %lf",&X,&Y,&A);
        double BD2=pow(X,2)+pow(Y,2)-2*X*Y*cos(A*PI/180);
        double B=(acos((pow(X,2)-pow(Y,2)-BD2)/(-(2*Y*sqrt(BD2))))*180)/PI;
        double AC2=pow(Y,2)+BD2-2*sqrt(BD2)*Y*cos((180-B)*PI/180);
        printf("%lf\n",pow(X,2)+AC2);
    }
}
