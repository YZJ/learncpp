#include<iostream>
#include<thread>
#include<chrono>

std::thread::id main_thread_id = std::this_thread::get_id();

void is_main_thread() {
	if ( main_thread_id == std::this_thread::get_id() )
	{
		std::cout << "This is the main thread.\n";
		std::cout << main_thread_id << std::endl;
	}
	else
	{
		std::cout<< "This is not the main thread .\n";
		std::cout << std::this_thread::get_id() << std::endl;
	}
		
}

int main()
{
	is_main_thread();
	std::thread th (is_main_thread);
	th.join();
}
