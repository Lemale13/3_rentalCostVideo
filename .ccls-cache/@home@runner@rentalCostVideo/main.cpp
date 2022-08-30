/*Five Star Retro Video rents VHS tapes and DVDs to the same connoisseurs who like to buy LP record albums. The store rents new videos for $3.00 a night, and oldies for $2.00 a night. Write a program that the clerks at Five Star Retro Video can use to calculate the total charge for a customer’s video rentals. The program should prompt the user for the number of each type of video and output the total cost.*/
#include <iostream>
using namespace std;

int main() {
  const double PRICE_NEW = 3.0, PRICE_OLD = 2.0;
  double totalCost;
  int newVdeo, oldVdeo;
  std::cout <<"\nEnter the number of new videos: ";
  cin>>newVdeo;
  std::cout <<"\nEnter the number of old videos: ";
  cin>>oldVdeo;
  totalCost = double((newVdeo * PRICE_NEW) + (oldVdeo * PRICE_OLD));
  cout<<"The total rental cost is: "<<"$"<<totalCost;

  return 0;
  
}