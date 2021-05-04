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
		_getch ();
	}
};

StaticClass sobj;

int main (int argc, char* argv [])
{
	std::cout << "Hello world!\n";
	return 0;
}
