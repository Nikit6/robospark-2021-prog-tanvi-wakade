/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream.h>
#include<conio.h>

class BOX
{
private:
int l,b,h;
public:
void input();
void print();
long volume(long,int,int);
};
void BOX::input()
{
cout<<"input values of l,b,&h"<<"\n";
cin>>l>>b>>h;
}
void BOX::print()
{
cout<<"volume="<<"\n";
}
void BOX::volume()
{
long volume(long l,int b,int h);
{
return(l*b*h);
}
}
void main()
{
set BOX b1;
b1.input();
b1.print();
b1.volume();
return;
}