#include <iostream>
#include <cmath>

using namespace std;

void ddaDrawLine(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;

    float x = x0;
    float y = y0;

    cout << "\n--- DDA Line Coordinates ---\n";
    cout << "X \t Y\n";
    cout << "----------------------------\n";
    
    for (int i = 0; i <= steps; i++) {
        cout << round(x) << " \t " << round(y) << "\n";
        x += xInc;
        y += yInc;
    }
}

int main() {
    int x0 = 2, y0 = 2, x1 = 8, y1 = 6;
    cout << "Running DDA Algorithm for points (2,2) to (8,6):\n";
    ddaDrawLine(x0, y0, x1, y1);
    return 0;
}