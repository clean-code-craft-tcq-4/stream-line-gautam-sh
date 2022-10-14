#include "statistics.hpp"

void Statistics::checkMinValue(double value)
{
   if(min_value > value)
     min_value = value;
}

void Statistics::checkMaxValue(double value)
{
   if(max_value < value)
     max_value = value;
}

void Statistics::addAvrValue(double value)
{
   if(avr_queue.size() >= DEFAULT_QUEUE_SIZE)
   {
      avr_queue.pop();
   }
   avr_queue.push(value);
}
