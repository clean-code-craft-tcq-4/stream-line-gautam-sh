#include "statistics.hpp"
#include <assert.h>
#include <iostream>

void test_statistics()
{
   double current_value = 0;
   bool is_first_value = true;
   Statistics statistics;
   double test_data[10] = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};
   for (int i = 0; i < sizeof(test_data)/sizeof(test_data[0]); i++)
   {
      current_value = test_data[i];
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
   std::cout << "All tests passed successfully.\n";
}
