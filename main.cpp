#include "Assignment2.hpp"
#include "VS.hpp"

using namespace std;

int main() {

    linkedList list;
    list.push_back("Ibrahim");
    list.push_back("Jason");
    list.push_back("Max");
    cout << "Current list: " << endl;
    list.print();
    cout << "\nPush back Sanji and pop_front: " << endl;
    list.push_back("Karmen");
    list.pop_front();
    list.print();
    cout <<"\nList after inserting Zoro to index 1:" << endl;
    list.insert(1,"Haaland");
    list.print();
    cout << "front() = " << list.front();
    cout << "\nback() = " << list.back();
    cout << endl;


    vectorStack stack;
    stack.add(5);
    stack.add(12);
    stack.add(34);
    stack.add(23);
    stack.add(87);
    cout << "\nCurrent stack: " << endl;
    stack.print();
    cout << "\nStack after adding 27: " << endl;
    stack.add(27);
    stack.print();
    cout << "\nStack after removing the top:" << endl;
    stack.remove();
    stack.print();


    return 0;
}
