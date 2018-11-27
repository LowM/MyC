//
//  WLinkedList.hpp
//  MyC
//
//  Created by 吴浩 on 2018/11/26.
//  Copyright © 2018 吴浩. All rights reserved.
//

#ifndef WLinkedList_hpp
#define WLinkedList_hpp

#include <stdio.h>
#include <iostream>

class Node
{
public:
    int value;
    Node* next;
};

class LinkedList
{
private:
    Node* root;
public:
    //构造函数，用来实例化根节点，根节点不使用
    LinkedList();
    //析构函数，用来摧毁这个链表
    ~LinkedList();
    //在链表的头部插入
    void insertFirst(int n);
    //在链表的尾部插入
    void insertLast(int n);
    //判断链表是否为空
    bool isEmpty();
    //删除头部
    void delFirst();
    //删除尾部
    void delLast();
    //打印这个链表
    void print();
};

#endif /* WLinkedList_hpp */
