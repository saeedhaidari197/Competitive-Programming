#include <iostream>
#include <stdio.h>
using namespace std;

int s[100];
int l = 0; // index l (last) to manage the stack

void push(int x) {
	s[l++] = x;
}

int pop() {
	int x = s[l--];
	return x;
}
bool isEmpty() {
	return l == 0;
}

void print() {
	for (int i = 0; i < l; i++) {
		printf("%d ", s[i]);
	}
	printf("\n");
}

int main() {
	// Insert numbers from 1 to 5
	printf("First stack state after insert[1-5]:\n");
	for (int i = 1; i <= 5; i++) {
		push(i);
	}
	print(); // See the state of the stack
	// Delete the last 2 elements
	pop();
	pop();
	
	printf("Stack state after 2 deletes:\n");
	print(); // See the state of the stack
	push(4); // Insert one element
	printf("Stack state after 1 insert (number 4):\n");
	print(); // See the state of the stack
	// Clear the stack
	while (!isEmpty()) {
		pop();
	}
	printf("Stack empty\n");
	return 0;
}
