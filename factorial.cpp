#include <stdio.h>

long factorial(int n)
{
    printf("factorial(%d)\n", n);

    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main(void)
{
    int n = 0; // 변수 이름을 x에서 n으로 수정
    long f;

    printf("정수를 입력하시오: ");
    scanf("%d", &n); // 큰따옴표의 잘못된 사용 수정 및 변수 이름 맞춤
    printf("%d!은 %ld입니다.\n", n, factorial(n)); // 서식 지정자 %d와 %ld 수정
    return 0;
}
