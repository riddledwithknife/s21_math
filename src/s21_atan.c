#include "s21_math.h"

long double s21_atan(double x) {
  long double atan;
  if (S21_IS_NAN(x)) {
    atan = S21_NAN;
  } else if (x == 1.0 / 0.0) {
    atan = 1;
  } else if (x == -1.0 / 0.0) {
    atan = -1;
  } else {
    atan = s21_asin((x) / (s21_sqrt(1 + x * x)));
  }
  return atan;
}