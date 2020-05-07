#include "HeatIndexDisplay.hpp"

HeatIndexDisplay::HeatIndexDisplay()
:
    m_weatherData(nullptr),
    m_heatIndex(0.f)
{

}

HeatIndexDisplay::HeatIndexDisplay(Subject* subject)
:
    m_heatIndex(0.f)
{
    m_weatherData = subject;
    subject->registerObserver(this);
}

HeatIndexDisplay::~HeatIndexDisplay()
{

}

void HeatIndexDisplay::update(Subject* subject)
{
    if(WeatherData* weather = dynamic_cast<WeatherData*>(subject))
    {
        float t = weather->getTemperature();
        float rh = weather->getHumidity();
        m_heatIndex = (float)
            ((16.923 + (0.185212 * t)) +
            (5.37941 * rh) -
            (0.100254 * t * rh) +
            (0.00941695 * (t * t)) +
            (0.00728898 * (rh * rh)) +
            (0.000345372 * (t * t * rh)) -
            (0.000814971 * (t * rh * rh)) +
            (0.0000102102 * (t * t * rh * rh)) -
            (0.000038646 * (t * t * t)) +
            (0.0000291583 * (rh * rh * rh)) +
            (0.00000142721 * (t * t * t * rh)) +
            (0.000000197483 * (t * rh * rh * rh)) -
            (0.0000000218429 * (t * t * t * rh * rh)) +
            (0.000000000843296 * (t * t * rh * rh * rh)) -
            (0.0000000000481975 * (t * t * t * rh * rh * rh)));
            display();
    }
}

void HeatIndexDisplay::display()
{
    std::cout<<
        "------------------------\n"
        "########################\n"
        "Heat index is "
        << m_heatIndex <<
        "\n########################\n"
        "------------------------\n"
    <<std::endl;
}
