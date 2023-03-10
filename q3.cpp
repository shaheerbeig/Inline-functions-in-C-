/*write an inline functio to calculate the cube of a number in c++
*/ 
#include <iostream>

using namespace std;
inline int cube(int s) 
	{ 
	return s * s * s;
	 }
int main()
{
	int num;
	cout<<"Enter Number::";
	cin>>num;
    cout << "The cube of requested number is is: " << cube(num) << "\n";
    return 0;
}