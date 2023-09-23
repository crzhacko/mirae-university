/**
  * 4. 2를 3, 4, 5, 6 ... 으로 교체하면 3단, 4단, ... 9단도
  * 출력할 수 있다.
  */
void gugudan() {
  for (int second = 1; second < 10; second++) {
    printf("2 X %d = %d\n", second, 2 * second);
  }
  for (int second = 1; second < 10; second++) {
    printf("3 X %d = %d\n", second, 3 * second);
  }
  for (int second = 1; second < 10; second++) {
    printf("4 X %d = %d\n", second, 4 * second);
  }
  for (int second = 1; second < 10; second++) {
    printf("5 X %d = %d\n", second, 5 * second);
  }
  for (int second = 1; second < 10; second++) {
    printf("6 X %d = %d\n", second, 6 * second);
  }
  for (int second = 1; second < 10; second++) {
    printf("7 X %d = %d\n", second, 7 * second);
  }
  for (int second = 1; second < 10; second++) {
    printf("8 X %d = %d\n", second, 8 * second);
  }
  for (int second = 1; second < 10; second++) {
    printf("9 X %d = %d\n", second, 9 * second);
  }
}

int main(void) {
  gugudan();
  return 0;
}
