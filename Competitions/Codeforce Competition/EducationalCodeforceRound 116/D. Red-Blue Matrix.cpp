#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<queue>
#include<iomanip>
 
#define x first
#define y second
#define pb push_back
#define mp make_pair
#define sz(v) v.size()
#define up_b upper_bound
#define low_b lower_bound
#define all(v) v.begin(),v.end()
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
const int N=5e5+11;
const ll mod=1e9+7;
const int inf=2e9;
const ll INF=1e18;
const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};
 
pair<pair<int,int>,int>p[N];
pair<int,int>t[4][N];
 
void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>a(n+1,vector<int>(m+1));
	vector<vector<pair<int,int>>>b(n+1,vector<pair<int,int>>(m+1));
	vector<vector<pair<int,int>>>c(n+1,vector<pair<int,int>>(m+1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
		b[i][1]=mp(a[i][1],a[i][1]);
		for(int j=2;j<=m;j++){
			b[i][j].x=min(b[i][j-1].x,a[i][j]);
			b[i][j].y=max(b[i][j-1].y,a[i][j]);
		}
		c[i][m]=mp(a[i][m],a[i][m]);
		for(int j=m-1;j>=1;j--){
			c[i][j].x=min(c[i][j+1].x,a[i][j]);
			c[i][j].y=max(c[i][j+1].y,a[i][j]);
		}
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<=n;j++){
			p[j]=mp(b[j][i],j);
		}
		sort(p+1,p+n+1);
		for(int j=1;j<=n;j++){
			t[0][j]=p[j].x;
			t[1][j]=p[j].x;
			t[2][j]=c[p[j].y][i+1];
			t[3][j]=t[2][j];
		}
		for(int j=2;j<=n;j++){
			t[0][j].x=min(t[0][j].x,t[0][j-1].x);
			t[0][j].y=max(t[0][j].y,t[0][j-1].y);
			t[2][j].x=min(t[2][j].x,t[2][j-1].x);
			t[2][j].y=max(t[2][j].y,t[2][j-1].y);
		}
		for(int j=n-1;j>=1;j--){
			t[1][j].x=min(t[1][j].x,t[1][j+1].x);
			t[1][j].y=max(t[1][j].y,t[1][j+1].y);
			t[3][j].x=min(t[3][j].x,t[3][j+1].x);
			t[3][j].y=max(t[3][j].y,t[3][j+1].y);
		}
		int k=-1;
		for(int j=1;j<n;j++){
			if(t[0][j].y<t[1][j+1].x&&t[2][j].x>t[3][j+1].y){
				k=j;
				break;
			}
		}
		if(k!=-1){
			string s="";
			for(int j=1;j<=n;j++){
				s+="R";
			}
			for(int j=1;j<=k;j++){
				s[p[j].y-1]='B';
			}
			cout<<"YES\n";	
			cout<<s<<" "<<i;
			return ;
		}
	}
	cout<<"NO";
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int T=1;
	cin>>T;
	while(T--){
		solve();
		cout<<endl;
	}
}