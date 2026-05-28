#include <cstddef>
#include <iostream>
#include <utility>
using value_type = int;

class Node {
    public:
    value_type data;
    Node* next;

    Node(value_type data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    value_type size() {
        value_type counter {0};
        Node* currNode = head;

        while (currNode != nullptr) {
            counter++;
            currNode = currNode->next;
        }
        return counter;
    }
    
    void addToFront(value_type value) {
        Node* tempNode = new Node(value, head);
        head = tempNode;
    }

    void addToBack(value_type value) { // Run until hit nullptr (tail)
        Node* lastNode = new Node(value, nullptr);
        if (head == nullptr) {
            head = lastNode;
            return;
        }

        Node* currNode = head;
        while (currNode->next != nullptr) {
            currNode = currNode->next; // itera sobre a linked list;
        }
        currNode->next = lastNode;
    }

    void addNode(value_type value) {
        if (head == nullptr) {
            addToFront(value);
        }
        else {
            Node* tempNode = head;
            while (tempNode != nullptr) {
                tempNode = tempNode->next;
            }

            Node* newNode = new Node(value, tempNode->next);
            tempNode->next = newNode;
        }
    }

    void remove(LinkedList& L, int value) {
        Node* curr = L.head;
        Node* prev = L.head;

        while (curr->data != value) {
            if (curr == nullptr) {
                return;
            }
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }

    void sortList() {
        if (head == nullptr) {
            return;
        }

        Node* slowNode = head;

        while (slowNode != nullptr) {
            Node* currNode = slowNode->next;
            while (currNode != nullptr) {
                if (slowNode->data > currNode->data) {
                    std::swap(currNode->data, slowNode->data);
                }
                currNode = currNode->next;
            }
            slowNode = slowNode->next;
        }
    }

    void printLinkedList() {
        Node* currNode {head};
        while (currNode != nullptr) {
            std::cout << currNode->data << " -> ";
            currNode = currNode->next;
        }
        std::cout << "nullptr" << "\n";
    }

    void invert() {
        Node* prevNode {nullptr};
        Node* currNode {head};
        Node* nextNode {nullptr};

        Node* backHead = head;

        while (currNode != nullptr) {
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        head = prevNode;
        tail = backHead;
    }

    LinkedList merge(LinkedList& list) {
        LinkedList newList;
        this->tail->next = list.head;

        newList.head = this->head;
        newList.tail = list.tail;

        newList.sortList();

        Node* currNode = newList.head;

        while (currNode->next != nullptr) {
            currNode = currNode->next;
        }
        newList.tail = currNode;

        return newList;
    }

    LinkedList merge(LinkedList& list1, LinkedList& list2) {
        LinkedList newList;
        list1.head->next = list2.head;

        newList.head = list1.head;
        newList.tail = list2.head;

        newList.sortList();

        Node* currNode = newList.head;

        while (currNode->next != nullptr) {
            currNode = currNode->next;
        }
        newList.tail = currNode;

        return newList;
    }
};

int main() {
    LinkedList myList1, myList2;
    /// List 1:
    myList1.addToBack(1);
    myList1.addToBack(4);
    myList1.addToBack(7);
    myList1.addToBack(10);
    myList1.addToBack(90);

    /// List 2:
    myList2.addToBack(8);
    myList2.addToBack(23);
    myList2.addToBack(1);
    myList2.addToBack(5);
    myList2.addToBack(67);
    // myList2.remove(myList2, 67);

    std::cout << "//- Linked List: \n";
    myList1.printLinkedList();
    myList1.invert();

    std::cout << "//- Linked List: (Invert)\n";
    myList1.printLinkedList();

    std::cout << "//- Merging two lists: \n";
    myList1.merge(myList2).printLinkedList();
}