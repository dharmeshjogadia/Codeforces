/*
A. Twins
link:http://codeforces.com/problemset/problem/160/A

*/
#include<iostream>
#include<algorithm>
using namespace std;

bool campare(int a,int b)
{
	return a>b?true:false;
}
int main(){
	
	int n,sum,mySum;
	cin>>n;
	int ar[n+1];
	sum=mySum=0;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
	}
	sort(ar,ar+n,campare);
	int i;
	for(i=0;i<n;i++)
	{
		mySum+=ar[i];
		if(mySum>sum-mySum)
		{
			cout<<i+1;
			break;
		}	
	}
	
	return 0;
}
