#include<bits/stdc++.h>
using namespace std;
main()
{
    double A[3];
    for(int i=0; i<3; i++)
        cin>>A[i];
    sort(A,A+3,greater<int>());

    if(A[0]>=A[1]+A[2])
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else
    {
        if(pow(A[0],2)==pow(A[1],2)+pow(A[2],2))
            cout<<"TRIANGULO RETANGULO"<<endl;
        if(pow(A[0],2)>pow(A[1],2)+pow(A[2],2))
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(pow(A[0],2)<pow(A[1],2)+pow(A[2],2))
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(A[0]==A[1] && A[0]==A[2])
            cout<<"TRIANGULO EQUILATERO"<<endl;
        if((A[0]==A[1]&&A[0]!=A[2])||(A[1]==A[2]&&A[1]!=A[0])||(A[2]==A[0]&&A[2]!=A[1]))
            cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    return 0;
}
