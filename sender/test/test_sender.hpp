#include "generic_sensor.hpp"
#include <assert.h>
#include <iostream>

void test_data_generation()
{
    // Test if sensor data generated is within default range of 0 and 100
    GenericSensor test_sensor_A;
    test_sensor_A.generateData();
    double test_sensor_A_data = test_sensor_A.getData();
    assert(test_sensor_A_data > 0 && test_sensor_A_data < 100);

    // Test if sensor data generated is within the specified min and max limits
    GenericSensor test_sensor_B;
    double test_sensor_min{20};
    double test_sensor_max{80};
    test_sensor_B.generateData(test_sensor_min, test_sensor_max);
    double test_sensor_B_data = test_sensor_B.getData();
    assert(test_sensor_B_data > test_sensor_min && test_sensor_B_data < test_sensor_max);

    std::cout << "All tests passed successfully.\n";
}