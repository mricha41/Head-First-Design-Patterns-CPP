#ifndef CAFFEINEBEVERAGE_HPP
#define CAFFEINEBEVERAGE_HPP

class CaffeineBeverage
{
public:
	CaffeineBeverage();
	~CaffeineBeverage();

	virtual void prepareRecipe () final;

	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	virtual void boilWater() final;
	virtual void pourInCup() final;

	virtual bool customerWantsCondiments() { return true; };
};


#endif //CAFFEINEBEVERAGE_HPP
