#include <iostream>
using namespace std;

class Swap {
public:
    int data;

    Swap(int d) : data(d) {}
};

void swapByValue(Swap obj1, Swap obj2) {
    int temp = obj1.data;
    obj1.data = obj2.data;
    obj2.data = temp;
}

void swapByReference(Swap& obj1, Swap& obj2) {
    int temp = obj1.data;
    obj1.data = obj2.data;
    obj2.data = temp;
}

int main() {

    Swap obj1(10);
    Swap obj2(20);

    cout << "Before swapping:" << endl;
    cout << "obj1.data: " << obj1.data << endl;
    cout << "obj2.data: " << obj2.data << endl;


    swapByValue(obj1, obj2);

    cout << "After swapping by value:" << endl;
    cout << "obj1.data: " << obj1.data << endl;
    cout << "obj2.data: " << obj2.data << endl;


    swapByReference(obj1, obj2);

     cout << "After swapping by reference:" << endl;
     cout << "obj1.data: " << obj1.data << endl;
     cout << "obj2.data: " << obj2.data << endl;
}
