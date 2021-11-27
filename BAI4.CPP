#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
      int mid = l + (r - l) / 2;
 
      // Nếu arr[mid] = x, trả về chỉ số và kết thúc
      if (arr[mid] == x)
        return mid;
 
      // Nếu arr[mid] > x, gọi đệ quy tìm kiếm bên trái
      if (arr[mid] > x)
        return binarySearch(arr, l, mid - 1, x);
 
      // Ngược lại, nếu arr[mid] < x, gọi đệ quy tìm kiếm bên phải
      return binarySearch(arr, mid + 1, r, x);
    }
 
    // Trong trường hợp không tìm thấy
    return -1;
  }

void solve(){
	int n,m,t;
	cin >> n >> m >> t;
	int a[m+5],b[m+5];
	int x = n%m;
	a[0]=n/m;
	for (int i=1;i<=x;i++){
		a[i]=n/(m+1);
	}
	for (int i=x+1;i<=m-1;i++){
		a[i]=n/m;
	}
	for (int i=1;i<=m-1;i++){
		b[i]=b[i-1]+a[i-1];
	}
	int y=binarySearch(b,0,m-1,t);
	int z=t-b[y]+1;
	if (y==0) y=m;
	cout << (z-1)*m+y;
}

int main(){
	solve();
}
