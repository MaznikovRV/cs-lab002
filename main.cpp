#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout<< "A + B = " << a + b << '\n';
    cout<< "A - B = " << a - b << '\n';
    cout<< "A * B  = " << a * b << endl;
    cout<< "A / B  = " << a / b << endl;
   if (a<b)
     cout<<"max = "<<a;
    if(a>b)
        cout<< "min = "<<b;
    return 0;
}
