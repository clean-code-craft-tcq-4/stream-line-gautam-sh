#include <iostream>
#include <queue>
#include "statistics.hpp"
#include "../test/test_receiver.hpp"

int main(int argc, char *argv[])
{
   if (argc > 1)
   {
      test_statistics();
      return 0;
   }
   
   double current_value = 0;
   bool is_first_value = true;
   Statistics statistics;
   while (std::cin >> current_value)
   {
      std::cout << current_value << std::endl; //this log could be removed later if not needed
      if(is_first_value)
      {
         statistics.init(current_value);
         is_first_value = false;
      }
      statistics.checkMinValue(current_value);
      statistics.checkMaxValue(current_value);
      statistics.addAvrValue(current_value);
   }
   std::cout << "Minimum value: " << statistics.getMinValue() << std::endl;
   std::cout << "Maximum value: " << statistics.getMaxValue() << std::endl;
   std::cout << "Simple Moving Average of last " << AVERAGE_QUEUE_SIZE << " values: " << statistics.getAvrValue() << std::endl;
   return 0;
}
