#ifndef MUL_CATCH_H_INCLUDED
#define MUL_CATCH_H_INCLUDED

#include <iostream>
using namespace std;

class Stackoverflow:exception{};
class Stackunderflow:exception{};
template<class T>  /* template class are used to define any data types in classes every class required their own template  */
class Stack
{
private:
    T *stk;
    int top=-1;
    int  size;
public:
    Stack(int st)
    {
        size=st;
        stk=new T[size];
    }

    void push(T x)
    {
        try
        {
            if(top==size-1)
                throw Stackoverflow();
            else
            {
                top++;
                stk[top]=x;
            }
        }
        catch (...)
        {
           cout<<" stack over flow occuered "<<endl;
            cout<<" please check the stack pointer"<<endl;
        }
    }

    T pop()
    {
        try
        {
            if(top==-1)
               throw Stackunderflow{};
             else
                return stk[top--];
        }
        catch (...)    /* this type of syntax used to catch any data type of exception */
        {
          cout<<" stack underflow :"<<endl;
        }
    }
};



#endif // MUL_CATCH_H_INCLUDED
