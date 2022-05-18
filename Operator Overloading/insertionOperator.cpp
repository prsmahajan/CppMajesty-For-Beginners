#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
};

ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img << endl;
    return out;
}
int main()
{
    Complex c(11, 13);
    cout << c;
    operator<<(cout, c);
    return 0;
}