/*project: 2.3
Program: rentalCostVideo.cpp
Author: Gaston Honomou
Compute the rental cost of new and old videos.

1. The input are:
        The total number of new videos.
        The toal number of old videos.
2.  Constants:
        PRICE_NEW
        PRICE_OLD
        
3. Computations:
        The sum of total number of new videos and total number of old videos*/


// Include the header
#include <iostream>
using namespace std;


// The main entry point 
int main() {

  // Define the various variables
  const double PRICE_NEW = 3.0, PRICE_OLD = 2.0;
  double totalCost;
  int newVdeo, oldVdeo;

  // Prompt the user for the number of new video
  std::cout <<"\nEnter the number of new videos: ";
  cin>>newVdeo;

  // Promot the user for the number of old video
  std::cout <<"\nEnter the number of old videos: ";
  cin>>oldVdeo;

  // Compute the total cost
  totalCost = double((newVdeo * PRICE_NEW) + (oldVdeo * PRICE_OLD));

  // Display the total cost
  cout<<"\nThe total rental cost is: "<<"$"<<totalCost<<"\n\n";

  // Tell user the program is finish 
  cout<<"Program completed successfully.";

  return 0;
  
}