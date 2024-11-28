#include <stdio.h>

long factorial(int n)
{
    printf("factorial(%d)\n", n);

    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main(void)
{
    int n = 0; // ���� �̸��� x���� n���� ����
    long f;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n); // ū����ǥ�� �߸��� ��� ���� �� ���� �̸� ����
    printf("%d!�� %ld�Դϴ�.\n", n, factorial(n)); // ���� ������ %d�� %ld ����
    return 0;
}
