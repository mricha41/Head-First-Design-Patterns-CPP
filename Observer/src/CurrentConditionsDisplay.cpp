#include "CurrentConditionsDisplay.hpp"

CurrentConditionsDisplay::CurrentConditionsDisplay()
{

}

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData)
{
    m_weatherData = weatherData;
    weatherData->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{

}

void CurrentConditionsDisplay::update(Subject* subject)
{
    if (WeatherData* weather = dynamic_cast<WeatherData*>(subject))
    {
        m_temperature = weather->getTemperature();
        m_humidity = weather->getHumidity();
        display();
    }
}

void CurrentConditionsDisplay::display()
{
    std::cout<<
        "-----------------------\n"
        "#######################\n"
        "Current conditions:\n"
        << m_temperature
        << "F degrees and\n"
        << m_humidity
        << "% humidity\n"
        "#######################\n"
        "-----------------------\n"
        <<
    std::endl;
}
