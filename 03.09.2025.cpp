#include "Date.h"
#include <iomanip>
#include "product.h"
#include "Shop.h"
int main()
{
    Date today;
    Date d1(2025, 1, 2);

    //today.showDate();
    //d1.showDate();
    //cout << "--------------------------------------------\n";
    //today.nextDate();
    //d1.prevDate();
    //today.showDate();
    //d1.showDate();
    //cout << "--------------------------------------------\n";
    //d1.setDay(12);
    //d1.setMonth(57);
    //d1.showDate();
    //cout << "--------------------------------------------\n";
    //d1.showDate();
    //today.showDate();
    //cout << " == " << boolalpha << (d1 == today) << endl;
    //cout << " != " << boolalpha << (d1 != today) << endl;
    //cout << " > " << boolalpha << (d1 > today) << endl;
    //cout << " < " << boolalpha << (d1 < today) << endl;
    //cout << " >= " << boolalpha << (d1 >= today) << endl;
    //cout << " <= " << boolalpha << (d1 <= today) << endl;
    //cout << "--------------------------------------------\n";
    //d1.showDate();
    //d1 += 5;
    //d1.showDate();
    //d1 += 5.f;
    //d1.showDate();
    //d1 += 5l;
    //d1.showDate();
    //cout << "--------------------------------------------\n";
    //Date tmp2 = d1 + 20;
    //d1.showDate();
    //tmp2.showDate();
    //Date t2 = d1++;
    //t2.showDate();
    //d1.showDate();
    //cout << "---------------------------------\n" << endl;
    //Date d3;
    //cin >> d3;
    //cout << "user " << d3 << endl;
    //cout << 5 << " + " << d3 << " = " << 5 + d3 << endl;
    //cout << d3 << " + " << 5 << " = " << d3 + 5 << endl;
    //Product a;
    //cin >> a;
    Product b("Milk", 50.99, Date(2025, 9, 1), 3);
    cout << "----------------------------------------\n" << endl;
    //cout << a << endl << b << endl;
    Shop ATB;
    ATB.addProduct(b);
    ATB.addProduct(Product("Apple", 105, Date() - 30, 60));
    ATB.showInfo();
}