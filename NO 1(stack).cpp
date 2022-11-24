#include <iostream>
#define MAX 10
using namespace std;

string data[MAX];
int top = 0; //stack dimulai dari 0

bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}
}

bool isFull(){
	if(top >= MAX){
		return true;
	}else{
		return false;
	}
}

void display(){
	if(!isEmpty()){
		cout << "Data Saved : \n";
		for(int i = 0; i<top; i++){
			cout << i + 1 << ". "<<data[i]<<endl;
		}
	}else{
		cout << "Data is Empty!"<<endl;
	}
	if(isFull()){
		cout << "Stack is Full!!!\n";
	}
	cout << endl;
}

void push(){
	if(!isFull()){
		cout << "Input Data : ";
		cin >> data[top];
		top++;
	}
}

void pop(){
	if(!isEmpty()){
		top--;
	}
}

int main(){
	int pil;
	
	stack :
		system("cls");
		display();
		cout << "\tStack of Clothes\n"; //masukkan jenis pakaian
		cout << " ------------Menu-----------\n"; 
		cout << " 1. Input" << endl;
		cout << " 2. Delete" << endl;
		cout << " 3. Exit" << endl;
		cout << " ----------------------------\n";
		cout << endl;
		cout << "Input Your Choose : ";
		cin >> pil;
	
if(pil == 1){
		system("cls");
		push();
		goto stack;
	}else if (pil == 2){
		pop();
		goto stack;
	}else{
		cout << endl;
		cout << "Program Finished!!";
	}
}

	



