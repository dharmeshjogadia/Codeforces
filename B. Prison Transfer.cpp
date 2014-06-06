/*
B. Prison Transfer
link:http://codeforces.com/problemset/problem/427/B
*/
#include<iostream>
#include<algorithm>
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main()
{
	long n,t,choice,c,cntL=0,i,result=0;
	cin>>n>>t>>choice;
	FOR(i,n)
	{
		cin>>c;
		if(c<=t)
			cntL++;
		else if(cntL>=choice)
		{
			result+=cntL-choice+1;
			cntL=0;
		}
		else
			cntL=0;
	}
	if(cntL>=choice)
		result+=cntL-choice+1;
	cout<<result;
	return 0;
}

