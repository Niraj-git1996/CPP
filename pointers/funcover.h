#ifndef FUNCOVER_H_INCLUDED
#define FUNCOVER_H_INCLUDED
#include<iostream>
using namespace std;
//int sum(int a,int b)
//{
//return a+b;
//}
float sum(float a,float b)
{
return a+b;
}
int sum(int a,int b=0,int c=7)
{
return a+b+c;
}


#endif // FUNCOVER_H_INCLUDED
