#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,step=5,min=0;
	cin>>N;
	min+= N/5;
	N = N%5;
	min+= N/4;
	N = N%4;
	min+= N/3;
	N = N%3;
	min+= N/2;
	N = N%2;
	min+= N/1;
	N = N%1;
	cout<<min;
	return 0;
}
