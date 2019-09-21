// Name: Jorge Garcia
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <cstring>

int main()
{
  std::string location;
  int total_days;
  double total_hotel_expenses;
  double total_meal_expense;
  double total_expense;

  std::cout << "Welcome to the Business Trip Tracker!\n\n";
  std::cout << "What is the business trip location? ";// Program beings by asking the user to input the US location where the trip was taken
  std::cin >> location;
  std::cout << "How many days will the trip take? ";
  std::cin >> total_days;
  std::cout << "What is the total hotel expense? ";
  std::cin >> total_hotel_expenses;
  std::cout << "What is the total meal expense? ";
  std::cin >> total_meal_expense;
  std::cout << '\n';

  total_expense = total_hotel_expenses + total_meal_expense;// Opeartion calculates total expene cost by multiplying 2 different inputs

  std::cout << "Location"// This is where it starts displaying the output results
  << std:: setw(12) << "Days"
  << std:: setw(12) << "Hotel"
  << std:: setw(12) << "Meal"
  << std:: setw(12) << "Total\n";

  std::cout << location// All calculations are displayed in order and horizontally
  << std:: setw(12) << total_days
  << std:: setw(12) << total_hotel_expenses
  << std:: setw(12) << total_meal_expense
  << std:: setw(12) << total_expense << std::endl;


  return 0;
}
