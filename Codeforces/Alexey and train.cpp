#include <iostream>
using namespace std;

main(){
	int cas = 0;
	cin>>cas;
	int station = 0;
	int time[100][2];
	int delay[100];
	int reach = 0;
	while(cas--){
		cin>>station;
		for(int e = 0; e<station; e++)
		{
			for(int x=0; x<2; x++)
			{
				cin>>time[e][x];
			}
		}
		for(int x=0; x<station; x++)
		{
			cin>>delay[x];
		}
		
	}
	cout<<"Done";
}