#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void) {
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    // 첫 번째 점 입력
    printf("input p1 coordinate (x y) : ");
    scanf("%d %d", &p1.x, &p1.y);

    // 두 번째 점 입력
    printf("input p2 coordinate (x y) : ");
    scanf("%d %d", &p2.x, &p2.y);

    // 두 점의 x, y 좌표 차이 계산
    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    // 두 점 사이의 거리 계산
    dist = sqrt(xdiff * xdiff + ydiff * ydiff);

    // 결과 출력
    printf("distance : %f\n", dist);

    return 0;
}