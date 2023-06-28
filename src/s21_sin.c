#include "s21_math.h"

long double s21_sin(double x) {
  while (x > S21_PI || x < -S21_PI) {
    x += x > S21_PI ? -2 * S21_PI : 2 * S21_PI;
  }

  long double rez = x, y = x;

  long double i = 1.;

  while (s21_fabs(rez) > S21_EPS10) {
    rez = -1 * rez * x * x / (2 * i * (2 * i + 1));

    i += 1.;

    y += rez;
  }

  return y;
}
