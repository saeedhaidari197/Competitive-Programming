#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string FN , LN;
	cin>>FN>>LN;
	int n; cin>>n;
	cout<<FN<<" "<<LN<<"\n";
	while(n--){
		string temp;
		cin>>temp;
		if(temp == FN){
			cin>>temp;
			FN = temp;
		}
		else{
			cin>>temp;
			LN = temp;
		}
		cout<<FN<<" "<<LN<<"\n";
	}
	return 0;
}