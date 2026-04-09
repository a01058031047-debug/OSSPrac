#include <stdio.h>

int main() {
    char name[50];
    char studentID[20];
    char major[50];

    printf("이름을 입력하세요: ");
    scanf("%s", name);

    printf("학번을 입력하세요: ");
    scanf("%s", studentID);

    printf("학과를 입력하세요: ");
    scanf("%s", major);

    printf("\n<출력>\n");
    printf("이름: %s\n", name);
    printf("학번: %s\n", studentID);
    printf("학과: %s\n", major);

    return 0;
}