#ifndef WEATHERDATA_HPP
#define WEATHERDATA_HPP

#include <vector>
#include <algorithm>

#include "Subject.hpp"
#include "Observer.hpp"

class WeatherData : public Subject
{
    public:
        WeatherData();
        virtual ~WeatherData();

        void registerObserver(Observer* o);

        void removeObserver(Observer* o);

        void notifyObservers();

        void measurementsChanged(){ notifyObservers(); }

        void setMeasurements(float temperature, float humidity, float pressure)
        {
            m_temperature = temperature;
            m_humidity = humidity;
            m_pressure = pressure;
            measurementsChanged();
        }

        float getTemperature(){ return m_temperature; }
        float getHumidity(){ return m_humidity; }
        float getPressure(){ return m_pressure; }

    private:
        std::vector<Observer*> m_observers;
        float m_humidity;
        float m_temperature;
        float m_pressure;
};

#endif // WEATHERDATA_HPP
