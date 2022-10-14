#ifndef STATISTICS_HPP
#define STATISTICS_HPP

#include <queue>

const double AVERAGE_QUEUE_SIZE = 5;

class Statistics
{
public:
  void init(double value);
  void checkMinValue(double value);
  void checkMaxValue(double value);
  void addAvrValue(double value);
  double getMinValue(){return min_value;}
  double getMaxValue(){return max_value;}
  double getAvrValue();

private:
  double min_value;
  double max_value;
  std::queue<double> avr_queue;
};

#endif
