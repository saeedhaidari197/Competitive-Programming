#include<bits/stdc++.h>
using namespace std;

main()
{
    int m,d,n;
    cin >> m >> d;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if (d == 6 || d == 7) n = 6;
        else n = 5;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11){
        if (d == 7) n = 6;
        else n = 5;
    }
    else{
        if (d == 1) n = 4;
		else n = 5;
    }

    cout << n << endl;

    return 0;
}