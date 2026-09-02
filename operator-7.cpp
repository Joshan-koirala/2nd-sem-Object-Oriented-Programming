#include <iostream>
using namespace std;

class Matrix {
    int mat[3][3];

public:
    void getData() {
        cout << "Enter of 3x3 matrix:\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }

    Matrix operator + (Matrix m) {
        Matrix temp;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        return temp;
    }

    void display() {
        cout << "Matrix:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat[i][j] << "	";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, sum;

    cout << "Enter first matrix:\n";
    m1.getData();

    cout << "\nEnter second matrix:\n";
    m2.getData();

    sum = m1 + m2;

    cout << "\nSum of matrices:\n";
    sum.display();

    return 0;
}

