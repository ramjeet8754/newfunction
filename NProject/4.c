

//without argument & without return value
#include<stdio.h>
#include"main.h"

void sum()
{

    int a,b,c;
    printf("enter two numbers:",a,b);
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d",c);

}


void main()
{

    int x=20,y=10;
    sum();
    sub(x,y);
    int result= mux(x,y);
    int result1 =div();
    printf("mux=:%d",result);
    printf("div=:%d",result);
}
