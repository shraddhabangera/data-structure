#include<stdio.h>
#include<ctype.h>
char infix[30],postfix[30],stack[30];
int top=-1;

void push(char symbol)
{
stack[++top]=symbol;
}

char pop()
{
char symbol;
symbol=stack[top--];
return symbol;
}

int preceed(char symbol)
{
switch(symbol)
{
case '$':return -1;
case '(':return 0;
case '+':
case '-':return 1;
case '*':
case '/':
case '^':return 2;
} 
}
void infixtopostfix()
{
int i=0,k=0;
char symbol;
while((symbol=infix[i++])!='\0')
{
if(symbol=='(')
push(symbol);
else if(symbol==')')
{
while(stack[top]!='(')
postfix[k++]=pop();
}
else if(isalnum(symbol))
postfix[k++]=symbol;
else
{
while(preceed(symbol)<=preceed(stack[top]))
{
postfix[k++]=pop();
}
push(symbol);
}
}
while(stack[top]!='$')
{
if(stack[top]!='(')
postfix[k++]=pop();
else
pop();
}
}

void main()
{
printf("Enter infix expression:");
//gets(infix);
scanf("%s",infix);
push('$');
infixtopostfix();
printf("The postfix expression is:%s\n",postfix);
//puts(postfix);
}
