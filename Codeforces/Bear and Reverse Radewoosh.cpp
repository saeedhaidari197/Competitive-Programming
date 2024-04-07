#include <iostream>
using namespace std;

main(){
	int n , c ;
	cin>> n >> c;
	int que[n];
	int time[n];
	for(int i=0; i<n; i++) cin>>que[i];
	for(int i=0; i<n; i++) cin>>time[i];
	
	int total = 0;
	int limak = 0;
	
	for(int i=0; i<n; i++){
		total += time[i];
		int score = que[i] - (c*total);
		if(score > 0) limak += score;
	}
	
	total = 0;
	int radewoosh = 0;
	for(int i=n-1; i>=0; i--){
		total += time[i];
		int score = que[i] - (c*total);
		if(score > 0) radewoosh += score;
	}
	
	if(limak > radewoosh) cout<<"Limak"<<"\n";
	else if(radewoosh > limak) cout<<"Radewoosh"<<"\n";
	else cout<<"Tie"<<"\n";
}