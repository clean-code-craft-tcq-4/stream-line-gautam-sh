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
   if(avr_queue.size() >= AVERAGE_QUEUE_SIZE)
   {
      avr_queue.pop();
   }
   avr_queue.push(value);
}

double Statistics::getAvrValue()
{
   double sum = 0;
   while(avr_queue.size())
   {
      sum += avr_queue.front();
      avr_queue.pop();
   }
   return sum/AVERAGE_QUEUE_SIZE
}
