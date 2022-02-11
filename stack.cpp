#include<iostream>
using namespace std;

class stack{
	int *arr;
	int top;
	int size;

public:
	stack(int size){
		this -> size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element){
		if(size - top > 1){
			top++;
			arr[top] = element;
		}
		else{
			cout << "Stack overflow\n";
		}
	}
	void pop(){
		if(top >= 0){
			top--;
		}
		else{
			cout<<"Stack undrflow\n";
		}
	}
	int peek(){
		if(top >= 0){
			return arr[top];
		}
		else{
			cout<<"Stack is empty\n";
			return -1;
		}
	}
	bool empty(){
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}

};
int main(){

	stack st(5);

	st.push(22);
	st.push(43);
	st.push(44);
	st.push(40);
	st.push(12);
	cout << st.peek() <<'\n';
	st.pop();
	cout << st.peek() <<'\n';
	st.pop();
	cout << st.peek() <<'\n';
	st.pop();
	cout << st.peek() <<'\n';

}