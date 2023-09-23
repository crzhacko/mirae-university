/**
  * first의 규칙을 찾았으니 반복문을 이용할 수 있다.
void gugudan() {
  for (int first = 2; first < 10; first++) {
    for (int second = 1; second < 10; second++) {
      printf("%d X %d = %d\n", first, second, first * second);
    }
  }
}
*/

int main(void) {
  gugudan();
  return 0;
}
