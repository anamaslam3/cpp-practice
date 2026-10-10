 //Q. Build a small bill calculator using item prices, quantities, tax and discount.

#include <iostream>
using namespace std;

int main()
{
    float itemPrice = 100;
    int quantity = 3;
    float tax = 10;
    float discount = 5;

    float subtotal = itemPrice * quantity;
    float taxAmount = subtotal * tax / 100;
    float discountAmount = subtotal * discount / 100;
    float finalBill = subtotal + taxAmount - discountAmount;

    cout << "Item Price: " << itemPrice << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "Discount Amount: " << discountAmount << endl;
    cout << "Final Bill: " << finalBill << endl;

    return 0;
}
