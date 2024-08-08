#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include "struct.hpp"

using namespace std;

class Solution{
public:
	ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2){
		//a-1->head de list2
		//b->final de list2
		ListNode* prev=list1;
		ListNode* curr=list1;
		ListNode* temp=list2;
		int i=1;
		while(i!=a){
			prev=prev->next;
			i++;
		}
		curr=prev->next;
		while(i<=b){
			curr=curr->next;
			i++;
		}
		while(temp->next!=NULL){
			temp=temp->next;
		}
		prev->next=list2;
		temp->next=curr;
		curr=NULL;
		return list1;
	}
};

#endif