//
//  Arvore.cpp
//  Projeto_04
//
//  Created by Paulo Bessa on 06/11/20.
//  Copyright © 2020 Paulo Bessa. All rights reserved.
//

#include "Arvore.hpp"
#include <iostream>
#include <string>

using namespace std;

template <class T>
Arvore <T>::Arvore(int s){
    size = s>0?s:10;
    top=-1;
    stackPtr=new T(size);
}

template <class T>
bool Arvore <T>::push(const T &pushValue){
    if(!isFull()){
        stackPtr[++top]=pushValue;
        return true;
    }
    return false;
}

template <class T>
bool Arvore <T>::pop(T &popValue){
    if(!isEmpty()){
        popValue = stackPtr[top--];
        return true;
    }
    return false;
}



//template <class T>
//bool Arvore<T>::check(T &no){
//    if(head->word == no->word){
//        return true;
//    }
//
//    Node * pivo = head;
//    while(true){
//        if (pivo->word==no->word){
//            return true;
//        } else if (pivo->word.at(0)>no->word.at(0)){
//            pivo = pivo->right;
//        } else if (pivo->word.at(0)<no->word.at(0)){
//            pivo = pivo->left;
//        } else {
//            return false;
//        }
//    }
//}
//
//template <class T>
//void Arvore<T>::push(T &node){
//    string letter = &node->word.at(0);
//    int position = 0;
//    Node & next = head;
//
//    if(&next==NULL){
//        next = node;
//    }
//    while(true){
//        if(&next.word.at(position)>letter){
//            if(next.right!=NULL){
//                next.right = &next;
//            } else {
//                next.right = node;
//                break;
//            }
//        } else if (&next.word.at(position)<letter){
//            if(next.left!=NULL){
//                next.left = &next;
//                } else {
//                    next.left = node;
//                    break;
//                }
//        } else {
//            position++;
//            string letter = &node->word.at(position);
//        }
//    }
//}
