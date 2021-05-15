#include "matrix.hpp"

 Matrix::Matrix(nsize N) noexcept {
    srand(time(NULL));
    elements.assign(N, std::vector<intize>(N));
    for (nsize i = 0; i < N; i++) {
      for (nsize j = 0; j < N; j++) {
        elements[i][j] = rand() % N * 2 - N;
      }
    }
  }

 intize Matrix::CountNotEmptyRows() const {
    intize result = 0;
    for (nsize i = 0; i < elements.size(); i++) {
      auto number = std::find(elements[i].begin(), elements[i].end(), 0);
      if (number == elements[i].end())
        result++;
    }
    return result;
  }

  void Matrix::NotAloneMaxElement(bool showsorted = 0,
                          std::ostream &out = std::cout) noexcept {
    //Сжатие матрицы в вектор
    auto size = elements.size() * elements.size();
    std::vector<intize> all_elements(size);
    for (nsize i = 0; i < elements.size(); i++) {
      for (nsize j = 0; j < elements.size(); j++) {
        all_elements[i * elements.size() + j] = elements[i][j];
      }
    }
    //Сортировка
    std::sort(all_elements.begin(), all_elements.end());
    if (showsorted) {
      for ( const auto &a : all_elements)
        std::cout << a << ' ';
      std::cout << '\n';
    }
    //Нахождение искомого
    for (nsize i = size - 1; i > 1; i--) {
      if (all_elements[i] == all_elements[i - 1]) {
        out << "Not alone biggest number is: " << all_elements[i] << '\n';
        return;
      }
    }
    out << "No same numbers\n";
  }

  std::ostream &operator<<(std::ostream &out, const Matrix &matrix) {
    for (int row = 0; row < matrix.elements.size(); row++) {
      for (int column = 0; column < matrix.elements.size(); column++) {
        if (column > 0) {
          out << '\t';
        }
        out << matrix[row][column];
      }
      out << '\n';
    }
    return out;
  }