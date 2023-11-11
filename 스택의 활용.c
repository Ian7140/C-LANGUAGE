#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define STACK_SIZE 20

typedef char element;
typedef struct {
   element data[STACK_SIZE];
   int top;
}Stack;

Stack s;

void initStack( Stack *s );
bool
 isFull();
bool
 isEmpty();
void push( element data );
element pop();

int main(){
   int i;
   char str[20];
   printf("문자열 입력 : ");
   scanf("%s", str);
   initStack(&s);
   for(i=0;str[i]!='\0';i++) {
      push(str[i]);
   }
   while(!isEmpty()) {
      printf("%c", pop());
   }
   return 0;
}

void initStack( Stack *s ){
   s->top=-1;
}
bool isFull(){
	return s.top==STACK_SIZE-1;
}
bool isEmpty(){
	return s.top==-1;
}

void push( element c ){
    if(isFull()) {
       printf("stack is full\n");
       return;
    }
   s.data[++(s.top)]=c;
}

element pop(){
    if(isEmpty()) {
       printf("stack is empty\n");
       return 0;
    }
   return s.data[(s.top)--];
}
