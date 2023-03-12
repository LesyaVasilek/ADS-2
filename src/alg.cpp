double pown(double value, uint16_t n) {
  double res = 1.0;
  for (int i = 0; i < n; i++) {
    res *= value;
  }
  return res;
}
uint64_t fact(uint16_t n) {
  uint64_t res = 1;
  for (int i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}
double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}
double expn(double x, uint16_t count) {
  double res = 0.0;
  for (uint16_t i = 0; i <= count; i++) {
    res += calcItem(x, i);
  }
return res;
}
double sinn(double x, uint16_t count) {
  double sign = 1.0;
  double res = 0.0;
  for (uint16_t i = 0; i < count; i++) {
    res += calcItem(x, 2 * i + 1) * sign;
    sign *= -1.0;
  }
  return res;
}
double cosn(double x, uint16_t count) {
  double sign = 1.0;
  double res = 0.0;
  for (uint16_t i = 0; i < count; i++) {
   res += calcItem(x, 2 * i) * sign;
    sign *= -1.0;
  }
  return res;
}
