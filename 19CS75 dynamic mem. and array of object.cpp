#include <iostream>
using namespace std;
class Random
{
public:
Random() {
cout << "Constructor" << endl;
}
~Random() {
cout << "Destructor" << endl;
}
};
int main()
{
Random* a = new Random[5];
delete [] a; // Delete array
return 0;
}
