#include<bits/stdc++.h>
using namespace std;
void solve () {
	int n;
	cin >> n;
	
	char c;
	cin >> c;
	
	string s;
	cin >> s;
	s = '3' + s;
	
	int cc = 0;
	for (int i = 1; i <= n; i++)
		cc += (s[i] == c);
		
	if (cc == n) {
		cout << 0 << "\n";
		return;
	}
	
	vector <int> vis (n + 1, 0);
	for (int i = n; i > 1; i--) {
		if (s[i] != c) {
			for (int j = 2; j * j <= i; j++) {
				if (i % j)
					continue;
				
				vis[j] = vis[i / j] = true;
			}
		} else {
			if (!vis[i]) {
				cout << 1 << "\n";
				cout << i << "\n";
				return ;
			}
		}
		
	}
	
	cout << 2 << "\n";
	cout << n << ' ' << n - 1 << "\n";
	
}
main(){
	int test; cin>>test;
	while(test--){
		solve();
//		int n; cin>>n;
//		char c; cin>>c;
//		char arr[n];
//		bool mid = false, end = false;
//		bool found = false;
//		bool done = true;
//		for(int i=0; i<n; i++){
//			cin>>arr[i];
//			if(arr[i] != c) done = false;
//			if(!found){
//				if(i == (n/2) && arr[i] == c){
//					mid = true;
//					found = true;
//				}
//				else if(i == n-1 && arr[i] == c){
//					end = true;
//				}
//			}
//		}
//		if(done) cout<<"0\n";
//		else if(mid){
//			cout<<"1\n";
//			cout<<(n/2) + 1<<"\n";
//		}
//		else if(end){
//			cout<<"1\n";
//			cout<<n<<"\n";
//		}
//		else{
//			cout<<"2\n";
//			cout<<(n/2)+1<<" "<<n<<"\n";
//		}
	}
}