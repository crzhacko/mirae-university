/**
  * 3. 사실 index가 그닥 필요하지는 않다.
  */
void gugudan() {
  for (int second = 1; second < 10; second++) {
    printf("2 X %d = %d\n", second, 2 * second);
  }
}

int main(void) {
  gugudan();
  return 0;
}
