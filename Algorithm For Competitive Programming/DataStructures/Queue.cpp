#include<iostream>
#include<stdio.h>
using namespace std;

int que[1000];
int f = 0 , b = 0;

void push(int x){
	que[f++] = x;
}

void pop(){
	b++;
	if(b == f){
		f = 0;
		b = 0;
	}
}

bool isEmpty(){ return b == f; }

void print(){
	if(isEmpty()) cout<<"Queue Empty\n";
	else{
		for(int i=b; i<f; i++){
			cout<<que[i]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	for(int i=1; i<=5; i++){
		push(i);
	}
	print();
	
	pop();
	pop();
	
	print();
	
	pop();
	pop();
	pop();
	
	print();
	
} 
