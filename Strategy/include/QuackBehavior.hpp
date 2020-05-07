#ifndef QUACKBEHAVIOR_HPP
#define QUACKBEHAVIOR_HPP


class QuackBehavior
{
    public:
        QuackBehavior();
        virtual ~QuackBehavior();

        virtual void quack() = 0;
};

#endif // QUACKBEHAVIOR_HPP
