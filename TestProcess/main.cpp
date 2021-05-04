#include <iostream>
#include <conio.h>
#include <windows.h>

class StaticClass
{
public:
	StaticClass ()
	{
		std::cout << "Static object constructed.\n";
	}
	~StaticClass ()
	{
		std::cout << "Static object destructed.\n";
	}
};

StaticClass sobj;

int main (int argc, char* argv [])
{
	std::cout << "Hello world!\n";
	_getch ();
	return 0;
}
