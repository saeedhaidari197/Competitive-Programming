#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

main(){
//	int test; cin>>test;
//	while(test--){
//		int n; cin>>n;
//		int arr[n];
//		for(int i=0; i<n; i++) cin>>arr[i];
//		sort(arr,arr+n);
//		int def = 0;
//		for(int i=0; i<n-1; i++){
//			if(arr[i+1] - arr[i] > 0) def = arr[i+1] - arr[i];
//		}
//		if(def == 0) cout<<0<<"\n";
//		else{
//			
//		}
//	}
	int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            mn = min(mn, vec[i]);
        }
 
        int test = 0;
        for (int i = 0; i < n; i++)
            if (vec[i] == mn) test++;
            
        if (test == n) {
            cout << "-1\n";
            continue;
        }
 
        ll ans = 0;
        for (int i = 0; i < n; i++)
            ans = gcd(ans, vec[i] - mn);
        cout << ans << endl;
 
    }
}