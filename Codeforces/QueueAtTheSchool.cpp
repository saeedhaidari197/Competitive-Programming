#include <iostream>
#include <string>
using namespace std;

main(){
	int student;
	int time;
	cin >> student >> time;
	string que;
	cin>>que;
	while(time--){
		for(int i =0; i<que.length(); i++){
			if(que[i] == 'B' && que[i+1] == 'G'){
				char temp = que[i];
				que[i] = que[i+1];
				que[i+1] = temp;
				i++;
			}
		}
	}
	cout<<que;
}