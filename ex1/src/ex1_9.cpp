#include<iostream>
using namespace std;

int main(void){
	int i=50, sum=0;
	while (i<=100){
		sum+=i;
		i++;
	}
	cout<<"The sum from 50 to 100 is\n"
	    <<sum<<endl;
	return 0;
}

