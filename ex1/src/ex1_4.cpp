#include<iostream>
using namespace std;

int main(void){
	int a,b,sum,product;
	cout<<"Please enter two positive integers lower than 255"<<endl;
	cin>>a>>b;
	sum=a+b;
	product=a*b;
	cout<<"The sum is"<<sum<<endl;
	cout<<"The product is"<<product<<endl;
	return 0;
}
