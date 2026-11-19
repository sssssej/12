#include <stdio.h>
#include <string.h>

struct student {
    int id;          // 학번
    char name[20];   // 이름
    double grade;    // 학점
};

int main(void) {
    // 구조체 변수 선언 및 초기화
    struct student s = {111111, "hong", 3.5};

    // 멤버 참조를 이용하여 값 변경
    s.id = 123456;
    strcpy(s.name, "uyeop");
    s.grade = 4.2;

    // 각 멤버 출력
    printf("ID : %d\n", s.id);
    printf("name : %s\n", s.name);
    printf("grade : %f\n", s.grade);

    return 0;
}
