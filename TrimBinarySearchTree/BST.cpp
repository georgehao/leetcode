#include <iostream>
#include <list>
using namespace std;

typedef struct Node {
    int data;
    Node *p_left;
    Node *p_right;

    Node(int d):data(d) {}
} Node;

class BSTree {
public:
    // 1. 有序数组转换成BST
    Node* arrayToBST(int arr[], int len) 
    {
        // 有序数组转BST的原理:
        // 取有序数组中值作为二叉树的根，将数组分成左右两个子树.然后再以左边数组的中值作为左子树的
        // 根. 右子树也同样. 递归这个关系就能形成BST

        return  buildTree(arr, 0, len-1);
    }

    Node* buildTree(int arr[], int left, int right)
    {
        if (left > right) {
            return nullptr;
        }

        int mid = (left + right) / 2;
        Node *p_root = new Node(arr[mid]);
        p_root->p_left = buildTree(arr, left, mid-1);
        p_root->p_right = buildTree(arr, mid+1, right);

        return p_root;
    }

    // 2. BST转换成有序数组
    int* BSTToArray(Node* p_root) 
    {

    }

    // 3. 插入
    // 4. 删除
    // 5. 广度遍历二叉树
    void bsf(Node* p_root) 
    {
        if (!p_root) {
            return;
        }
        
        list<Node*> node_queue{};
        node_queue.push_back(p_root);
        while (!node_queue.empty()) {
            Node *p_node = node_queue.front();
            node_queue.pop_front();
            cout << p_node->data << " ";
            if (p_node->p_left) {
                node_queue.push_back(p_root->p_left);
            }

            if (p_node->p_right) {
                node_queue.push_back(p_root->p_right);
            }
        }

        cout << endl;
    }

    // 6. 查找节点
    Node* search(int element, Node* p_root)
    {
        if (!p_root || p_root->data == element) {
            return p_root;
        }

        if (element < p_root->data) {
            return search(element, p_root->p_left);
        } else {
            return search(element, p_root->p_right);
        }
        
        return nullptr;
    }
    // 7. 最大值
    // 8. 最小值
};


int main()
{
    BSTree bst;
    int a[] = {1, 2};
    Node *p_root = bst.arrayToBST(a, 7);
    bst.bsf(p_root);
}
