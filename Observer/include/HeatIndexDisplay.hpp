#ifndef HEATINDEXDISPLAY_HPP
#define HEATINDEXDISPLAY_HPP

#include <iostream>

#include "Observer.hpp"
#include "Subject.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

class HeatIndexDisplay : public Observer, public DisplayElement
{
    public:
        HeatIndexDisplay();
        HeatIndexDisplay(Subject* subject);
        virtual ~HeatIndexDisplay();

        void update(Subject* subject) override;

        void display() override;

    private:
        Subject* m_weatherData;
        float m_heatIndex;
};

#endif // HEATINDEXDISPLAY_HPP
