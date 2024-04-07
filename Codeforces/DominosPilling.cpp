#include <iostream>
using namespace std;

main(){
	int row , column , dominos;
	cin>> row >> column;
	
	dominos = row*column;
	
	dominos = dominos / 2;
	
	cout<< dominos;
	
}