#include <iostream>
#include "mul_catch.h"
#include "const.h"
//#define PI 3.143444
#ifndef PI
  #define PI 3.1999
#endif // PI
#ifndef max
    #define max(x,y) (x>y?x:y)
#endif // max
#ifndef msg
   #define msg(x) #x
#endif // msg
using namespace std;

int main()
{
    int a=10,b,c;
    int stz,st_val;
     display();
     cout<<PI<<endl;
     cout<<max(6,9)<<endl;
      cout<<msg(job problem)<<endl;

    cout<<"enter the value of b :"<<endl;
    cin>>b;
    try
    {
        if(b==0)
        {
            throw string(" div by zero");/* we can throw any primitive data types to catch block defined with that data types */
        }
        else
            c=a/b;cout<<"division  "<<c<<endl;
    }
    catch(...)
    {
        cout<<"division by zero error "<<endl;
    }
//    cout<<"enter the size of stack :"<<endl;
//    cin>>stz;
//    Stack<float> s1(stz);
//    int n=stz;
//    while(n!=0)
//    {
//      cout<<"enter the numbers to push :";
//      cin>>st_val;
//      s1.push(st_val);
//      n--;
//       }
//       n=stz;
//       cout<<"popping number from stack..."<<endl;
//       while(n!=0)
//     {
//      cout<<s1.pop()<<endl;
//      n--;
//       }

    cout << "Hello c++!" << endl;
    return 0;
}
