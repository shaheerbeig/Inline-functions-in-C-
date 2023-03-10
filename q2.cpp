/*
Sum of the series Using an inline function in C++.
*/
#include <iostream>
using namespace std;
inline calc(int num)
{
			int value=9;
			int sum=0;
				for(int i=1;i<=num;i++)
				{
					sum=sum+value;
					value=value*10+9;
				}
                cout<<"The sum of Series is:"<<sum;
	};
		int main()
		{
			int num;
			cout<<"Please enter the number of terms";
			cin>>num;
			calc(num);
	      
	  }