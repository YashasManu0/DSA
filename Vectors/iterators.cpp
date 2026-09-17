#include <iostream>
#include <vector>
#include <iterator>     // for next(), prev(), distance()
#include <algorithm>    // for sort(), find()
using namespace std;

int main() {

    // ============================================================
    // 1. CREATE A VECTOR
    // ============================================================

    vector<int> v = {10, 20, 30, 40, 50};

    /*
        Vector:

        Index:    0    1    2    3    4
                 ↓    ↓    ↓    ↓    ↓
        v =     [10] [20] [30] [40] [50]

        begin() -> points to 10
        end()   -> points AFTER 50
    */


    // ============================================================
    // 2. DECLARE AN ITERATOR
    // ============================================================

    vector<int>::iterator it;

    /*
        'it' is an iterator for vector<int>.

        Think of iterator as a pointer-like object
        that moves through the vector.
    */


    // ============================================================
    // 3. BEGIN() AND END()
    // ============================================================

    it = v.begin();

    // it points to the first element
    cout << "First element: " << *it << endl;

    // *it means:
    // "Give me the value where it is pointing"

    /*
        it
        ↓
       [10] [20] [30] [40] [50]
    */


    // ============================================================
    // 4. BASIC ITERATOR LOOP
    // ============================================================

    cout << "\nAll elements: ";

    for(it = v.begin(); it != v.end(); it++) {

        cout << *it << " ";

        /*
            First iteration:
                it -> 10
                *it -> 10

            Second:
                it -> 20
                *it -> 20

            Third:
                it -> 30
                *it -> 30

            ...

            it++ moves iterator to next element.
        */
    }

    cout << endl;


    // ============================================================
    // 5. WHY NOT *v.end() ?
    // ============================================================

    /*
        IMPORTANT:

        v.end() does NOT point to the last element.

        It points one position AFTER the last element.

        v:
        [10] [20] [30] [40] [50] [END]
                              ↑       ↑
                            last     end()

        Therefore:

        *v.end();       ❌ WRONG

        *(v.end() - 1)  ✅ 50
    */

    cout << "\nLast element: " << *(v.end() - 1) << endl;


    // ============================================================
    // 6. MOVE ITERATOR MANUALLY
    // ============================================================

    it = v.begin();

    cout << "\nCurrent: " << *it << endl;   // 10

    it++;

    cout << "After it++: " << *it << endl;  // 20

    it++;

    cout << "After it++: " << *it << endl;  // 30

    it--;

    cout << "After it--: " << *it << endl;  // 20


    // ============================================================
    // 7. ITERATOR + NUMBER
    // ============================================================

    /*
        vector iterators are random-access iterators.

        So we can do:

        it + 2
        it - 2
        it += 2
        it -= 2
    */

    it = v.begin();

    cout << "\nBegin: " << *it << endl;          // 10

    cout << "it + 2: " << *(it + 2) << endl;     // 30

    cout << "it + 4: " << *(it + 4) << endl;     // 50


    // ============================================================
    // 8. ITERATOR COMPARISON
    // ============================================================

    /*
        We can compare iterators:

        it1 < it2
        it1 > it2
        it1 == it2
        it1 != it2
    */

    auto it1 = v.begin();
    auto it2 = v.begin() + 3;

    if(it1 < it2) {
        cout << "\nit1 comes before it2" << endl;
    }


    // ============================================================
    // 9. DIFFERENCE BETWEEN TWO ITERATORS
    // ============================================================

    /*
        it2 - it1 tells us how many positions
        are between them.
    */

    cout << "Distance: " << it2 - it1 << endl;

    // Output:
    // Distance: 3


    // We can also use distance():

    cout << "Distance using distance(): "
         << distance(it1, it2) << endl;


    // ============================================================
    // 10. std::next()
    // ============================================================

    /*
        next(it, n)

        Returns an iterator n positions ahead.

        IMPORTANT:
        It does NOT change 'it'.
    */

    it = v.begin();

    auto temp = next(it, 2);

    cout << "\nUsing next(): " << *temp << endl;

    // 10 -> 20 -> 30
    // temp points to 30

    cout << "Original iterator: " << *it << endl;

    // Still 10 because next() didn't change it.


    // ============================================================
    // 11. std::prev()
    // ============================================================

    /*
        prev(it, n)

        Returns an iterator n positions backward.
    */

    it = v.end();

    auto last = prev(it);

    cout << "\nLast using prev(): " << *last << endl;

    // v.end() -> after 50
    // prev(v.end()) -> 50


    // ============================================================
    // 12. MODIFY VECTOR USING ITERATOR
    // ============================================================

    /*
        Because 'it' is a normal iterator,
        we can MODIFY the vector through it.
    */

    for(it = v.begin(); it != v.end(); it++) {

        *it = *it + 5;

    }

    cout << "\nAfter adding 5: ";

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    // Vector is now:
    // 15 25 35 45 55


    // ============================================================
    // 13. AUTO WITH ITERATORS
    // ============================================================

    /*
        Instead of:

        vector<int>::iterator it;

        we can write:

        auto it = v.begin();

        C++ automatically understands the iterator type.
    */

    cout << "\n\nUsing auto: ";

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }


    // ============================================================
    // 14. REVERSE ITERATOR
    // ============================================================

    /*
        rbegin() -> starts from LAST element
        rend()   -> position BEFORE first element

        Normal:

        begin() -----------------> end()
        10   20   30   40   50

        Reverse:

        rbegin() ----------------> rend()
        50   40   30   20   10
    */

    cout << "\n\nReverse: ";

    for(auto rit = v.rbegin(); rit != v.rend(); rit++) {

        cout << *rit << " ";
    }

    // Output:
    // 55 45 35 25 15


    // ============================================================
    // 15. const_iterator
    // ============================================================

    /*
        const_iterator means:

        You can READ the value
        but you CANNOT MODIFY it.
    */

    cout << "\n\nUsing const_iterator: ";

    vector<int>::const_iterator cit;

    for(cit = v.cbegin(); cit != v.cend(); cit++) {

        cout << *cit << " ";

        // *cit = 100;    ❌ ERROR
    }


    // ============================================================
    // 16. cbegin() AND cend()
    // ============================================================

    /*
        cbegin() -> const iterator to first element
        cend()   -> const iterator after last element

        Useful when you only want to READ data.
    */


    // ============================================================
    // 17. VECTOR OF PAIRS + ITERATOR
    // ============================================================

    vector<pair<int,int>> vp = {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    /*
        vp:

        index       pair
          0        {10,20}
          1        {30,40}
          2        {50,60}
    */

    cout << "\n\nVector of pairs:\n";

    for(auto it = vp.begin(); it != vp.end(); it++) {

        cout << it->first << " "
             << it->second << endl;

        /*
            it->first

            is equivalent to:

            (*it).first

            Similarly:

            it->second

            is equivalent to:

            (*it).second
        */
    }


    // ============================================================
    // 18. STRUCTURED BINDING + ITERATOR
    // ============================================================

    /*
        Modern C++ allows:

        auto [x, y]

        to separate a pair into two variables.
    */

    cout << "\nStructured binding:\n";

    for(auto it = vp.begin(); it != vp.end(); it++) {

        auto [x, y] = *it;

        cout << x << " " << y << endl;
    }


    // ============================================================
    // 19. FIND USING ITERATOR
    // ============================================================

    /*
        find() returns an iterator.

        If element is found:
            iterator points to that element.

        If not found:
            iterator == v.end()
    */

    auto found = find(v.begin(), v.end(), 35);

    if(found != v.end()) {

        cout << "\nFound: " << *found << endl;

    }
    else {

        cout << "\nNot found" << endl;
    }


    // ============================================================
    // 20. FIND POSITION / INDEX
    // ============================================================

    /*
        Iterator doesn't directly give an index.

        But:

        found - v.begin()

        gives the index.
    */

    if(found != v.end()) {

        cout << "Index: "
             << found - v.begin()
             << endl;
    }


    // ============================================================
    // 21. SORT USING ITERATORS
    // ============================================================

    /*
        sort() works using iterator ranges.

        sort(begin, end)

        means:

        sort everything from begin() to end().
    */

    vector<int> numbers = {50, 10, 40, 20, 30};

    sort(numbers.begin(), numbers.end());

    cout << "\nSorted vector: ";

    for(auto it = numbers.begin();
        it != numbers.end();
        it++) {

        cout << *it << " ";
    }


    // ============================================================
    // 22. SORT PART OF A VECTOR
    // ============================================================

    vector<int> a = {50, 40, 30, 20, 10};

    /*
        a.begin() + 1 -> 40
        a.begin() + 4 -> 10

        sort(begin()+1, begin()+4)

        sorts:

        40 30 20

        It does NOT include begin()+4.
    */

    sort(a.begin() + 1, a.begin() + 4);

    cout << "\nPartial sort: ";

    for(auto it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }


    // ============================================================
    // 23. INSERT USING ITERATOR
    // ============================================================

    vector<int> b = {10, 20, 40, 50};

    /*
        Insert 30 BEFORE the element pointed to by:

        b.begin() + 2

        Current:

        [10] [20] [40] [50]
                   ↑
                 position 2

        Insert 30 there.
    */

    b.insert(b.begin() + 2, 30);

    cout << "\nAfter insert: ";

    for(auto it = b.begin(); it != b.end(); it++) {
        cout << *it << " ";
    }

    // 10 20 30 40 50


    // ============================================================
    // 24. ERASE USING ITERATOR
    // ============================================================

    /*
        erase(iterator)

        removes the element at that iterator.
    */

    auto eraseIt = b.begin() + 2;

    b.erase(eraseIt);

    cout << "\nAfter erase: ";

    for(auto it = b.begin(); it != b.end(); it++) {
        cout << *it << " ";
    }

    // 10 20 40 50


    // ============================================================
    // 25. ERASE A RANGE
    // ============================================================

    vector<int> c = {10, 20, 30, 40, 50, 60};

    /*
        erase(first, last)

        Removes [first, last)

        IMPORTANT:
        'last' is NOT removed.

        erase(c.begin()+1, c.begin()+4)

        removes:

        20, 30, 40

        but keeps 50.
    */

    c.erase(c.begin() + 1, c.begin() + 4);

    cout << "\nAfter range erase: ";

    for(auto it = c.begin(); it != c.end(); it++) {
        cout << *it << " ";
    }


    // ============================================================
    // 26. IMPORTANT: ITERATOR INVALIDATION
    // ============================================================

    /*
        VERY IMPORTANT for DSA:

        vector can reallocate memory when it grows.

        Example:

        vector<int> v = {10,20,30};

        auto it = v.begin();

        v.push_back(40);

        The vector MAY move all elements to a new memory
        location.

        Therefore the OLD 'it' may become INVALID.

        So don't blindly continue using an iterator after
        operations that may reallocate the vector.
    */


    // ============================================================
    // 27. COMPLETE ITERATOR MENTAL MODEL
    // ============================================================

    /*
    
        vector<int> v = {10,20,30,40,50};

                    begin()
                       ↓
        v = [10] [20] [30] [40] [50] [END]
              ↑
              it

        *it
         ↓
         10


        it++
         ↓

        v = [10] [20] [30] [40] [50] [END]
                    ↑
                    it

        *it
         ↓
         20


        it + 2
         ↓
        points to 30


        v.end()
         ↓
        [END]

        *(v.end() - 1)
         ↓
         50
    */


    return 0;
}