#include <iostream>

#include "WildTurkey.hpp"
#include "MallardDuck.hpp"
#include "TurkeyAdapter.hpp"
#include "DuckAdapter.hpp"

int main()
{
	MallardDuck duck;
	WildTurkey turkey;
	TurkeyAdapter turkeyAdapter(&turkey);
	DuckAdapter duckAdapter(&duck);

	std::cout << "The Turkey says..." << "\n";
	turkey.gobble();
	turkey.fly();
	std::cout << "\n";

	std::cout << "The Duck says..." << "\n";
	duck.quack();
	duck.fly();
	std::cout << "\n";

	std::cout << "The TurkeyAdapter says..." << "\n";
	turkeyAdapter.quack();
	turkeyAdapter.fly();
	std::cout << "\n";

	std::cout << "The DuckAdapter says..." << "\n";
	duckAdapter.gobble();
	duckAdapter.fly();
	std::cout << "\n";

	return 0;
}