#include <iostream>
using std::cout;

const int n = 6;
int A[n] = {2, 3, 1, 1, 6, 3};

void sort(int i) {
  if (i < n) {
    int k = i;
    for (int j = i + 1; j < n; ++j) {
      if (A[j] < A[k]) {
	k = j;
      }
    }
    if (k != i) {
      int temp = A[k];
      A[k] = A[i];
      A[i] = temp;      
    }
    sort(i + 1);
  }
}

int main(int argc, char *argv[])
{
  sort(0);
  for (int i = 0; i < n; ++i) {
    cout << A[i] << " ";
  }
  cout << std::endl;
  return 0;
}
