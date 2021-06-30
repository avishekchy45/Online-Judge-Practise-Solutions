#include<iostream>
using namespace std;
main()
{
    int n,num,sum1=0,sum2=0,lucky=0;
    cin>>n>>num;
    int rem,half=n/2;
    for(int i=n; i>0; i--)
    {
        rem=num%10;
        if(rem!=4&&rem!=7)
            break;
        else
        {
            if(i>half)
                sum1+=rem;
            else
                sum2+=rem;
            lucky++;
        }
        num=num/10;
    }
    //cout<<sum1<<" "<<sum2<<" "<<lucky<<endl;
    if(sum1==sum2&&lucky==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
