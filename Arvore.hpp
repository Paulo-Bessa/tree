//
//  Arvore.hpp
//  Projeto_04
//
//  Created by Paulo Bessa on 06/11/20.
//  Copyright © 2020 Paulo Bessa. All rights reserved.
//

#ifndef Arvore_hpp
#define Arvore_hpp

#include <stdio.h>
#include <string>

using namespace std;

struct Node {
    Node *left=NULL;
    Node *right=NULL;
    string word=NULL;
};

template<class T>
class Arvore{
public:
    Arvore(int = 10);
//    void push(T&);
    bool push(const T&);
    bool pop(T&);
    bool isEmpty() const{
        return top == -1;
    }
    bool isFull() const {
        return top == size - 1;
    }
//    void erase(string);
//    void represent(Node*);
    bool check(T&);
private:
    T *head=NULL;
    int size;
    int top;
    T *stackPtr;
};

#endif /* Arvore_hpp */
