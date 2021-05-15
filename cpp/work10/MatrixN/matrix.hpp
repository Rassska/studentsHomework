#pragma once

#include <algorithm>
#include <ctime>
#include <iostream>
#include <ostream>
#include <random>
#include <utility>
#include <vector>

using intize = int32_t;
using nsize = uint32_t;

class Matrix {
private:
  std::vector<std::vector<intize>> elements;

public:
  Matrix(nsize N) noexcept;
  //Подсчёт строк без 0 элементов
  intize CountNotEmptyRows() const;
  //Нахождение неединственного наибольшего
  void NotAloneMaxElement(bool, std::ostream &) noexcept;

  const std::vector<intize> &operator[](size_t i) const { return elements[i]; }
  std::vector<intize> &operator[](uint64_t i) { return elements[i]; }
  //Оператор вывода
  friend std::ostream &operator<<(std::ostream &out, const Matrix &matrix);
};