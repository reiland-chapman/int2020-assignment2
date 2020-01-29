#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
  const int ARRAY_COLUMNS = 5;
  const int ARRAY_ROWS = 4;
  int a[ARRAY_ROWS][ARRAY_COLUMNS];

  cout << "Input numbers into 2D array:" << endl;
  
  for(int i=0; i < ARRAY_ROWS; ++i) {
    for(int j=0; j < ARRAY_COLUMNS; ++j) {
      cout << "Row " << i+1 << ", Column " << j+1 << ": ";
      cin >> a[i][j];
    }
  }

  cout << endl;
  cout << "Displaying numbers:" << endl;

  for(int i=0; i < ARRAY_ROWS; ++i) {
    for(int j=0; j < ARRAY_COLUMNS; ++j) {
      cout << "Row " << i+1 << ", Column " << j+1 << ": " << a[i][j] << endl;
    }
  }

  return 0;
}
