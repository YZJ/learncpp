#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int > myvector (10);
	for(unsigned i = 0;i<myvector.size();i++)
	{
		myvector.at(i) = i;
		
	}
	for(unsigned i = 0;i<myvector.size();i++)
	{
		cout<<' ' <<myvector.at(i);
		
	}
	//cout<<"hello world!"<<endl;
	cin.get();
	return 0;
}

