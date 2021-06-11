void InsertionSort(vector<int>& values) {
  for (size_t i = 1; i < values.size(); ++i) {
    int x = values[i];
    size_t j = i;
    while (j > 0 && values[j - 1] > x) {
      values[j] = values[j - 1];
      --j;
    }
    values[j] = x;
  }
}
