#include <iostream>
using namespace std;

int main()
{
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i <= 50; i++) {
        if(i % 3 == 0 && i % 7 != 0)
        count1++;
    }
    
    for (int i = 50; i <= 100; i++) {
        if(i % 3 == 0 && i % 7 != 0)
        count2++;
    }
    
    for (int i = 100; i <= 150; i++) {
        if(i % 3 == 0 && i % 7 != 0)
        count3++;
    }
    
    cout << "od 1 do 50 jest " << count1 << " liczb" << endl;
    cout << "od 50 do 100 jest " << count2 << " liczb"<< endl;
    cout << "od 100 do 150 jest " << count3 << " liczb"<< endl;

    return 0;
}
