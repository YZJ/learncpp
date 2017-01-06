#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int ,10> myarray;
	for(unsigned i = 0;i<myarray.size();i++)
	{
		myarray.at(i) = i;
		
	}
	for(unsigned i = 0;i<myarray.size();i++)
	{
		cout<<' ' <<myarray.at(i);
		
	}
	//cout<<"hello world!"<<endl;
	cin.get();
	return 0;
}
