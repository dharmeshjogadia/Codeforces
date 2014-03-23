/*
	A. Theatre Square
	link:http://codeforces.com/problemset/problem/1/A
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long long m,n,a;
	cin>>n>>m>>a;
	cout<<((n+a-1)/a)*((m+a-1)/a);
	return 0;
}
