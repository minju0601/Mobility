int add(int a, int b) { 
    return a + b;
}


int main() {
    int a, b, result;

    // 사용자 입력
    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &a);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &b);

    // 곱셈
    result = a * b;

    // 결과 출력
    printf("%d 곱하기 %d는 %d입니다.\n", a, b, result);

    return 0;
}

//Jira Commit Test message