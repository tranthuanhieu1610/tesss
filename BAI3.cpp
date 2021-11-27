#include <iostream>
#include <cmath>
using namespace std;
long int k;
long int ans;
const long int oo = 1e12+5;

void read(){
	cin >> k;
}

bool count(int s){
	int cnt=0;
	for (int a1=1;a1<=sqrt(s);a1++){
		cnt+=int(sqrt(s-a1*a1));
	}
	return cnt>=k;	
}

void solve(){
	int l=1;long int r=oo;
	long int m;
	while(r>=l){
		m = (l+r)/2;
		if (count(m)){
			ans = m;
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	cout << ans;
}

int main(){
	read();
	solve();
}
