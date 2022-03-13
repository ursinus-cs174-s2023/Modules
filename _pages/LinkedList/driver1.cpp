#include <stdio.h>
#include <list>

using namespace std;

class IntWrapper {
    public:
        int x;
        IntWrapper(int x) {
            this->x = x;
        }
};

int main(int argc, char** argv) {
    int N = 10;
    list<IntWrapper*> arr;
    for (int i = 0; i < N; i++) {
        arr.push_back(new IntWrapper(i*i));
    }

    list<IntWrapper*>::iterator it;
    // begin is the "head" of the list
    // When I say it++, this follows the arrow to the next
    // container object
    for (it = arr.begin(); it != arr.end(); it++) {
        IntWrapper* x = *it;
        printf("%i ", x->x);
    }
    printf("\n");

    for (it = arr.begin(); it != arr.end(); it++) {
        IntWrapper* x = *it;
        delete x;
    }
    return 0;
}

int main2(int argc, char** argv) {
    int N = 10;
    IntWrapper** arr = new IntWrapper*[N];
    for (int i = 0; i < N; i++) {
        arr[i] = new IntWrapper(i*i);
    }

    // TODO: Remove object at index idx from the array
    // Step 1: Create a new array that's one smaller
    int idx = 3;
    IntWrapper** temp = new IntWrapper*[N-1];
    // Step 2: Copy over everything before idx
    for (int i = 0; i < idx; i++) {
        temp[i] = arr[i];
    }
    // Step 3: Move over everything after idx to the left
    // by 1 index in the new array
    for (int i = idx+1; i < N; i++) {
        temp[i-1] = arr[i]; // Everything shifts to the left
    }
    delete arr[idx];
    delete[] arr; // Get rid of old array
    N--;
    arr = temp;

    for (int i = 0; i < N; i++) {
        printf("%i ", arr[i]->x);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        delete arr[i];
    }
    delete[] arr;
    return 0;
}