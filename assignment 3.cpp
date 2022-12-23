#include<iostream>
#include<math.h>
using namespace std;
int sum(int a,int b)
{
	return (a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int multi(int a,int b)
{
	return (a*b);
}
float div(float a,float b)
{
	return (a/b);
}
float logarithm(float a)
{
	return log(a);
}
float sqroot(float b)
{
	return sqrt(b);
}
int remainder(int a,int b)
{
	return fmod(a,b);
}
int main()
{
	float a,b,num;
	cout<<"enter your first number = ";
	cin>>a;
	cout<<"enter your second number = ";
	cin>>b;
	num=sum(a,b);
	cout<<"the sum of two numbers is = "<<num<<endl;
	num=sub(a,b);
	cout<<"the subtraction of two numbers is = "<<num<<endl;
	num=multi(a,b);
	cout<<"the multiplication of two numbers is = "<<num<<endl;
	num=div(a,b);
	cout<<"the division of two numbers is = "<<num<<endl;
	num=logarithm(a);
	cout<<"the logarithm  of  "<<a<<" is = "<<num<<endl;
	num=sqroot(b);
	cout<<"the square root of "<<b<<" is = "<<num<<endl;
	num=remainder(a,b);
	cout<<"the remainder of two numbers is = "<<num<<endl;
	
	return 0;
	
	
	
	
	}



