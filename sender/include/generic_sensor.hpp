#ifndef GENERIC_SENSOR_HPP
#define GENERIC_SENSOR_HPP

class GenericSensor
{
public:
    void generateData();
    void generateData(double, double);
    void sendData();
    int getData();

private:
    double sensor_data;
};

#endif