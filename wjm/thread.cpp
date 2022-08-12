#include <iostream>
#include <string>
#include <thread>
using namespace std;

void Print()
{
	cout << "Hello Multi-thread!" << endl;
}

int main()
{
	std::thread first_thread(Print);
	first_thread.join();
	return 0;
}