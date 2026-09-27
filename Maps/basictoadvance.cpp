#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    // ============================================================
    // 1. CREATE A MAP
    // ============================================================

    // map<key, value>
    //
    // Here:
    // key   = char
    // value = int

    map<char, int> m;


    // ============================================================
    // 2. INSERT ELEMENTS
    // ============================================================

    m['a'] = 10;
    m['b'] = 20;
    m['c'] = 30;

    /*
        Map:

        key     value

         a   ->  10
         b   ->  20
         c   ->  30
    */


    // ============================================================
    // 3. ACCESS VALUE
    // ============================================================

    cout << "Value of a: "
         << m['a'] << endl;

    // Output:
    // 10


    // ============================================================
    // 4. CHANGE VALUE
    // ============================================================

    m['a'] = 100;

    cout << "New value of a: "
         << m['a'] << endl;

    // 100


    // ============================================================
    // 5. ADD NEW KEY
    // ============================================================

    m['d'] = 40;

    /*
        Now:

        a -> 100
        b -> 20
        c -> 30
        d -> 40
    */


    // ============================================================
    // 6. MAP AUTOMATICALLY SORTS KEYS
    // ============================================================

    cout << "\nMap elements:\n";

    for(auto x : m) {

        cout << x.first
             << " -> "
             << x.second
             << endl;
    }

    /*
        Output:

        a -> 100
        b -> 20
        c -> 30
        d -> 40

        Keys are sorted.
    */


    // ============================================================
    // 7. ITERATOR
    // ============================================================

    cout << "\nUsing iterator:\n";

    for(auto it = m.begin();
        it != m.end();
        it++) {

        cout << it->first
             << " -> "
             << it->second
             << endl;
    }

    /*
        it->first
             ↓
           key

        it->second
             ↓
           value
    */


    // ============================================================
    // 8. CHECK WHETHER KEY EXISTS
    // ============================================================

    if(m.find('b') != m.end()) {

        cout << "\nb exists" << endl;
    }


    if(m.find('z') == m.end()) {

        cout << "z does not exist" << endl;
    }

    /*
        find() returns an iterator.

        Found:
            iterator != m.end()

        Not found:
            iterator == m.end()
    */


    // ============================================================
    // 9. count()
    // ============================================================

    if(m.count('a')) {

        cout << "a exists" << endl;
    }

    /*
        For map:

        count(key) = 1 → key exists
        count(key) = 0 → key doesn't exist
    */


    // ============================================================
    // 10. SIZE
    // ============================================================

    cout << "\nMap size: "
         << m.size()
         << endl;


    // ============================================================
    // 11. ERASE
    // ============================================================

    m.erase('d');

    cout << "\nAfter deleting d:\n";

    for(auto x : m) {

        cout << x.first
             << " -> "
             << x.second
             << endl;
    }


    // ============================================================
    // 12. CLEAR
    // ============================================================

    /*
        Uncomment to delete everything.

        m.clear();
    */

    // m.empty() checks whether map is empty.

    if(!m.empty()) {

        cout << "\nMap is not empty" << endl;
    }


    // ============================================================
    // 13. CHARACTER FREQUENCY ⭐
    // ============================================================

    string s = "banana";

    map<char, int> freq;

    for(char c : s) {

        freq[c]++;
    }

    cout << "\nCharacter frequency:\n";

    for(auto x : freq) {

        cout << x.first
             << " -> "
             << x.second
             << endl;
    }

    /*
        banana

        b -> 1
        a -> 3
        n -> 2
    */


    // ============================================================
    // 14. HOW freq[c]++ WORKS
    // ============================================================

    /*
        Initially:

        freq = {}

        First character:
        b

        freq['b']++;

        Since b doesn't exist,
        map creates:

        b -> 0

        Then ++:

        b -> 1


        Next a:

        a -> 1


        Next n:

        n -> 1

        And so on...
    */


    // ============================================================
    // 15. TAKE STRING INPUT
    // ============================================================

    /*
        Example:

        string str;
        cin >> str;

        map<char,int> count;

        for(char c : str) {
            count[c]++;
        }
    */


    // ============================================================
    // 16. FIND MOST FREQUENT CHARACTER
    // ============================================================

    char mostFrequent;
    int maximum = 0;

    for(auto x : freq) {

        if(x.second > maximum) {

            maximum = x.second;
            mostFrequent = x.first;
        }
    }

    cout << "\nMost frequent character: "
         << mostFrequent << endl;

    cout << "Frequency: "
         << maximum << endl;


    // ============================================================
    // 17. FIND FIRST NON-REPEATING CHARACTER
    // ============================================================

    string str = "swiss";

    map<char, int> count;

    // Step 1: frequency
    for(char c : str) {

        count[c]++;
    }

    // Step 2: go through ORIGINAL string
    for(char c : str) {

        if(count[c] == 1) {

            cout << "\nFirst non-repeating character: "
                 << c << endl;

            break;
        }
    }


    // ============================================================
    // 18. FIND DUPLICATE CHARACTERS
    // ============================================================

    string word = "programming";

    map<char, int> duplicate;

    for(char c : word) {

        duplicate[c]++;
    }

    cout << "\nDuplicate characters:\n";

    for(auto x : duplicate) {

        if(x.second > 1) {

            cout << x.first
                 << " appears "
                 << x.second
                 << " times"
                 << endl;
        }
    }


    // ============================================================
    // 19. LOWERCASE + UPPERCASE ARE DIFFERENT
    // ============================================================

    map<char, int> cases;

    cases['a']++;
    cases['A']++;

    cout << "\nLowercase a: "
         << cases['a'] << endl;

    cout << "Uppercase A: "
         << cases['A'] << endl;

    /*
        'a' and 'A' are different keys.

        a -> 1
        A -> 1
    */


    // ============================================================
    // 20. MAP WITH PAIR
    // ============================================================

    /*
        map<char, pair<int,int>>

        key = character
        value = pair
    */

    map<char, pair<int,int>> mp;

    mp['a'] = {10, 20};
    mp['b'] = {30, 40};

    cout << "\nMap with pair:\n";

    for(auto x : mp) {

        cout << x.first
             << " -> "
             << x.second.first
             << " "
             << x.second.second
             << endl;
    }


    // ============================================================
    // 21. MAP CHAR -> CHAR
    // ============================================================

    map<char, char> mapping;

    mapping['a'] = 'b';
    mapping['b'] = 'c';
    mapping['c'] = 'd';

    cout << "\na maps to: "
         << mapping['a']
         << endl;


    // ============================================================
    // 22. MAP CHAR -> STRING
    // ============================================================

    map<char, string> names;

    names['a'] = "Apple";
    names['b'] = "Banana";

    cout << "\n"
         << names['a']
         << endl;


    // ============================================================
    // 23. MAP STRING -> CHAR
    // ============================================================

    map<string, char> number;

    number["one"] = '1';
    number["two"] = '2';

    cout << "\n"
         << number["one"]
         << endl;


    // ============================================================
    // 24. INSERT() METHOD
    // ============================================================

    map<char, int> test;

    test.insert({'x', 100});
    test.insert({'y', 200});

    cout << "\nInserted using insert():\n";

    for(auto x : test) {

        cout << x.first
             << " -> "
             << x.second
             << endl;
    }


    // ============================================================
    // 25. INSERT DOES NOT REPLACE EXISTING KEY
    // ============================================================

    test.insert({'x', 999});

    cout << "\nx is still: "
         << test['x']
         << endl;

    /*
        x was already present.

        insert({'x',999})
        does NOT replace 100.

        x remains:

        x -> 100
    */


    // ============================================================
    // 26. operator[] CAN REPLACE
    // ============================================================

    test['x'] = 999;

    cout << "After [] assignment: "
         << test['x']
         << endl;

    // Now x = 999


    // ============================================================
    // 27. STRUCTURED BINDING
    // ============================================================

    cout << "\nStructured binding:\n";

    for(auto [key, value] : test) {

        cout << key
             << " -> "
             << value
             << endl;
    }


    // ============================================================
    // 28. CONST ITERATOR
    // ============================================================

    cout << "\nConst iterator:\n";

    for(auto it = test.cbegin();
        it != test.cend();
        it++) {

        cout << it->first
             << " -> "
             << it->second
             << endl;
    }

    /*
        cbegin() / cend()

        allow reading.

        You cannot do:

        it->second = 500;   // ERROR
    */


    // ============================================================
    // 29. FREQUENCY OF DIGITS
    // ============================================================

    string digits = "112233445511";

    map<char, int> digitFreq;

    for(char c : digits) {

        digitFreq[c]++;
    }

    cout << "\nDigit frequency:\n";

    for(auto [digit, count] : digitFreq) {

        cout << digit
             << " -> "
             << count
             << endl;
    }


    // ============================================================
    // 30. CHECK IF TWO STRINGS ARE ANAGRAMS
    // ============================================================

    /*
        Anagram:

        "listen"
        "silent"

        Both contain the same characters
        with the same frequencies.
    */

    string s1 = "listen";
    string s2 = "silent";

    map<char, int> f1;
    map<char, int> f2;

    for(char c : s1) {
        f1[c]++;
    }

    for(char c : s2) {
        f2[c]++;
    }

    if(f1 == f2) {

        cout << "\n30. Strings are anagrams\n";
    }
    else {

        cout << "\n30. Strings are NOT anagrams\n";
    }


    // ============================================================
    // 31. CHARACTER FREQUENCY WITH INPUT
    // ============================================================

    /*
        You can make this interactive:

        string input;

        cin >> input;

        map<char,int> frequency;

        for(char c : input) {
            frequency[c]++;
        }

        for(auto [ch, count] : frequency) {
            cout << ch << " -> " << count << endl;
        }

        Example input:

        hello

        Output:

        e -> 1
        h -> 1
        l -> 2
        o -> 1
    */


    return 0;
}