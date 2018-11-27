//
//  main.cpp
//  MyC
//
//  Created by 吴浩 on 2018/11/26.
//  Copyright © 2018 吴浩. All rights reserved.
//

#include "WLinkedList.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    LinkedList* list = new LinkedList;
    list -> insertFirst(5);
    list->insertLast(4);
    list->insertFirst(2);
    cout<<"before delete ";
    list->print();
    list->delFirst();
    cout<<"after delete ";
    list->print();
    return 0;
}
