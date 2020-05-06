#include <iostream>
#include "funcptr.h"
#include "ref.h"
#include "funcover.h"
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
cout<<p<<endl;
      p++;
     cout<<++(*(p++))<<endl;
    cout<<p<<endl;
    cout<<" sending...  "<<*p<<endl;/**sending a same value to a func */
    Ref1(*p);
  cout<<sum(12)<<endl;   /** function overloading with int*/
    cout<<sum(3.6f,2.1f)<<endl; /** function overloading with float */
     cout<<sum(12,5,8)<<endl;
    return 0;
}

