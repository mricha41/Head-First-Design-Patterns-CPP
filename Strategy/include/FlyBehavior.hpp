#ifndef FLYBEHAVIOR_HPP
#define FLYBEHAVIOR_HPP


class FlyBehavior
{
    public:
        FlyBehavior();
        virtual ~FlyBehavior();

    virtual void fly() = 0;
};

#endif // FLYBEHAVIOR_HPP
