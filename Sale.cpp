// LAB :-4
//25). Demonstrate a class Sale that calculate the sale on an overall items, where sale is 6% on overall items

#include <iostream>
using namespace std;

class Sale {
private:
    float saleRate;
    float totalAmount;
    float saleAmount;

public:
    Sale(float rate) {
        saleRate = rate;
        totalAmount = 0;
        saleAmount = 0;
    }

    void calculateSale(int numItems) {
        float price;
        totalAmount = 0;

        cout << "Enter price of each item:\n";
        for (int i = 1; i <= numItems; ++i) {
            cout << "Item " << i << ": ";
            cin >> price;
            totalAmount += price;
        }

        saleAmount = totalAmount * (1 - saleRate / 100);
    }

    float getTotal() {
        return saleAmount;
    }

    void displaySummary() {
        cout << "\n--- Sale Summary ---" << endl;
        cout << "Total before sale: " << totalAmount << endl;
        cout << "Discount (" << saleRate << "%): " << totalAmount - saleAmount << endl;
        cout << "Total after sale: " << saleAmount << endl;
    }
};

int main() {
    int numItems;
    cout << "Enter number of items: ";
    cin >> numItems;

    Sale s(6);
    s.calculateSale(numItems);
    s.displaySummary();

    cout << "\nFinal Total Amount After 6% Sale: " << s.getTotal() << endl;

    return 0;
}

