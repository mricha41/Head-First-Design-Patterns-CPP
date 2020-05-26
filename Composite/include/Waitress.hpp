#ifndef WAITRESS_HPP
#define WAITRESS_HPP

class MenuComponent;

class Waitress
{
public:
	Waitress() = delete;
	Waitress(MenuComponent* components);

	~Waitress();

	void printMenu();
	void printVegetarianMenu();

private:
	MenuComponent* m_components;
};

#endif //WAITRESS_HPP
