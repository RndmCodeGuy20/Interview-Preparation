//
// Created by SHANTANU on 03-06-2023.
//
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    Node *left;
    int data;
    Node *right;

    Node(int data, Node *left, Node *right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

class Tree {
public:
    Node *root;

    Tree() {
        BuildTreeLO();
    }

    Node *BuildTree() {
        int data;
        cin >> data;

        Node *q = new Node(data, nullptr, nullptr);
        if (data == -1) {
            return nullptr;
        }
        q->left = BuildTree();
        q->right = BuildTree();

        return q;
    }

    void BuildTreeLO() {

    }

    void LevelOrderNewLine(Node *ptr) {
        queue<Node *> Q;
        Node *temp;
        Q.push(ptr);
        Q.push(nullptr);
        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();
            if (temp == nullptr) {
                if (!Q.empty()) {
                    cout << endl;
                    Q.push(nullptr);
                }
            } else {
                cout << temp->data << " ";
                if (temp->left) Q.push(temp->left);
                if (temp->right) Q.push(temp->right);
            }
        }
    }

    void LevelOrder(Node *q) {
        queue<Node *> queue;
        Node *temp;

        if (!q) return;

        queue.push(q);

        while (!queue.empty()) {
            temp = queue.front();
            queue.pop();
            cout << temp->data << " ";

            if (temp->left) {
                queue.push(temp->left);
            }
            if (temp->right) {
                queue.push(temp->right);
            }
        }
    }

    stack<Node *> ReverseTreeShow(Node *q) {
        queue<Node *> queue;
        stack<Node *> stack;
        Node *temp;

        if (!q) return stack;

        queue.push(q);

        while (!queue.empty()) {
            temp = queue.front();
            queue.pop();

            if (temp->left) {
                queue.push(temp->left);
            }
            if (temp->right) {
                queue.push(temp->right);
            }

            stack.push(temp);
        }

        return stack;
    }

    bool SearchElement(Node *q, int target) {
        if (!q) {
            return false;
        }

        if (q->data == target) {
            return true;
        }

        bool left = SearchElement(q->left, target);
        bool right = SearchElement(q->right, target);

        return left || right;
    }

    int MaxElement(Node *q) {
        if (!q) {
            return INT_MIN;
        }
        int maxEl = q->data;

        int maxLeft = MaxElement(q->left);
        int maxRight = MaxElement(q->right);

        return max(maxEl, max(maxLeft, maxRight));
    }

    void InsertElementRE(Node *q, int value) { // inserting in only the left most node.
        if (q->left == NULL) {
            Node *newNode = new Node(value, NULL, NULL);
            q->left = newNode;
            return;
        } else if (q->right == NULL) {
            Node *newNode = new Node(value, NULL, NULL);
            q->right = newNode;
            return;
        }

        InsertElementRE(q->left, value);
//        InsertElement(q->right, value);
    }

    void InsertElementLO(Node *q, int value) {
        queue<Node *> queue;
        Node *temp;
        Node *newNode = new Node(value, NULL, NULL);

        if (!q) {
            q = newNode;
            return;
        };

        queue.push(q);

        while (!queue.empty()) {
            temp = queue.front();
            queue.pop();
//            cout << temp->data << " ";

            if (temp->left) {
                queue.push(temp->left);
            } else {
                q->left = newNode;
                return;
            }
            if (temp->right) {
                queue.push(temp->right);
            } else {
                q->right = newNode;
                return;
            }
        }
    }

    int TreeSizeRE(Node *q) {
        if (!q) {
            return -1;
        }

        int left = 1 + TreeSizeRE(q->left);
        int right = 1 + TreeSizeRE(q->right);

        return right + left;
    }

    int TreeDepth(Node *q) {
        if (!q) {
            return 0;
        }

        int left = TreeDepth(q->left);
        int right = TreeDepth(q->right);

        return max(left, right) + 1;
    }

    void DeleteTree(Node *q) {
        if (!q) {
            return;
        }

        DeleteTree(q->left);
        DeleteTree(q->right);

        delete q;
    }

    Node *DeepestNode(Node *q) {
        queue<Node *> queue;
        Node *temp;

        if (!q) {
            return nullptr;
        }

        queue.push(q);

        while (!queue.empty()) {
            temp = queue.front();
            queue.pop();

            if (temp->left) {
                queue.push(temp->left);
            }
            if (temp->right) {
                queue.push(temp->right);
            }
        }


        return temp;
    }

    int NumberofLeafNodes(Node *ptr) {
        if (!ptr) {
            return 0;
        }
        int count = 0;
        Node *temp;

        queue<Node *> Q;
        Q.push(ptr);
        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();

            if (!temp->left && !temp->right)
                count++;
            if (temp->left) Q.push(temp->left);
            if (temp->right) Q.push(temp->right);
        }

        return count;
    }

    int NumberOfLeafNodesRecursive(Node *ptr) {
        if (!ptr) {
            return 0;
        }

        if (!ptr->left && !ptr->right) {
            return 1;
        }

        int left = NumberOfLeafNodesRecursive(ptr->left);
        int right = NumberOfLeafNodesRecursive(ptr->right);

        return left + right;
    }

    bool IdenticalTree(Node *ptr1, Node *ptr2) {
        if (!ptr1 && !ptr2) {
            return true;
        }

        if (!ptr1 || !ptr2) {
            return false;
        }

        bool checkLeftTree = IdenticalTree(ptr1->left, ptr2->left);
        bool checkRightTrue = IdenticalTree(ptr1->right, ptr2->right);

        return (ptr1->data == ptr2->data) && checkLeftTree && checkRightTrue;
    }

    void PathFromRootToLeaf(Node *ptr, int path[], int pathLen) {
        if (!ptr) {
            return;
        }

        path[pathLen] = ptr->data;
        pathLen++;

        if (!ptr->left && !ptr->right) {
            for (int i = 0; i < pathLen; i++) {
                cout << path[i] << " ";
            }
            cout << endl;
        } else {
            PathFromRootToLeaf(ptr->left, path, pathLen);
            PathFromRootToLeaf(ptr->right, path, pathLen);
        }
    }

    int NumberOfFullNodes(Node *ptr) {
        if (!ptr) {
            return 0;
        }

        int left = NumberOfFullNodes(ptr->left);
        int right = NumberOfFullNodes(ptr->right);

        if (ptr->left && ptr->right) {
            return left + right + 1;
        } else {
            return left + right;
        }
    }

    int CountLevels(Node *ptr) {
        int levels = 0;

        queue<Node *> Q;
        Node *temp;

        Q.push(ptr);
        Q.push(nullptr);

        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();

            if (temp == nullptr) {
                if (!Q.empty()) {
                    Q.push(nullptr);
                }
                levels++;
            } else {
                if (temp->left) Q.push(temp->left);
                if (temp->right) Q.push(temp->right);
            }
        }

        return levels;
    }

    int LevelWithMaximumSum(Node *ptr) {
        if (!ptr) return 0;

        Node *temp;
        int level = 0, maxLevel = 0, currSum = 0, maxSum = 0;

        queue<Node *> Q;

        Q.push(ptr);
        Q.push(nullptr);

        while (!Q.empty()) {
            temp = Q.front();
            Q.pop();

            if (!temp) {
                if (currSum > maxSum) {
                    maxSum = currSum;
                    maxLevel = level;
                }

                currSum = 0;

                if (!Q.empty()) {
                    Q.push(nullptr);
                    level++;
                }

            } else {
                currSum += temp->data;
                if (temp->left) Q.push(temp->left);
                if (temp->right) Q.push(temp->right);
            }
        }
        return maxLevel;
    }
};

int main() {
    Tree tree;
    tree.LevelOrderNewLine(tree.root);
    cout << endl;
//    Tree tree1;
//
//    cout << endl << endl;
//
//    Tree tree2;
//
//    cout << tree1.IdenticalTree(tree1.root, tree2.root);

//    cout << endl;
//    cout << tree.SearchElement(tree.root, 4);

//    cout << endl;
//    cout << tree.MaxElement(tree.root);


//    tree.InsertElementRE(tree.root, 4);
//    cout << endl;
//
//    tree.LevelOrder(tree.root);
//
//    tree.InsertElementRE(tree.root, 5);
//    tree.InsertElementLO(tree.root, 4);
//    cout << 1 + tree.TreeSizeRE(tree.root);
//    stack<Node *> stack = tree.ReverseTreeShow(tree.root);
//
//    while (!stack.empty()) {
//        cout << stack.top()->data << " ";
//        stack.pop();
//    }

//    cout << tree.TreeDepth(tree.root);

//    cout << tree.DeepestNode(tree.root)->data;

    cout << tree.NumberofLeafNodes(tree.root);

//    int path[10];
//    tree.PathFromRootToLeaf(tree.root, path, 0);

//    cout << endl;
//    cout << tree.NumberOfLeafNodesRecursive(tree.root);
//    cout << tree.NumberOfFullNodes(tree.root);
//    cout << tree.CountLevels(tree.root);
    return 0;
}