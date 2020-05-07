#ifndef CALAMARI_HPP
#define CALAMARI_HPP

#include "Clams.hpp"

class Calamari : public Clams
{
    public:
        Calamari();
        virtual ~Calamari();

        std::string toString() override { return "Calamari" ;}
};

#endif // CALAMARI_HPP
