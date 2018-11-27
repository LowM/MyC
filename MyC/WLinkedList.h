//
//  WLinkedList.h
//  MyC
//
//  Created by 吴浩 on 2018/11/26.
//  Copyright © 2018 吴浩. All rights reserved.
//

#ifndef WLinkedList_h
#define WLinkedList_h

struct Node
{
    int value;
    Node* next;
};

void insertNode(Node* p,int num);
void getList(Node* root);
#endif /* WLinkedList_h */
