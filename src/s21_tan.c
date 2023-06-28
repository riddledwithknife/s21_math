#include "s21_math.h"

long double s21_tan(double x) {
  if (S21_IS_INF(x)) {
    x = S21_NAN;
  } else {
    while (x > S21_PI || x < -S21_PI) {
      x += x > S21_PI ? -2 * S21_PI : 2 * S21_PI;
    }
  }
  return s21_sin(x) / s21_cos(x);
}
