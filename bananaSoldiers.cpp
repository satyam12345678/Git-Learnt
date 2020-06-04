#include<bits/stdc++.h>
using namespace std;
main()
{
	long long int k,n,w;
	cin>>k>>n>>w;
	long long int totalC=0;
	for(long long int i=w;i>0;i--)
	{
		totalC+=(i*k);
	}
	if(totalC>n)
	cout<<totalC-n;
	else

	cout<<"0  in dev branch trying for pull request take 2";


	
} 
