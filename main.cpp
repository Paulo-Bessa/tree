//
//  main.cpp
//  Projeto_04
//
//  Created by Paulo Bessa on 06/11/20.
//  Copyright © 2020 Paulo Bessa. All rights reserved.
//

#include <iostream>
#include "Arvore.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
//    Arvore<Node> arvore;
//
//    Node no;
//    no.word = "primeira";
//    arvore.push(no);
//    arvore.check(no);
    Arvore <double> doubleStack(5);
    double doubleValue=1.1;
    
    cout << "Pushing elements onto doubleStack\n";
    
    while (doubleStack.push(doubleValue)){
        cout << doubleValue << ' ';
        doubleValue += 1.1;
    }
    
    cout << "\nStack is full. Cannot push " << doubleValue
    << "\n\nPopping elements from doubleStack\n";
    
    while (doubleStack.pop(doubleValue)){
        cout << doubleValue << ' ';
    }
    
    cout << "\nStack is empty. Cannot pop\n";
    
    Arvore<int>intStack;
    int intValue=1;
    cout << "\nPushing elements onto intStack\n";
    
    while(intStack.push(intValue)){
        cout << intValue << ' ';
        ++intValue;
    }
    return 0;
}
