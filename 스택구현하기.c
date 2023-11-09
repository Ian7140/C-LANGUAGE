#include<stdio.h>
#include<stdbool.h>
#define STACK_SIZE 100
typedef int element; //int를 element로 재정의
//use global variable
typedef struct 
{
	element data[STACK_SIZE];
	element top;
}stack;

stack s;
void initStack(){
	 s.top = -1;
}
bool isEmpty(){
 return s.top==-1;
}
bool isFull(){
	return s.top == STACK_SIZE-1;
}	 
void push(element item){
	if(isFull())
	{
		printf("Stack is full\n");
		return;
	}
	else s.data[++s.top] = item;
}
void pop(){ //반환후 제거
	if(isEmpty())
	{
		printf("Stack is empty\n");
		return;
	}
	else printf("%d\n",s.data[s.top--]);
}
void peek(){//반환만
	if(isEmpty())
	{
		printf("Stack is empty\n");
		return;
	}
	else printf("%d\n",s.data[s.top]);
}
int main(){
	initStack();
	push(3);
	push(4);
	push(5);
	peek(); //return element on the top
	pop(); //return element on the top (delete
	peek();
	return 0;

}
