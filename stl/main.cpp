//#include <iostream>
#include<bits/stdc++.h>     /* only used for GCC compiler */
//#include <vector>
//#include <list>
//#include <forward_list>
//#include <set>
using namespace std;

int main()
{
   vector<int> v={12,67,89,34,6}; /* create a vector object and assign a valur to them */
    //list<int> v={12,45,20,19,51};/* define same with double linked list */
   // forward_list<int> v={13,27,43,53,33,20};/* define same with single linked list */
//   set<int> v={12,34,65,90,3,38};
   // v.push_front(38); /* in single list value is push from front */
   // v.push_front(56);
    //v.push_back(24);
   // v.push_back(56); /* it will insert new value to end of array */
    //v.pop_back();/* It will  delete the value from the back of array */
    //v.pop_front(); /* only for single linked list */
   // vector<int>::iterator itr;  /* to create iterator  class object to acesss the vector*/
    //list<int>::iterator itr;/*same object creation foe list */
    //forward_list<int>::iterator itr; /*iierator object for the single linked list */
       vector<int>::iterator itr;
    cout<<"using iterator :"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<(*itr)<<" ";
    cout<<endl;
//    v.pop_front();
    cout<<" using for loop :\n";
    for(int x:v)
        cout<<x<<" ";
    int g=v.pop_back());
    cout<<g<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
/* types of class in standard template library
     vector
     list
     forward list
     deque
     priority queue
     stack
     set
     multiset

        */
