#ifndef DISPLAYELEMENT_HPP
#define DISPLAYELEMENT_HPP


class DisplayElement
{
    public:
        DisplayElement();
        virtual ~DisplayElement();

        virtual void display() = 0;
};

#endif // DISPLAYELEMENT_HPP
