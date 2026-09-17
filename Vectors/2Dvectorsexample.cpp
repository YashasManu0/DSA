#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

    // ============================================================
    // BASIC 2D VECTOR
    // ============================================================

    vector<vector<int>> matrix = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    cout << "Original Matrix:\n";

    // Print matrix
    for(int i = 0; i < matrix.size(); i++) {

        for(int j = 0; j < matrix[i].size(); j++) {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 1. ACCESS AN ELEMENT
    // ============================================================

    cout << "\n1. Access element:\n";

    cout << matrix[1][2] << endl;

    // matrix[1][2]
    // row = 1
    // column = 2
    // value = 60


    // ============================================================
    // 2. SUM OF ALL ELEMENTS
    // ============================================================

    int sum = 0;

    for(int i = 0; i < matrix.size(); i++) {

        for(int j = 0; j < matrix[i].size(); j++) {

            sum += matrix[i][j];
        }
    }

    cout << "\n2. Sum = " << sum << endl;


    // ============================================================
    // 3. FIND MAXIMUM ELEMENT
    // ============================================================

    int maximum = INT_MIN;

    for(int i = 0; i < matrix.size(); i++) {

        for(int j = 0; j < matrix[i].size(); j++) {

            maximum = max(maximum, matrix[i][j]);
        }
    }

    cout << "\n3. Maximum = " << maximum << endl;


    // ============================================================
    // 4. FIND MINIMUM ELEMENT
    // ============================================================

    int minimum = INT_MAX;

    for(int i = 0; i < matrix.size(); i++) {

        for(int j = 0; j < matrix[i].size(); j++) {

            minimum = min(minimum, matrix[i][j]);
        }
    }

    cout << "\n4. Minimum = " << minimum << endl;


    // ============================================================
    // 5. SEARCH FOR AN ELEMENT
    // ============================================================

    int target = 50;

    bool found = false;

    for(int i = 0; i < matrix.size(); i++) {

        for(int j = 0; j < matrix[i].size(); j++) {

            if(matrix[i][j] == target) {

                cout << "\n5. " << target
                     << " found at row " << i
                     << ", column " << j << endl;

                found = true;
            }
        }
    }

    if(!found) {
        cout << "\n5. Element not found\n";
    }


    // ============================================================
    // 6. COUNT EVEN AND ODD NUMBERS
    // ============================================================

    int even = 0;
    int odd = 0;

    for(auto row : matrix) {

        for(auto x : row) {

            if(x % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    cout << "\n6. Even = " << even << endl;
    cout << "   Odd  = " << odd << endl;


    // ============================================================
    // 7. SUM OF EACH ROW
    // ============================================================

    cout << "\n7. Row sums:\n";

    for(int i = 0; i < matrix.size(); i++) {

        int rowSum = 0;

        for(int j = 0; j < matrix[i].size(); j++) {

            rowSum += matrix[i][j];
        }

        cout << "Row " << i << " = " << rowSum << endl;
    }


    // ============================================================
    // 8. SUM OF EACH COLUMN
    // ============================================================

    cout << "\n8. Column sums:\n";

    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int j = 0; j < cols; j++) {

        int columnSum = 0;

        for(int i = 0; i < rows; i++) {

            columnSum += matrix[i][j];
        }

        cout << "Column " << j
             << " = " << columnSum << endl;
    }


    // ============================================================
    // 9. MAIN DIAGONAL
    // ============================================================

    /*
            10 20 30
            40 50 60
            70 80 90

            Main diagonal:

            10
               50
                  90

            Condition:
            i == j
    */

    cout << "\n9. Main diagonal: ";

    for(int i = 0; i < rows; i++) {

        cout << matrix[i][i] << " ";
    }

    cout << endl;


    // ============================================================
    // 10. SECONDARY DIAGONAL
    // ============================================================

    /*
            10 20 30
            40 50 60
            70 80 90

                  30
               50
            70

            Condition:
            i + j == n - 1
    */

    cout << "\n10. Secondary diagonal: ";

    for(int i = 0; i < rows; i++) {

        cout << matrix[i][cols - 1 - i] << " ";
    }

    cout << endl;


    // ============================================================
    // 11. TRANSPOSE
    // ============================================================

    /*
        Original:

        1 2 3
        4 5 6

        Transpose:

        1 4
        2 5
        3 6
    */

    vector<vector<int>> a = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> transpose(
        a[0].size(),
        vector<int>(a.size())
    );

    for(int i = 0; i < a.size(); i++) {

        for(int j = 0; j < a[i].size(); j++) {

            transpose[j][i] = a[i][j];
        }
    }

    cout << "\n11. Transpose:\n";

    for(auto row : transpose) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 12. REVERSE EACH ROW
    // ============================================================

    vector<vector<int>> b = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(auto& row : b) {

        reverse(row.begin(), row.end());
    }

    cout << "\n12. Reverse each row:\n";

    for(auto row : b) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 13. SEARCH USING NESTED LOOP
    // ============================================================

    vector<vector<int>> searchMatrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    target = 7;

    cout << "\n13. Searching for " << target << ":\n";

    for(int i = 0; i < searchMatrix.size(); i++) {

        for(int j = 0; j < searchMatrix[i].size(); j++) {

            if(searchMatrix[i][j] == target) {

                cout << "Found at ["
                     << i << "][" << j << "]\n";
            }
        }
    }


    // ============================================================
    // 14. MODIFY ALL ELEMENTS
    // ============================================================

    vector<vector<int>> c = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for(auto& row : c) {

        for(auto& x : row) {

            x *= 2;
        }
    }

    cout << "\n14. After multiplying by 2:\n";

    for(auto row : c) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 15. FIND LARGEST ELEMENT IN EACH ROW
    // ============================================================

    vector<vector<int>> d = {
        {10, 25, 15},
        {40, 12, 60},
        {7, 80, 30}
    };

    cout << "\n15. Maximum of each row:\n";

    for(int i = 0; i < d.size(); i++) {

        int maxi = INT_MIN;

        for(int j = 0; j < d[i].size(); j++) {

            maxi = max(maxi, d[i][j]);
        }

        cout << "Row " << i
             << " max = " << maxi << endl;
    }


    // ============================================================
    // 16. LARGEST ROW SUM
    // ============================================================

    int largestRowSum = INT_MIN;
    int largestRowIndex = -1;

    for(int i = 0; i < d.size(); i++) {

        int rowSum = 0;

        for(int j = 0; j < d[i].size(); j++) {

            rowSum += d[i][j];
        }

        if(rowSum > largestRowSum) {

            largestRowSum = rowSum;
            largestRowIndex = i;
        }
    }

    cout << "\n16. Largest row sum = "
         << largestRowSum << endl;

    cout << "    Row = "
         << largestRowIndex << endl;


    // ============================================================
    // 17. SPIRAL TRAVERSAL
    // ============================================================

    /*
        Matrix:

        1  2  3
        4  5  6
        7  8  9

        Spiral:

        1 2 3 6 9 8 7 4 5
    */

    vector<vector<int>> spiral = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int top = 0;
    int bottom = spiral.size() - 1;
    int left = 0;
    int right = spiral[0].size() - 1;

    cout << "\n17. Spiral traversal: ";

    while(top <= bottom && left <= right) {

        // Left → Right
        for(int j = left; j <= right; j++) {

            cout << spiral[top][j] << " ";
        }

        top++;


        // Top → Bottom
        for(int i = top; i <= bottom; i++) {

            cout << spiral[i][right] << " ";
        }

        right--;


        // Right → Left
        if(top <= bottom) {

            for(int j = right; j >= left; j--) {

                cout << spiral[bottom][j] << " ";
            }

            bottom--;
        }


        // Bottom → Top
        if(left <= right) {

            for(int i = bottom; i >= top; i--) {

                cout << spiral[i][left] << " ";
            }

            left++;
        }
    }

    cout << endl;


    // ============================================================
    // 18. DIAGONAL SUM
    // ============================================================

    vector<vector<int>> e = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int diagonalSum = 0;

    for(int i = 0; i < e.size(); i++) {

        diagonalSum += e[i][i];

        diagonalSum += e[i][e.size() - 1 - i];
    }

    // Middle element 5 was counted twice.
    diagonalSum -= e[e.size() / 2][e.size() / 2];

    cout << "\n18. Diagonal sum = "
         << diagonalSum << endl;


    // ============================================================
    // 19. UPPER TRIANGLE
    // ============================================================

    vector<vector<int>> f = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "\n19. Upper triangle:\n";

    for(int i = 0; i < f.size(); i++) {

        for(int j = 0; j < f[i].size(); j++) {

            if(i <= j) {

                cout << f[i][j] << " ";
            }
            else {

                cout << "0 ";
            }
        }

        cout << endl;
    }


    // ============================================================
    // 20. LOWER TRIANGLE
    // ============================================================

    cout << "\n20. Lower triangle:\n";

    for(int i = 0; i < f.size(); i++) {

        for(int j = 0; j < f[i].size(); j++) {

            if(i >= j) {

                cout << f[i][j] << " ";
            }
            else {

                cout << "0 ";
            }
        }

        cout << endl;
    }


    // ============================================================
    // 21. 90 DEGREE CLOCKWISE ROTATION
    // ============================================================

    /*
        Original:

        1 2 3
        4 5 6
        7 8 9

        After 90° clockwise:

        7 4 1
        8 5 2
        9 6 3

        Step 1:
        Transpose

        Step 2:
        Reverse every row
    */

    vector<vector<int>> rotate = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Transpose
    for(int i = 0; i < rotate.size(); i++) {

        for(int j = i + 1;
            j < rotate[i].size();
            j++) {

            swap(rotate[i][j],
                 rotate[j][i]);
        }
    }

    // Reverse every row
    for(auto& row : rotate) {

        reverse(row.begin(), row.end());
    }

    cout << "\n21. Rotated 90 degrees clockwise:\n";

    for(auto row : rotate) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 22. 2D VECTOR ITERATOR
    // ============================================================

    vector<vector<int>> g = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    cout << "\n22. Using iterators:\n";

    for(auto it = g.begin();
        it != g.end();
        it++) {

        // 'it' points to a vector<int>

        for(auto it2 = it->begin();
            it2 != it->end();
            it2++) {

            // 'it2' points to an int

            cout << *it2 << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 23. JAGGED 2D VECTOR
    // ============================================================

    vector<vector<int>> jagged = {
        {10, 20, 30},
        {40, 50},
        {60, 70, 80, 90}
    };

    cout << "\n23. Jagged vector:\n";

    for(auto row : jagged) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 24. ADD NEW ROW
    // ============================================================

    jagged.push_back({100, 200, 300});

    cout << "\n24. After adding new row:\n";

    for(auto row : jagged) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ============================================================
    // 25. ADD ELEMENT TO ONE ROW
    // ============================================================

    jagged[1].push_back(999);

    cout << "\n25. After adding 999 to row 1:\n";

    for(auto row : jagged) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ============================================================
    // END
    // ============================================================

    return 0;
}