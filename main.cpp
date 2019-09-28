// Name: Jorge Garcia
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int main()
{
  std::string location;
  int total_days;
  double total_hotel_expenses;
  double total_meal_expense;
  double total_expense;
  std::stringstream sshotel, ssmeal, sstotal;

  std:: cout << "Welcome to the Business Trip Tracker!\n\n";
  std:: cout << "What is the business trip location? ";// Program beings by asking the user to input the US location where the trip was taken
  std:: getline (std::cin,location);
  std:: string r = location.substr(0,19);
  std:: cout << "How many days will the trip take? ";
  std:: cin >> total_days;
  std:: cout << "What is the total hotel expense? ";
  std:: cin >> total_hotel_expenses;
  std:: cout << "What is the total meal expense? ";
  std:: cin >> total_meal_expense;
  std:: cout << '\n';

  total_expense = total_hotel_expenses + total_meal_expense;// Opeartion calculates total expene cost by multiplying 2 different inputs

  sshotel << std:: setprecision(2) << std::fixed << '$' << total_hotel_expenses; //string sstream
  ssmeal << std:: setprecision(2) << std::fixed << '$' << total_meal_expense; //string sstream
  sstotal << std:: setprecision(2) << std::fixed << '$' << total_expense; //string sstream

  std::cout << "Location"// This is where it starts displaying the output results
    << std:: setw(16) << "Days"
    << std:: setw(16) << "Hotel"
    << std:: setw(16) << "Meal"
    << std:: setw(16) << "Total\n";

  std::cout << location// All calculations are displayed in order and horizontally
    << std:: setw(16) << total_days
    << std:: setw(16) << std:: fixed << std:: setprecision(2) << sshotel.str()
    << std:: setw(16) << ssmeal.str()
    << std:: setw(16) << sstotal.str() << std:: endl;


  return 0;
}
