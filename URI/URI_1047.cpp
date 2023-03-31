#include<bits/stdc++.h>
using namespace std;
main()
{
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    int c1=h1*60+m1,c2=h2*60+m2;
    if((h1>h2)||((h1==h2)&&(m1>m2))||((h1==h2)&&(m1==m2)))
        c2+=1440;
    int c=c2-c1;
    cout<<"O JOGO DUROU "<<c/60<<" HORA(S) E "<<c%60<<" MINUTO(S)"<<endl;
    return 0;
}
//Accepted
