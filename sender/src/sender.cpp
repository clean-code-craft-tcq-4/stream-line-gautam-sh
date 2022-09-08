#include "generic_sensor.hpp"
#include "../tests/test_sender.hpp"
#include <iostream>

int main(int argc, char *argv[])
{

    if (argc > 1 && std::string(argv[1]) == "test")
        test_data_generation();

    else
    {
        GenericSensor temperature_sensor;
        double min_temperature{20};
        double max_temperature{80};

        for (int i = 0; i < 50; ++i)
        {
            temperature_sensor.generateData(min_temperature, max_temperature);
            std::cout << "Temperature = ";
            temperature_sensor.sendData();
        }

        GenericSensor SoC_sensor;
        double min_soc{0};
        double max_soc{45};

        for (int i = 0; i < 50; ++i)
        {
            SoC_sensor.generateData(min_soc, max_soc);
            std::cout << "SoC = ";
            SoC_sensor.sendData();
        }
    }
}