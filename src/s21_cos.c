#include "s21_math.h"

long double s21_cos(double x) {
  if (S21_IS_INF(x)) {
    x = S21_NAN;
  } else {
    while (x > S21_PI || x < -S21_PI) {
      x += x > S21_PI ? -2 * S21_PI : 2 * S21_PI;
    }
  }
  return s21_sin((S21_PI / 2.0) - x);
}
