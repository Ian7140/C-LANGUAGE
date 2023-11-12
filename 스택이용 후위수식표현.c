#include <stdio.h>
#define MAX 300
typedef int element;
typedef struct
{
	element data[MAX];
	int top;
}Stack;

void initStack(Stack* s)
{
 s->top=-1;
}
int isEmpty(Stack* s)
{
	return s->top == -1; 
}
int isFull(Stack* s)
{
	return s->top == MAX-1; 
}
void push(Stack* s, element c)
{
	if(isFull(&s)) printf("FULL");
	else s->data[++s->top] = c;
}
element pop(Stack* s )
{
	if(isEmpty(&s)) return NULL;
	return s->data[s->top--];
}
int main(){
	char expr[MAX];
	Stack s;
	int i,value1,value2,result;
	char ch;
	gets(expr);
	for(i=0;expr[i]!='\0';i++)
	{
		if(expr[i]-'0' >= 0 && expr[i]-'0'<= 9) 
		{
			push(&s,expr[i]-'0'); //숫자면
		}
		else if(expr[i] != ' ') //연산자면
		{
			ch = expr[i];
			value1 = pop(&s);
			value2 = pop(&s);
			if(value2 != NULL)
			{
				switch(ch)
				{
					case '+':
						result = value1 + value2;
						push(&s,value1 + value2);
						break;
					case '-':
						result = value1 - value2;
						push(&s,value2 - value1);
						break;
					case '*':
						result = value1 * value2;
						push(&s,value1 * value2);
						break;
					case '/':
						result = value1 / value2;
						push(&s,value2 / value1);
						break;
				}
			}
			else if(value2 == NULL) break;
		}
	}
	printf("%d",result);
	return 0;
}

