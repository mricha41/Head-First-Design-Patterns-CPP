#ifndef FORECASTDISPLAY_HPP
#define FORECASTDISPLAY_HPP

#include <iostream>

#include "Observer.hpp"
#include "Subject.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

class ForecastDisplay : public Observer, public DisplayElement
{
    public:
        ForecastDisplay();
        ForecastDisplay(Subject* subject);
        virtual ~ForecastDisplay();

        void update(Subject* subject) override;

        void display() override;

    private:
        Subject* m_weatherData;
        float m_currentPressure;
        float m_lastPressure;
};

#endif // FORECASTDISPLAY_HPP
