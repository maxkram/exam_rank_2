#include <stdio.h>
 
struct Point {
    int x;
    int y;
};
 
int main() {
    struct Point point = {10, 20};
    int x[3] = {300, 400, 500};
 
    point = (*(struct Point*)(x));
 
    printf("a = %d, b = %d", point.x, point.y);
}
