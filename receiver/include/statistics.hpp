#ifndef STATISTICS_HPP
#define STATISTICS_HPP

#include <queue>

const double AVERAGE_QUEUE_SIZE = 5;

class Statistics
{
public:
  Statistics();
  virtual ~Statistics();
  void addValue(double value);
  double getMinValue(){return min_value;}
  double getMaxValue(){return max_value;}
  double getAvrValue(){return avr_value;}

private:
  double min_value;
  double max_value;
  double avr_value;
  std::queue<double> avr_queue;
};

#endif
