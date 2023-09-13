int add(int x, int y) {
  return x + y;
}

double add(double x, double y) {
  return x + y;
}

double add(int x, double y) {
  return x + y;
}

double add(double x, int y) {
  return x + y;
}

int main() {
  add(1, 2);
  add(1.3, 4.3);
  add(1, 2.3);
  add(1.2, 1);
  return 0;
}
