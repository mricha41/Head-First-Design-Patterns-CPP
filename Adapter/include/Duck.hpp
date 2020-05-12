#ifndef DUCK_HPP
#define DUCK_HPP

class Duck
{
public:
	Duck();
	~Duck();

	virtual void quack() = 0;
	virtual void fly() = 0;
};

#endif //DUCK_HPP


