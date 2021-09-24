/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
class student{
   public:
   int student_id;
   string student_name;
   int student_age;
   
   void read_studentInfo();
   void print_studentInfo() {
      cout<<"\nStudent ID : "<<student_id<<endl;
      cout<<"Student name : "<<student_name<<endl;
      cout<<"Student Age : "<<student_age;
   }
};
void student::read_studentInfo(){
   cout<<"Enter Student Id :"; cin>>student_id;
   cout<<"\nEnter student_name :"; cin>>student_name;
   cout<<"\nEnter student_age :"; cin>>student_age;
}
  
int main()
{
   student s1;
   s1.read_studentInfo();
   s1.print_studentInfo();
}