#include <iostream>
using namespace std;
long long rs;

int main(){
	freopen("inp.inp","r",stdin);
	freopen("out.out","w",stdout);
	long long n,d;
	cin >>n >> d;
	while(n--){
		char c;
		cin >> c;
		long long v;
		cin >> v;
		rs+=v;
	}
	cout << rs*d;
}
