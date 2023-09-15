#include <iostream>
#include <cstdlib>

using
	std::cout,
	std::endl;

auto SayHelloWorld() -> void
{
	cout<<"Hello world!"<<endl;
}

auto main() -> int
{
	SayHelloWorld();
	return EXIT_SUCCESS;
}
