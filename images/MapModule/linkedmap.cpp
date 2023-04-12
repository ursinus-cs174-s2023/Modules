#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

template <class K, class V> class Node {
    private:
        K key;
        V value;
        Node<K, V>* next;
    public:
        Node(K key, V value) {
            this->key = key;
            this->value = value;
            next = NULL;
        }
    template<class A, class B> friend class LinkedMap;
};

template <class K, class V> 
class LinkedMap {
    private:
        Node<K, V>* head;
        V removeFirst() {
            V ret;
            if (head != NULL) {
                ret = head->value;
                Node<K, V>* oldHead = head;
                head = head->next;
                delete oldHead;
            }
            return ret;
        }

    public:
        LinkedMap() {
            head = NULL;
        }
        ~LinkedMap() {
            // Delete all nodes that have been allocated
            while (head != NULL) {
                removeFirst();
            }
        }

        /**
        * Put in a new <key, value> pair
        */
        void put(K key, V value) {
            // Add a new key/value pair to the collection
            Node<K, V>* newNode = new Node<K, V>(key, value);
            newNode->next = head;
            head = newNode;
        }

        /**
         * Find the value corresponding value to a key
         * 
         * @param key The key we're looking up
         * @return V The corresponding value
         */
        V get(K key) {
            V ret;
            Node<K, V>* cursor = head;
            while (cursor != NULL) {
                if (cursor->key == key) {
                    ret = cursor->value;
                }
                cursor = cursor->next;
            }
            return ret;
        }

        /**
         * Remove a key/value pair and return
         * the corresponding value
         * 
         * @param key Key of the entry we want to remove
         * @return V Value associated to the entry that's being removed
         */
        V remove(K key) {
            V ret;
            // TODO: Fill this in

            return ret;
        }

        /**
         * Look up whether a particular key is in the map
         * 
         * @param key Key we want to look up
         * @return true if the map contains this key
         * @return false if the map does not contain this key
         */
        bool containsKey(K key) {
            // TODO: Fill this in
            return false;
        }
};

int main() {
    LinkedMap<string, vector<int>> favNums;

    favNums.put("chris", {174, 373, 476, 477});
    favNums.put("bill", {173, 374, 475});
    favNums.put("ann marie", {170, 274, 275});

    cout << favNums.get("chris")[0] << "\n";
}
