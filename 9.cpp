#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Movie {
public:
    string name;
    string genre;

    void input() {
        cout << "Enter movie name: ";
        getline(cin, name);
        cout << "Enter movie genre: ";
        getline(cin, genre);
    }

    void save() {
        if (genre == "comedy" || genre == "Comedy") {
            ofstream outFile("Comedy.dat", ios::app);
            outFile << name << "," << genre << endl;
            outFile.close();
        } 
        else if (genre == "action" || genre == "Action") {
            ofstream outFile("Action.dat", ios::app);
            outFile << name << "," << genre << endl;
            outFile.close();
        } 
        else {
            cout << "Genre not recognized. Movie not saved to file." << endl;
        }
    }
};

int main() {
    int n;
    cout <<"Enter number of movies : ";
    cin >> n;
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        Movie m;
        m.input();
        m.save();
    }

    cout << "Movies saved based on genre." << endl;

    return 0;
}

