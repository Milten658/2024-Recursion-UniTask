#include <iostream>

using namespace std;

struct Node {
	int x;
	Node* next;
};

class List  {
public:

	Node* head = nullptr;

	void add(int value) {
		Node* newNode = new Node;
		newNode->x = value;
		newNode->next = nullptr;

		if (head == nullptr) {
			head = newNode;
			return;
		}

		Node* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newNode;
	}

	void display() {
		if (head == nullptr) {
			cout << "The list is empty" << endl;
			return;
		}

		Node* current = head;
		while (current != nullptr) {
			cout << current->x << " ";
			current = current->next;
		}
		cout << endl;
	}
};


void shuffle(List* obj, Node* current) {

	if ((current != obj->head || current->next==nullptr) && (current->next == nullptr || current->next->next == nullptr)) {
		cout << "Shuffle is done" << endl;
		return;
	}
	Node* sup1 = nullptr;
	
	if (current == obj->head) {
		sup1 = obj->head;
		obj->head = current->next;
		current->next = obj->head->next;
		obj->head->next = sup1;
	} else {
		
		sup1 = current->next;
		Node* sup2 = current->next->next->next;
		current->next = current->next->next;
		current->next->next = sup1;
		sup1->next = sup2;
		current = current->next->next;
	}
	shuffle(obj, current);

}

void task2() {

	List list;
	int num;
	cout << "\tTask 2:\nHow many elements do you want to have in the list? - ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		list.add(i + 1);
	}

	list.display();
	List* pl = &list;

	shuffle(pl, list.head);

	list.display();

	cout << endl;
	return;
}