#include <iostream>
#include <vector>

struct Node {
    int value;
    int prev;
    int next;
};

class DoublyLinkedList {
private:
    std::vector<Node> nodes;
    int head;
    int tail;

public:
    DoublyLinkedList() {
        head = -1;
        tail = -1;
    }

    void append(int value) {
        Node newNode;
        newNode.value = value;
        newNode.prev = tail;
        newNode.next = -1;

        if (tail != -1) {
            nodes[tail].next = nodes.size();
        }

        tail = nodes.size();
        nodes.push_back(newNode);

        if (head == -1) {
            head = tail;
        }
    }

    void display() {
        int current = head;
        while (current != -1) {
            std::cout << nodes[current].value << " ";
            current = nodes[current].next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.append(1);
    dll.append(2);
    dll.append(3);

    dll.display();  // Output: 1 2 3

    return 0;
}
