#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef char element;
typedef struct
{
 element str[MAX];
 int top;
}Stack;

void initStack(Stack *s)
{
	s->top = -1;
}

int isFull(Stack *s)
{
 return s->top == MAX-1;
}

int empty(Stack *s)
{
 return s->top == -1;
}

void push(Stack* s, char c)
{
 if(isFull(&s)) printf("FULL");
 else s->str[++s->top] = c;
}

char pop(Stack *s)
{
 char Temp;
 if(empty(&s)){
  printf("EMPTY");
  return 0;
 }
	Temp = s->str[s->top--];
  return Temp;
}

int palindrome(char String[])
{
	Stack s;
	initStack( &s );
 	int i, ch;
	int count, cmp;
	for(i=0;String[i]!='\0';i++)
	{
		ch = String[i];
		count++;
		push(&s,ch);
	}
	for(i=0;i<count;i++)
	{
		cmp = pop(&s);
		if(cmp != String[i]) return 0;
	}
	return 1;
}

int main(void){
 char str[MAX];
 scanf("%s",str);

 if(palindrome(str))
  printf("TRUE");
 else
  printf("FALSE");
 return 0;
}
