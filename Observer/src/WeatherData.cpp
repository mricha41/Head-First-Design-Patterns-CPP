#include "WeatherData.hpp"

WeatherData::WeatherData()
{

}

WeatherData::~WeatherData()
{

}

void WeatherData::registerObserver(Observer* o)
{
    m_observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
    std::vector<Observer*>::iterator found = std::find(m_observers.begin(), m_observers.end(), o);
    if (found != m_observers.end()) m_observers.erase(found);
}

void WeatherData::notifyObservers()
{
    for(auto&& obs : m_observers)
    {
        obs->update(this);
    }
}
