#include <iostream>

#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "HeatIndexDisplay.hpp"

int main()
{
    WeatherData* weather = new WeatherData();
    CurrentConditionsDisplay* display = new CurrentConditionsDisplay(weather);
    StatisticsDisplay* stats = new StatisticsDisplay(weather);
    ForecastDisplay* forecast = new ForecastDisplay(weather);
    HeatIndexDisplay* heatIndex = new HeatIndexDisplay(weather);

    weather->setMeasurements(80.f, 65.f, 30.4f);
    weather->setMeasurements(82.f, 70.f, 29.2f);
    weather->setMeasurements(78.f, 90.f, 29.2f);


    weather->removeObserver(heatIndex);
    weather->setMeasurements(80.f, 65.f, 30.4f);

    weather->removeObserver(forecast);
    weather->setMeasurements(82.f, 70.f, 29.2f);

    weather->removeObserver(stats);
    weather->setMeasurements(78.f, 90.f, 29.2f);

    weather->removeObserver(display);

    delete display;
    display = nullptr;
    delete stats;
    stats = nullptr;
    delete forecast;
    forecast = nullptr;
    delete heatIndex;
    heatIndex = nullptr;

    delete weather;
    weather = nullptr;

    return 0;
}
