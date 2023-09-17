#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>

using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */
#define int long long
#define endl "\n"

// Define a struct named 'node'
struct node {
    int data;           // An integer data field
    struct node* next;  // A pointer to the next 'node' (assuming a linked list)
};

int32_t main() {
    // Create instances of the 'node' struct
    struct node firstNode;
    struct node secondNode;

    // Initialize the data fields
    firstNode.data = 10;
    secondNode.data = 20;

    // Link the nodes (assuming a linked list)
    firstNode.next = &secondNode;
    secondNode.next = nullptr; // This indicates the end of the list

    // Access and print the data fields
     cout << "Data in the first node: " << firstNode.data <<  endl;
     cout << "Data in the second node: " << secondNode.data <<  endl;

    // Access and traverse the linked list
    struct node* current = &firstNode;
    while (current != nullptr) {
         cout << "Data: " << current->data <<  endl;
        current = current->next;
    }

    return 0;
}
