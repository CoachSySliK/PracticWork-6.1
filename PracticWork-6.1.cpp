#include <iostream>

using namespace std;

int main()
{
    int hour = 0;
    
    hour:
    cout << "12-ти часовой формат времени\n";
    cout << "Который час? ";
    cin >> hour;      
     
    if (hour < 1 || hour > 12) {
        cout << "Так не бывает!\n";
        goto hour;
    }
    
    
    int i = 0;
    while (i < hour) {
        cout << "Ку-ку!\n";
        i++;
    }

    return 0;
}
