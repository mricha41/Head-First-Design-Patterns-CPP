#ifndef CURRENTCONDITIONSDISPLAY_HPP
#define CURRENTCONDITIONSDISPLAY_HPP

#include <iostream>

#include "Subject.hpp"
#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
    public:
        CurrentConditionsDisplay();
        CurrentConditionsDisplay(Subject* weatherData);
        virtual ~CurrentConditionsDisplay();

        void update(Subject* subject) override;

        void display() override;

    private:
        Subject* m_weatherData;
        float m_temperature;
        float m_humidity;
};

#endif // CURRENTCONDITIONSDISPLAY_HPP
