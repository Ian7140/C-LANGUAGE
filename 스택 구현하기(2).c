#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define STACK_SIZE 10
typedef int element;
typedef struct
{
	element num[STACK_SIZE];
	element top;
}Stack;

Stack s;

bool isFull();
bool isEmpty();
void Push(element data );
int Pop();
void initStack(Stack* s );

int main(){
	int menu;
	element data ;
	initStack( &s );
	do{
		printf("1:push, 2:pop, 0:exit : ");
		scanf("%d", &menu);
		switch( menu ){
			case 1 :
				printf("데이터 입력 : ");
				scanf("%d",&data);
				Push(data);
				break;
			case 2 :
        data = Pop();
        if( data )
				  printf("pop 데이터 : %d\n", data);
				break;
      case 0 :
        break;
			default :
				printf("잘못된 입력 입니다. \n");
				break;
		}
	}while( menu );
}

void createStack( Stack *s );
void initStack( Stack *s )
{  // top 포인터를 -1로 초기화
	s->top = -1;
}
bool isEmpty(){
 return s.top==-1;
}
bool isFull(){
	return s.top == STACK_SIZE-1;
}	 
void Push(element data)
{ //스택이 가득 차 있으면 문구 출력 후 리턴, 아니면 push
	if(isFull())
	{
		printf("stack is full\n");
		return;
	}
	else 
	{
		s.num[++s.top] = data;
		printf("%d\n",s.top);
	}
}
element Pop()
{  //스택이 비어  있으면 문구 출력 후 0 리턴, 아니면 맨 위 데이터 리턴
	if(isEmpty())
	{
		printf("stack is empty\n");
		return 0;
	}
	else return s.num[s.top--];
}
