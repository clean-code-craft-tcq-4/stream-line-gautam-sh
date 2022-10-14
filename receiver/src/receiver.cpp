#include <iostream>

int main(int argc, char *argv[])
{
   double current_value = 0;
   double min_value = 0;
   double max_value = 0;
   bool is_first_value = true;
   while (std::cin >> current_value)
   {
      std::cout << current_value << std::endl; //this log could be removed later if not needed
      if(is_first_value)
      {
         min_value = current_value;
         max-value = current_value;
         is_first_value = false;
      }
      if(min_value > current_value)
         min_value = current_value;
      if(max_value < current_value)
         max_value = current_value;
   }
   std::cout << "Minimum value: " << min_value << std::endl;
   std::cout << "Maximum value: " << max_value << std::endl;
   return 0;
}
