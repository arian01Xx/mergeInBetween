#include "struct.hpp"
#include "solution.hpp"
#include "list.hpp"

using namespace std;

int main(){
	Solution solution;
	vector<int> node1={10,1,13,6,9,5};
	vector<int> node2={1000000,1000001,1000002};
	int a=3; int b=4;
	ListNode* list1=createdLinkedList(node1);
	ListNode* list2=createdLinkedList(node2);
	ListNode* output=solution.mergeInBetween(list1, a, b, list2);
	cout<<"First Two LinkedList= "<<endl;
	while(list1!=nullptr){
		cout<<list1->val<<"->";
		list1=list1->next;
	}
	cout<<endl;
	while(list2!=nullptr){
		cout<<list2->val<<"->";
		list2=list2->next;
	}
	cout<<endl;
	cout<<endl;
	cout<<"Output= "<<endl;
	while(output!=nullptr){
		cout<<output->val<<"->";
		output=output->next;
	}
	cout<<endl;
	cout<<endl
;
	return 0;
}