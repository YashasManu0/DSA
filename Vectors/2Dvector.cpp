#include <iostream>
#include <vector>
using namespace std;

int main() {

    // ==================================================
    // CREATE 2D VECTOR
    // ==================================================

    vector<vector<int>> v = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };


    // ==================================================
    // SIZE
    // ==================================================

    cout << "Number of rows: "
         << v.size() << endl;

    cout << "Columns in row 0: "
         << v[0].size() << endl;


    // ==================================================
    // ACCESS ELEMENT
    // ==================================================

    cout << "Element: "
         << v[1][2] << endl;

    // row 1, column 2
    // = 60


    // ==================================================
    // NORMAL LOOP
    // ==================================================

    cout << "\nNormal loop:\n";

    for(int i = 0; i < v.size(); i++) {

        for(int j = 0; j < v[i].size(); j++) {

            cout << v[i][j] << " ";
        }

        cout << endl;
    }


    // ==================================================
    // RANGE-BASED LOOP
    // ==================================================

    cout << "\nRange loop:\n";

    for(auto row : v) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ==================================================
    // ITERATOR
    // ==================================================

    cout << "\nIterator:\n";

    for(auto it = v.begin(); it != v.end(); it++) {

        for(auto it2 = it->begin();
            it2 != it->end();
            it2++) {

            cout << *it2 << " ";
        }

        cout << endl;
    }


    // ==================================================
    // MODIFY USING REFERENCE
    // ==================================================

    for(auto& row : v) {

        for(auto& x : row) {

            x += 1;
        }
    }


    cout << "\nAfter adding 1:\n";

    for(auto row : v) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ==================================================
    // ADD ELEMENT TO ROW
    // ==================================================

    v[0].push_back(100);

    cout << "\nAfter adding 100 to row 0:\n";

    for(auto row : v) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ==================================================
    // ADD NEW ROW
    // ==================================================

    v.push_back({200, 300, 400});

    cout << "\nAfter adding new row:\n";

    for(auto row : v) {

        for(auto x : row) {

            cout << x << " ";
        }

        cout << endl;
    }


    // ==================================================
    // REMOVE LAST ELEMENT FROM ROW
    // ==================================================

    v[0].pop_back();


    // ==================================================
    // REMOVE LAST ROW
    // ==================================================

    v.pop_back();


    return 0;
}