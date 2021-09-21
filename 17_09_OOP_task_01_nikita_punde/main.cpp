/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
class Rectangle
{
public:
	Rectangle() {}
	explicit Rectangle(float i) : length(i), breadth(i)
	{}
	Rectangle(float a, float b) :length(a), breadth(b)
	{}
	void Calculate() { std::cout << length * breadth<<std::endl; }


private:
	float length {0},
		   breadth {0};
	
};
int main()
{
	Rectangle r1;
	Rectangle r2{ 9 };
	Rectangle r3{ 5,6 };
	r1.Calculate();
	r2.Calculate();
	r3.Calculate();
	return 0;
}
