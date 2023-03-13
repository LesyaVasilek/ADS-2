#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double q = 1;
  for (uint16_t i = 1; i <= n; i++)
    q *= value;
  return q;
}

uint64_t fact(uint16_t n) {
  uint64_t result = 1;
  for (uint64_t i = 2; i <= n; i++)
    result *= i;
  return result;
}
double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double exp = 0;
  for (uint16_t i = 0; i <= count; i++)
       exp += calcItem(x, i);
  return exp;
}

double sinn(double x, uint16_t count) {
  double sinus = 0;
  for (uint16_t i = 1; i <= count; i++)
      sinus += pown(-1, i - 1) * pown(x, 2 * i - 1) / fact(2 * i - 1);
  return sinus;
}

double cosn(double x, uint16_t count) {
    double cos = 0;
    for (int i = 1; i <= count; i++)
        cos += pown(-1, i - 1) * pown(x, 2 * i - 2) / fact(2 * i - 2);
    return cos;
}
