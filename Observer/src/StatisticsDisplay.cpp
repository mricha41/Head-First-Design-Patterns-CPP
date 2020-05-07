#include "StatisticsDisplay.hpp"

StatisticsDisplay::StatisticsDisplay()
:
    m_weatherData(nullptr),
    m_maxTemp(0.f),
    m_minTemp(200.f),
    m_tempSum(0.f),
    m_numReadings(0)
{

}

StatisticsDisplay::StatisticsDisplay(Subject* subject)
:
    m_maxTemp(0.f),
    m_minTemp(200.f),
    m_tempSum(0.f),
    m_numReadings(0)
{
    m_weatherData = subject;
    subject->registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay()
{

}

void StatisticsDisplay::update(Subject* subject)
{
    if (WeatherData* weather = dynamic_cast<WeatherData*>(subject)) {
            float temp = weather->getTemperature();
            m_tempSum += temp;
            m_numReadings++;

            if (temp > m_maxTemp) {
                m_maxTemp = temp;
            }

            if (temp < m_minTemp) {
                m_minTemp = temp;
            }

            display();
    }
}

void StatisticsDisplay::display()
{
    std::cout<<
        "--------------------------------------------------------\n"
        "########################################################\n"
        "Avg/Max/Min temperature = "
        << (float)(m_tempSum / m_numReadings)
        <<"/"
        << m_maxTemp
        << "/"
        << m_minTemp <<
        "\n########################################################\n"
        "--------------------------------------------------------\n"
        <<
    std::endl;
}
