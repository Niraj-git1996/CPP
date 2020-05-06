#include <iostream>
#include "funcptr.h"
using namespace std;
//int Max(int x,int y);

int main()
{
    //cout << "Hello world!" << endl;

    int A[]={2,4,6,8,10,12};
    int *p=A;
   int (*fp)(int,int);  /** function pointer declaration with arguments */
    fp=Max;             /**assign max function to function pointer */
    //(*fp)(18,4);
    cout<<(*fp)(17,8)<<endl;/** printing value of function pointer*/
    fp=Min;
    cout<<(*fp)(17,8)<<endl;
    cout<<endl;


    return 0;
}

