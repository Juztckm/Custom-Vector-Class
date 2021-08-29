/*OSHN*/
#include <bits/stdc++.h>
#include "Vector.h"
using namespace std;

int main()
{
    Vector v(10,9);
    
    cout << v << '\n';

    Vector z{1,2,3,4,5,6,7};

    cout << z << '\n';

    for (int i = 0; i < 20; i++)
    {
        z.push_back(i + 1);
    }

    Vector a = z;
    cout << a << '\n';
    cout << a.front() << ' ' << a.back() << '\n';

    return 0;
}
