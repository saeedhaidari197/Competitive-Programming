#include<iostream>
#include<string>
using namespace std;

main(){
	int size;
	cin>> size;
	string stone;
	cin>>stone;
	int count;
	
	for(int i=0; i<(size-1); i++)
	{
		if(stone[i] == stone[i+1])
		{
			count++;
		}
	}
	cout<<count;
}