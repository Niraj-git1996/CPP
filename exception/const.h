#ifndef CONST_H_INCLUDED
#define CONST_H_INCLUDED
const int x=10;   // const value cannot be change through the program
//x++;
const void display ()/* const function can only read the const members of function but not write */
{
    int y=4;
//  x=15;
    cout<<" const "<<x<<" "<<y<<endl;
}


#endif // CONST_H_INCLUDED
