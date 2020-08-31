#include <bits/stdc++.h>
using namespace std;

int main(){
	int passenger=0,a,b,max=0;
	int n;
	cin >> n;
	while(n--){
		cin >> a >> b;
		passenger -= a;
		passenger += b;
		if(passenger >= max)
			max = passenger;
	}
	cout << max << endl;
	return 0;
}
