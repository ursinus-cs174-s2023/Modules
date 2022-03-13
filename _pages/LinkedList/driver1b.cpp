#include <stdio.h>
#include <list>

using namespace std;

class Printable {
    public:
        virtual void print()=0;
};

class IntWrapper: public Printable {
    public:
        int x;
        IntWrapper(int x) {
            this->x = x;
        }
        void print() {
            printf("%i ", x);
        }
};

int main(int argc, char** argv) {
    int N = 10;
    list<Printable*> arr;
    for (int i = 0; i < N; i++) {
        arr.push_back(new IntWrapper(i*i));
    }

    list<Printable*>::iterator it;

    // Remove all elements that were odd
    it = arr.begin();
    while (it != arr.end()) {
        IntWrapper* myelem = (IntWrapper*)*it;
        if (myelem->x % 2 == 1) {
            // Remove element
            it = arr.erase(it);
            delete myelem;
        }
        else {
            it++;
        }
    }
    
    // begin is the "head" of the list
    // When I say it++, this follows the arrow to the next
    // container object
    for (it = arr.begin(); it != arr.end(); it++) {
        Printable* x = *it;
        x->print();
    }
    printf("\n");

    for (it = arr.begin(); it != arr.end(); it++) {
        Printable* x = *it;
        delete x;
    }
    return 0;
}
