#include <iostream>
//#include<bits/stdc++.h>

using namespace std;

int main() {
	int N,M,l,r,m=1,d=0;
	cin >> N >> M;
	int arr[N];
	for(int i=0;i<N;i++)
	cin >> arr[i];
	for(int j=0;j<M;j++)
	{
	cin >> l >> r;
	    for(int i=l-1;i<r;i++)
	m*=arr[i];
	for(int i=1;i<=m;i++)
	if(m%i==0)
	d+=1;
	cout << d << endl;
	m=1,d=0;

	}


	//cin >> num;										// Reading input from STDIN
	//cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
