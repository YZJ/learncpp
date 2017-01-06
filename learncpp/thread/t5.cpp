#include <thread>
#include <iostream>
#include <functional>
using namespace std;
class PrintThis
{
	public:
		void operator()() const
		{ std::cout<<"this"<<this<<std::endl;}

};

int main()
{
	PrintThis x;
	x();
	cout<<"dd";
	/*thread t(std::ref(x));
	t.join();
	thread t2(x);
	t2.join();*/
}

