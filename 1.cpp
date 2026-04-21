#include <iostream>
using namespace std;
class circle
{
    float radius;

public:
    void in()
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }
    void area()
    {
        cout << "Area of the circle is: " << 3.14 * radius * radius << endl;
    }
};
int main()
{
    circle c;
    c.in();
    c.area();
    return 0;
}