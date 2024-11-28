#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // Each 2x2 icon needs 4 cells
        int cells_needed_for_2x2 = y * 4;
        
        // Total cells needed is cells for 2x2 icons plus the 1x1 icons
        int total_cells_needed = cells_needed_for_2x2 + x;
        
        // Each screen has 5*3 = 15 cells
        int cells_per_screen = 15;
        
        // Calculate the number of screens needed
        int screens_needed = (total_cells_needed + cells_per_screen - 1) / cells_per_screen;
        
        cout << screens_needed << endl;
    }
    return 0;
}
