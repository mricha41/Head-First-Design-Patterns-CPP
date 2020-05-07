#include "ForecastDisplay.hpp"

ForecastDisplay::ForecastDisplay()
:
    m_weatherData(nullptr),
    m_currentPressure(29.92f),
    m_lastPressure(0.f)
{

}

ForecastDisplay::ForecastDisplay(Subject* subject)
:
    m_currentPressure(29.92f),
    m_lastPressure(0.f)
{
    m_weatherData = subject;
    subject->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay()
{

}

void ForecastDisplay::update(Subject* subject)
{
    if(WeatherData* weather = dynamic_cast<WeatherData*>(subject))
    {
        m_lastPressure = m_currentPressure;
        m_currentPressure = weather->getPressure();
        display();
    }
}

void ForecastDisplay::display()
{
    std::cout<<
        "--------------------------------------------------------\n"
        "########################################################\n"
        "Forecast: "
    <<std::endl;
    if (m_currentPressure > m_lastPressure) {
        std::cout<<"Improving weather on the way!"<<std::endl;
    } else if (m_currentPressure == m_lastPressure) {
        std::cout<<"More of the same"<<std::endl;
    } else if (m_currentPressure < m_lastPressure) {
        std::cout<<"Watch out for cooler, rainy weather"<<std::endl;
    }
    std::cout<<
        "########################################################\n"
        "--------------------------------------------------------\n"
    <<std::endl;
}
