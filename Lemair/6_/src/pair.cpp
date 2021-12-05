#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    cout << "(1,10) < (2,3) = "   << (make_pair<int, int>(1, 10) < make_pair<int, int>(2, 3)      ) << endl;
    cout << "(1,10) < (1,20) = "  << (make_pair<int, int>(1, 10) < make_pair<int, int>(1, 20)     ) << endl;
    cout << "(1,10) < (1,5) = "   << (make_pair<int, int>(1, 10) < make_pair<int, int>(1, 5)      ) << endl;
    cout << "(1,10) < (0,8.5) = " << (make_pair<int, double>(1, 10) < make_pair<int, double>(0, 8.5) ) << endl;
    cout << "(0,0) != (0,8) = "   << (make_pair<int, int>(0, 0) != make_pair<int, int>(0, 8)      ) << endl;
    cout << "(0,5) > (0,5) = "    << (make_pair<int, int>(0, 5) > make_pair<int, int>(0, 5)       ) << endl;
    cout << "(\"pomme\",10) < (\"tomate\", 40) = " << (make_pair<string, int>("pomme", 10) < make_pair<string, int>("tomate", 40) )<< endl;
}
// EUuuuuuuuUUuuUUuUUUUUuuUUUUuUuuuUuUuuUh