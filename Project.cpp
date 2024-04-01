#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    string itemName;
    int itemQty;
    double itemPrice;

public:
    InventoryItem(const string& name, int Qty, double price)
        : itemName(name), itemQty(Qty), itemPrice(price) {}

    void addItem(int Qty) {
        itemQty += Qty;
        cout << "Added " << Qty << " items. Total Qty: " << itemQty << endl;
    }

    void removeItem(int Qty) {
        if (itemQty >= Qty) {
            itemQty -= Qty;
            cout << "Removed " << Qty << " items. Total Qty: " << itemQty << endl;
        } else {
            cout << "Insufficient Qty. Removal failed." << endl;
        }
    }
 void updatePrice(double price) {
        itemPrice = price;
        cout << "Price updated. New price: " << itemPrice << endl;
    }

    void displayItem() const {
        cout << "Item: " << itemName << endl;
        cout << "Qty: " << itemQty << endl;
        cout << "Price: " << itemPrice << endl;
    }
};

int main() {
    string name;
    int Qty;
    double price;

    cout << "Enter item name: ";
    getline(cin, name);

    cout << "Enter initial Qty: ";
    cin >> Qty;

    cout << "Enter initial price: ";
    cin >> price;

    
    InventoryItem item(name, Qty, price);

    cout << "Initial inventory item:" << endl;
    item.displayItem();

    int addQty, removeQty;
    double newPrice;

    cout << "Enter Qty to add: ";
    cin >> addQty;
    item.addItem(addQty);

    cout << "Enter Qty to remove: ";
    cin >> removeQty;
    item.removeItem(removeQty);

    cout << "Enter new price: ";
    cin >> newPrice;
    item.updatePrice(newPrice);

    cout << "Final inventory item:" << endl;
    item.displayItem();

    return 0;
}
