/*
Youre working on a project that requires you to perform a series of mathematical
operations on a set of data points. Your task is to write an inline function that takes in
a data point, applies the following series of mathematical operations to it, and returns
the result:
? Multiply the data point by 2.
? Add 10 to the result.
? Divide the result by 3.
Write the code for the inline function that performs these mathematical operations on a
single data point.
*/
#include<iostream>
#include<string>

using namespace std;

inline float calculator(int x){
    float result;
    result=(((x*2)+10)/3.0);
    return result;
}

int main(){
    int value;
    cout<<"ENTER THE VALUE YOU WANT THE MATHEMATICAL OPERATION TO BE PERFOMED ON:"<<endl;
    cin>>value;
    cout<<"THE RESULT IS "<<calculator(value);
}
