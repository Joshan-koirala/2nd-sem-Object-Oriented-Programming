//29). WAP to implement static data member and static data function. Each time object is instantiated, the constructor increases the static count. A static function getcount() is used to acess the count. Call static function without object and dot operator

#include <iostream>
using namespace std;

class Sample {
    private:
        static int count;

    public:
        Sample() {
            count++;
        }

        static void getCount() {
            cout << "Total objects created: " << count << endl;
        }
};

int Sample::count = 0;

int main() {
    Sample s1;
    Sample s2;
    Sample s3;

    Sample::getCount();

    return 0;
}
 
