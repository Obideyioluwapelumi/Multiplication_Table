
// Multiplication table

#include <iostream>
using namespace std;

int main()
{
    int n;
    
// Input number of choice
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 12; ++i) 
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}






// Numbering the results
#include <iostream>
using namespace std;

int main()
{
    int n;
    int m = 1;
    
// Input number of choice
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 12; ++i) 
    {
        cout << m++ << ". " << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}


