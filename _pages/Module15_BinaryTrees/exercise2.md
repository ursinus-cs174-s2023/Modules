---
layout: exercise_cpp
permalink: /Module15/Exercise2
title: "CS174: Module 15: Binary Trees Inorder Traversal"
excerpt: "CS174: Module 15: Binary Trees Inorder Traversal"
canvasasmtid: "104854"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video2"
  next: "./Video3"
  points: 1.5
  instructions: "Complete the recursive calls to create a working implementation of inorder traversal."
  goals:
    - Use recursion to implement inorder traversal of a binary tree
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("3 7 8 9 10 12 13 14 15 20 .")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("10 .")
      feedback: "Try again.  It looks like you aren't doing any recursion yet."
    - incorrectcheck: |
        pos.includes("InternalError: too much recursion")
      feedback: "Try again.  Be sure you're only doing recursion if a child node is not NULL."
 
files:
  - filename: "Student Code"
    name: student
    ismain: false
    isreadonly: false
    isvisible: true
    code: | 
        #include &ltstdio.h&gt

        class TreeNode {
            public:
                int value;
                TreeNode* left;
                TreeNode* right;
                TreeNode(int value) {
                    this->value = value;
                    left = NULL;
                    right = NULL;
                }
        };

        void inorder(TreeNode* node) {
          // TODO: Finish this
          printf("%i ", node->value);
        }

        class BinaryTree {
            public:
                TreeNode* root;
            BinaryTree() {
                root = NULL;
            }
            ~BinaryTree() {
              cleanup(root);
            }
            void cleanup(TreeNode* N) {
              if (N != NULL) {
                cleanup(N->left);
                cleanup(N->right);
                delete N;
              }
            }
        };


        TreeNode* makeLeftSubtree() {
          TreeNode* node = new TreeNode(7);
          node->left = new TreeNode(3);
          node->right = new TreeNode(9);
          node->right->left = new TreeNode(8);
          return node;
        }

        TreeNode* makeRightSubtree() {
          TreeNode* node = new TreeNode(15);
          node->left = new TreeNode(12);
          node->right = new TreeNode(20);
          node->left->right = new TreeNode(14);
          node->left->right->left = new TreeNode(13);
          return node;
        }

        BinaryTree* makeTree() {
          BinaryTree* T = new BinaryTree();
          T->root = new TreeNode(10);
          T->root->left = makeLeftSubtree();
          T->root->right = makeRightSubtree();
          return T;
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      int main() {
          BinaryTree* T = makeTree();
          inorder(T->root);
          printf(".\n");
          return 0;
      }
        
---
