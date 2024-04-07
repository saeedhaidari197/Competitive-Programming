#include<bits/stdc++.h>
#define ll long long
using namespace std;

//main(){
//	int test; cin>>test;
//	while(test--){
//		int total = 0;
//		int p , h , n;
//		cin>> p >> h >> n;
//		int a[n], b[n];
//		for(int i=0; i<n; i++) cin>>a[i];
//		bool possible = false;
//		for(int i=0; i<n; i++){
//			cin>>b[i];
//			int time = b[i]/p + (b[i]%p != 0) * a[i];
//			total += time;
//		}
//		for (int i=0;i<n;i++)
//          if (total - a[i] < h)
//           {
//               possible = true;
//               break;
//           }
//		if(possible) cout<<"YES\n";
//		else cout<<"NO\n";
//	}
//}

    void solve (){
        ll A,B,n;
        cin>>A>>B>>n;
        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++) cin>>a[i].first;
        for(int i=0;i<n;i++) cin>>a[i].second;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(B<=0) {
                cout<<"NO"<<"\n";
                return;
            }
            ll k1=a[i].second/A;
            ll k2=a[i].second%A;
            ll k3=B/a[i].first;
            ll k4=B%a[i].first;
            if(k4) k3++;
            if(k2) k1++;
            k1=min(k1,k3);
            B-=k1*a[i].first;
            a[i].second-=k1*A;
            // cout<<"in "<<b[i]<<"\n";
        }
        if(a[n-1].second>0) cout<<"NO"<<"\n";
        // if(B<0) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
        //    cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }