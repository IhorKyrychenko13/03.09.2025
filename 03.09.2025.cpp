#include "Date.h"
#include <iomanip>
int main()
{
    Date today;
    Date d1(2025, 1, 2);

    today.showDate();
    d1.showDate();
    cout << "--------------------------------------------\n";
    today.nextDate();
    d1.prevDate();
    today.showDate();
    d1.showDate();
    cout << "--------------------------------------------\n";
    d1.setDay(12);
    d1.setMonth(57);
    d1.showDate();
    cout << "--------------------------------------------\n";
    d1.showDate();
    today.showDate();
    cout << " == " << boolalpha << (d1 == today) << endl;
    cout << " != " << boolalpha << (d1 != today) << endl;
    cout << " > " << boolalpha << (d1 > today) << endl;
    cout << " < " << boolalpha << (d1 < today) << endl;
    cout << " >= " << boolalpha << (d1 >= today) << endl;
    cout << " <= " << boolalpha << (d1 <= today) << endl;
    cout << "--------------------------------------------\n";
    d1.showDate();
    d1 += 5;
    d1.showDate();
    d1 += 5.f;
    d1.showDate();
    d1 += 5l;
    d1.showDate();
    cout << "--------------------------------------------\n";
    Date tmp2 = d1 + 20;
    d1.showDate();
    tmp2.showDate();
}