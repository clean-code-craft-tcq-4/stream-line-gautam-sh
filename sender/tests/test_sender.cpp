#include "generic_sensor.hpp"
#include <assert.h>

int main()
{
    // Test if sensor data generated is within default range of 0 and 100
    GenericSensor test_sensor;
    test_sensor.generateData();
    double test_sensor_data = test_sensor.getData();
    assert(test_sensor_data > 0 && test_sensor_data < 100);
}