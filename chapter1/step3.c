/**
  * 2. 두번째 인수는 index + 1 과 같다는 점을 이용하면 구구단을
  * 출력할 수 있다.
  */
void gugudan() {
  for (int index = 0; index < 9; index++) {
    int second = index + 1;
    printf("2 X %d = %d\n", second, 2 * second);
  }
}

int main(void) {
  gugudan();
  return 0;
}
