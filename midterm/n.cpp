#include <iostream>

using namespace std;

bool is_symmetric(int* arr, int start, int end) {
  // Базов случай
  if (start >= end) {
    return true;
  }

  // Рекурсивен случай
  return arr[start] == arr[end] && is_symmetric(arr, start + 1, end - 1);
}

int main() {
  // Входни данни
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Намерете индекса на първия ненулев елемент
  int first_nonzero_index = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      first_nonzero_index = i;
      break;
    }
  }

  // Проверете дали масивът е симетричен между първия ненулев елемент и края на масива
  bool is_symmetric = is_symmetric(arr, first_nonzero_index, n - 1);

  // Изход
  if (is_symmetric) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
