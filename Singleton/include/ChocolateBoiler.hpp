#ifndef CHOCOLATEBOILER_HPP
#define CHOCOLATEBOILER_HPP

class ChocolateBoiler
{
    private:
        ChocolateBoiler()
        {
            m_empty = true;
            m_boiled = false;
        };

    public:
        ~ChocolateBoiler();
        ChocolateBoiler(ChocolateBoiler const&) = delete;
        void operator=(ChocolateBoiler const&) = delete;

        static ChocolateBoiler& getInstance();

        void fill();
        void drain();
        void boil();
        void checkBoiler();
        bool isEmpty(){ return m_empty; };
        bool isBoiled(){ return m_boiled; };

    private:
        bool m_empty;
        bool m_boiled;
};

#endif // CHOCOLATEBOILER_HPP
