#include <stdio.h>

/**
  * 구구단(multiplication table)
  * 반복문(또는 반복문과 제어문), 연산자, 입출력 함수와 개행문자를 
  * 이용하면 구구단을 코딩할 수 있다.
  * 우선 2단 부터 짜보자
  * 반복문: for, while
  * 제어문: if, switch
  * 연산자: +, -, *, /, %, 삼항연산자, 증감연산자(++, --) 등
  * 입출력: printf(), scanf()
  * 개행문자: \n - 줄바꿈
  */
void gugudan() {
  printf("2 X 1 = %d\n", 2 * 1);
  printf("2 X 2 = %d\n", 2 * 2);
  printf("2 X 3 = %d\n", 2 * 3);
  printf("2 X 4 = %d\n", 2 * 4);
  printf("2 X 5 = %d\n", 2 * 5);
  printf("2 X 6 = %d\n", 2 * 6);
  printf("2 X 7 = %d\n", 2 * 7);
  printf("2 X 8 = %d\n", 2 * 8);
  printf("2 X 9 = %d\n", 2 * 9);
}

/**
  * 난이도 최상급 문제 - 반복문 하나만 가지고 2단 부터 9단까지 출력할 수는 없을까?
  * 우선 
  */
int main(void) {
  gugudan();
  return 0;
}
