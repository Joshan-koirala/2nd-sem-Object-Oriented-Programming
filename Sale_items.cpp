//25). Demonstrate a class Sale that calculate the sale on an overall items, where sales is 6% on overall items. You must call a constructor that takes the sale rate as an argument and two member function getTotal which returns total sale. Your program should print the TotalSale in main function.

#include <iostream>
using namespace std;

class Sale {
    private:
        float saleRate;
        float totalAmount;

    public:
        Sale(float rate) {
            saleRate = rate;
            totalAmount = 0;
        }

        void inputItems(int numItems) {
            float price;
            for (int i = 1; i <= numItems; i++) {
                cout << "Enter price of item " << i << ": ";
                cin >> price;
                totalAmount += price;
            }
        }

        float getTotal() {
            return totalAmount + (totalAmount * saleRate);
        }  
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Sale s(0.06);
    s.inputItems(n);

    float totalSale = s.getTotal();
    cout << "\nTotal Sale (including 6%): " << totalSale << endl;

    return 0;
}

