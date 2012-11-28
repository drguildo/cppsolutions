#include <iostream>

using std::cout;
using std::endl;
using std::string;

void drawStars(int n) {
    cout << string(n, '*') << endl;
}

void drawSquare(int length) {
    for (int i = 0; i < length; i++) {
        drawStars(length);
    }
}

void drawRectangle(int height, int width) {
    for (int i = 0; i < height; i ++) {
        drawStars(width);
    }
}

void drawTriangle(int length) {
    for (int i = 0; i < length; i ++) {
        drawStars(i);
    }
}

void c2e05() {
    drawSquare(4);

    cout << endl;

    drawRectangle(4, 8);

    cout << endl;

    drawTriangle(6);
}
