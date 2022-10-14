#include <iostream>
#include <queue>

double calculate_average(std::queue<double> input_queue)
{
   double queue_sum = 0;
   double queue_size = input_queue.size();
   while(input_queue.size())
   {
      std::cout << input_queue.front() << std::endl;
      queue_sum += input_queue.front();
   }
   return queue_sum/queue_size;
}

int main(int argc, char *argv[])
{
   double current_value = 0;
   double min_value = 0;
   double max_value = 0;
   bool is_first_value = true;
   std::queue<double> average_queue;
   const int DEFAULT_QUEUE_SIZE = 5;
   while (std::cin >> current_value)
   {
      std::cout << current_value << std::endl; //this log could be removed later if not needed
      if(is_first_value)
      {
         min_value = current_value;
         max_value = current_value;
         is_first_value = false;
      }
      if(min_value > current_value)
         min_value = current_value;
      if(max_value < current_value)
         max_value = current_value;
      if(average_queue.size() >= DEFAULT_QUEUE_SIZE)
      {
         average_queue.pop();
      }
      average_queue.push(current_value);
   }
   std::cout << "Minimum value: " << min_value << std::endl;
   std::cout << "Maximum value: " << max_value << std::endl;
   std::cout << "Maximum value: " << max_value << std::endl;
   std::cout << "Simple Moving Average of last 5 values: " << average_queue.size() << std::endl;
   return 0;
}
