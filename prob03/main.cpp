// Sales prediction

#include <iostream>

int main ()

{

  long int year_projection_sales;
  const double PERCENTAGE_OF_INCREASED_SALES = 1.18;
  const long int LAST_YEAR_SALES = 2103419277;

  std::cout << "Last year\'s sales were $" << LAST_YEAR_SALES << std::endl;


  year_projection_sales = LAST_YEAR_SALES * PERCENTAGE_OF_INCREASED_SALES;

  std::cout << "This year\'s sales prediction: $" << year_projection_sales <<std::endl;



  return 0;

}
