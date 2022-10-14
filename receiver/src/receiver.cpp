#include <iostream>
#include <queue>
#include "statistics.hpp"

int main(int argc, char *argv[])
{
   double current_value = 0;   
   Statistics statistics;
   while (std::cin >> current_value)
   {
      std::cout << current_value << std::endl; //this log could be removed later if not needed
      statistics.checkMinValue(current_value);
      statistics.checkMaxValue(current_value);
      statistics.addAvrValue(current_value);
   }
   std::cout << "Minimum value: " << statistics.getMinValue() << std::endl;
   std::cout << "Maximum value: " << statistics.getMaxValue() << std::endl;
   std::cout << "Simple Moving Average of last " << AVERAGE_QUEUE_SIZE << "values: " << statistics.getAvrValue() << std::endl;
   return 0;
}
