#include <stdio.h>
int main(void) {
    int x, y;           // 1. x좌표와 y좌표를 저장할 변수 2개 선언
    scanf("%d", &x);    // 2-1. x좌표(정수)를 입력받아 변수 x에 저장
    scanf("%d", &y);    // 2-2. y좌표(정수)를 입력받아 변수 y에 저장

    if (x > 0 && y > 0) {             // 3-1. x좌표와 y좌표가 모두 양수인 경우
        printf("1");                  // 3-1. 1 출력
    }
    else if ((x < 0) && (y > 0)) {    // 3-2. x좌표가 음수이고, y좌표가 양수인 경우
        printf("2");                  // 3-2. 2 출력
    }
    else if ((x < 0) && (y < 0)) {    // 3-3. x좌표와 y좌표가 모두 음수인 경우
        printf("3");                  // 3-3. 3 출력
    }
    else if ((x > 0) && (y < 0)) {    // 3-4.  x좌표가 양수이고, y좌료가 음수인 경우
        printf("4");                  // 3-4. 4 출력
    }
    
    return 0;
}