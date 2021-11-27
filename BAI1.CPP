#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	freopen("inp.inp","r",stdin);
	freopen("out.out","w",stdout);
	int T;
	cin >> T;
	while (T--){
		int y=0,r=0,g=0;
		string s;
		cin >> s;
		for (auto i:s){
			if (i=='Y'){
				y++;
			}
			else if (i=='R'){
				r++;
			}
			else{
				g++;	
			}

		}
		if (y!=0&&r!=0&&g!=0&&y==g&&g==r){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << '\n';
	}
}
