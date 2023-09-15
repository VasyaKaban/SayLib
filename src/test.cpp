#include <iostream>
#include <cstdlib>

using
	std::cout,
	std::endl;

template<typename T>
requires
	requires(T &t)
	{
		cout<<t;
	}
auto SayAny(T &&t) -> void
{
	cout<<"I'm say: "<<std::forward<T>(t)<<endl;
}

auto main() -> int
{
	SayAny("Hello there!");
	return EXIT_SUCCESS;
}
