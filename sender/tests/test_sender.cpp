#include <assert.h>

int main()
{
    // Test if sensor data generated is within default range of 0 and 100
    double test_sensor_data = test_sensor.generateData();
    assert(test_sensor_data > 0 && test_sensor_data < 100);
}