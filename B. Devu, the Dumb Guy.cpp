/*
B. Devu, the Dumb Guy
link:http://codeforces.com/problemset/problem/439/B
*/
#include<iostream>
#include<algorithm>
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;
long long  c[100005];
int main()
{
	int n,x,i,j;
	long long sum=0;
	cin>>n>>x;
	
	FOR(i,n)
	{
		cin>>c[i];
	}
	sort(c,c+n);
	FOR(i,n)
	{
		if(x>1)
		{
				sum+=c[i]*x;
				x--;
		}
		else
			sum+=c[i];
	
	}
	cout<<sum;
	return 0;
}
