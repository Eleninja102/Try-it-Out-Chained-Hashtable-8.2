//
//  main.cpp
//  Try it Out: Chained Hashtable 8.2
//
//  Created by Coleton Watt on 3/8/22.
//

#include "ChainedHashtable.h"
#include <iostream>

using namespace std;

int main() {
    //ChainedHashtable<int>ht;
    ChainedHashtable<int>ht(127);
    for (int i = 0; i < 100; i++) {
    ht.insert(rand() % 100000);
    }
    cout << ht << endl;

    
}
