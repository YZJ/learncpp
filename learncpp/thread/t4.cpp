#include <thread>
#include <iostream>
using namespace std;
class SayHello
{
	public:
		void greeting(string const& message)
		{ std::cout<<message<<std::endl;}

};

int main()
{
	SayHello x;
	thread t(&SayHello::greeting,&x,"goodbye");
	t.join();
}

