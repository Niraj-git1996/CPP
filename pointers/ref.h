#ifndef REF_H_INCLUDED
#define REF_H_INCLUDED
#include <iostream>
using namespace std;

void Ref1(int &x)/** storing a pointer value to a address of variable */
{
    int &y=x;     /**storing a variable value of variable to another variable address */


    x++;
    cout<<"the x value is: "<<x<<endl;
    y++;
    cout<<"the y value is: "<<y<<endl;
    cout<<" the add x  "<<&x<<"  "<<"the add y  "<<&y<<endl;/* display address of x and y */
}


#endif // REF_H_INCLUDED
