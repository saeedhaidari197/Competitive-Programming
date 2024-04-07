#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	
	int test; cin>>test;
	while(test--){
		vector<pair<int, int>> cpu;
		int n; cin>>n;
		int in[n];
		int out[n];
		for(int i=0; i<n; i++) cin>>in[i];
		for(int i=0; i<n; i++) cin>>out[i];
		for(int i=0; i<n; i++) cpu.push_back(make_pair(in[i], out[i]));
		
		int res = 0;
		sort(cpu.begin(), cpu.end());
		
		while(cpu.size() > 0){
			int ram = -1;
			for(int j=0; j<cpu.size(); j++){
				if(cpu[j].first >= ram){
					ram = cpu[j].second;
					cpu.erase(cpu.begin() + j);
					j--;
				}
			}
			res++;
		}
		cout<<res<<"\n";
	}
	
	
	
	
	return 0;
}