#include <iostream>
#include <vector>

using namespace std;

class Shop
{
    vector<int> itemId;
    vector<int> itemPrice;
    int counter;

public:
    void initCounter(void);
    void getPrice(void);
    void displayPrice(void);
};

void Shop::initCounter(void)
{
    cout << "Enter number of items you have: ";
    cin >> counter;
    // itemId.resize(counter);
    // itemPrice.resize(counter);
}

void Shop::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Enter Id of your item " << i + 1 << ": ";
        cin >> itemId[i];
        cout << "Enter Price of your item " << i + 1 << ": ";
        cin >> itemPrice[i];
    }
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Id of item " << i + 1 << " is " << itemId[i] << endl;
        cout << "Price of item " << i + 1 << " is " << itemPrice[i] << endl;
        cout << endl;
    }
}

int main()
{
    Shop item;
    item.initCounter();
    item.getPrice();
    item.displayPrice();
    return 0;
}