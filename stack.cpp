/*
 * stack.cpp
 *
 *  Created on: Nov 19, 2021
 *      Author: bcandre1
 */

#include "stack.h"
#include <iostream>
//#include <stack>

using namespace std;

#define MAX 1000

/*class Stack {
	int top;
public:
	int a[MAX];

	Stack() { top = -1;}
	bool push(int x);
	int pop();
	int peek;
	bool isEmpty();
};
bool Stack::push(int x) {
	if(top >= (MAX-1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << "pushed to stack\n";
		return true;
	}
}
int Stack::peek() {
	if(top < 0) {
		cout << "stack is empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}
bool Stack::isEmpty() {
	return (top < 0);
}
*/


