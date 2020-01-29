#include <iostream>
using namespace std;

double addTax(double taxRate, double cost) {
  taxRate = taxRate/100;
  cost = cost + (cost*taxRate);
  return cost;
}

int main(int argc, char ** argv) {
  double itemCost = 0;
  double salesTax = 0;

  cout << "Enter the cost of the item: ";
  cin >> itemCost;
  cout << "Enter the sales tax as a percent: ";
  cin >> salesTax;

  cout << "Total cost of the item: $" << addTax(salesTax,itemCost) << endl;

  return 0;
}
