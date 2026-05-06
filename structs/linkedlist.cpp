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
public:
    LinkedList() {
        head = nullptr;
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
};