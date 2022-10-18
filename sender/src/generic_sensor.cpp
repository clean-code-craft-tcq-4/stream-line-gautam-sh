#include "generic_sensor.hpp"

#include <iostream>
#include <random>

void GenericSensor::generateData()
{
    std::default_random_engine sensor_engine;
    std::uniform_real_distribution<> sensor_data_distribution(0, 100); //default: generating uniform real no. distribution over the range of sensor data within 0 to 100
    sensor_data = sensor_data_distribution(sensor_engine);
}

void GenericSensor::generateData(double min, double max)
{
    static std::default_random_engine sensor_engine;
    std::mt19937 mt(sensor_engine());
    std::uniform_real_distribution<double> sensor_data_distribution(min, max); //generating uniform real no. distribution over a range of sensor data with specified minimum and maximum
    sensor_data = sensor_data_distribution(sensor_engine);
}

void GenericSensor::sendData()
{
    std::cout << sensor_data << std::endl;
}

int GenericSensor::getData()
{
    return sensor_data;
}