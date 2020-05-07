#ifndef STATISTICSDISPLAY_HPP
#define STATISTICSDISPLAY_HPP

#include <iostream>

#include "Observer.hpp"
#include "Subject.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

class StatisticsDisplay : public Observer, public DisplayElement
{
    public:
        StatisticsDisplay();
        StatisticsDisplay(Subject* subject);
        virtual ~StatisticsDisplay();

        void update(Subject* subject) override;

        void display() override;

    private:
        Subject* m_weatherData;
        float m_maxTemp;
        float m_minTemp;
        float m_tempSum;
        int m_numReadings;
};

#endif // STATISTICSDISPLAY_HPP
