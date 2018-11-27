//
//  WLinkedList.cpp
//  MyC
//
//  Created by 吴浩 on 2018/11/26.
//  Copyright © 2018 吴浩. All rights reserved.
//

#include "WLinkedList.hpp"
using namespace std;

LinkedList::LinkedList()
{
    Node* node = new Node;
    node->next = NULL;
    this -> root = node;
}

LinkedList::~LinkedList()
{
    Node* p1 = this -> root;
    Node* p2=p1;
    while(NULL!=p1)
    {
        p1=p1 -> next;
        delete p2;
        p2=p1;
    }
    if(NULL!=p2)
        delete p2;
}

void LinkedList::insertFirst(int n)
{
    Node* node = new Node;
    node->value = n;
    node->next = this ->root-> next;
    this -> root -> next = node;
}

void LinkedList::insertLast(int n)
{
    Node* node = this -> root->next;
    while(NULL!=node->next)
    {
        node = node -> next;
    }
    Node* p = new Node;
    p->value = n;
    p->next = NULL;
    node -> next = p;
}

void LinkedList::delFirst()
{
    Node* node = this -> root ->next;
    Node* p=node;
    this -> root -> next = node -> next;
    delete p;
}

void LinkedList::delLast()
{
    Node* node = this -> root;
    while(NULL!=node -> next -> next)
    {
        node=node->next;
    }
    Node* p = node->next;
    node -> next = NULL;
    delete p;
}

bool LinkedList::isEmpty()
{
    if(NULL == this -> root -> next)
        return true;
    return false;
}

void LinkedList::print()
{
    Node* p = this -> root -> next;
    while(NULL!=p)
    {
        cout<<p->value<<endl;
        p=p->next;
    }
}

