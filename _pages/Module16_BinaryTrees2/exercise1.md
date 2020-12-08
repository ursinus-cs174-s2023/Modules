---
layout: exercise_cpp
permalink: /Module16/Exercise1
title: "CS174: Module 16: Binary Trees: Printing Levels"
excerpt: "CS174: Module 16: Binary Trees: Printing Levels"
canvasasmtid: "104979"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  points: 1.5
  instructions: "Modify the overloaded version of the printLevel() method so that recursive calls of that method print the nodes at a particular level from left to right.  In other words, you should only print a node if the current level is the correct level, and, for efficiency, you should only continue the recursion if the current depth is less than the target level."
  goals:
    - Manipulate nodes in a binary tree data structure
    - Work with object references in C++
    - Work with recursive functions
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("3 9 12 20 .")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("3 7 8 9 10 12 13 13 14 15 20 .")
      feedback: "Try again.  It looks like you're still printing out all of the nodes.  Be sure to only print out the nodes at a particular level."
    - incorrectcheck: |
        pos.includes("3 7 9 10 12 15 20 .")
      feedback: "Try again.  It looks like you're printing all of the nodes at levels up to and including a particular level, but you only want to print nodes exactly at the level."
 
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
                int index;
                TreeNode* left;
                TreeNode* right;
                //TreeNode* parent;
                TreeNode(int value) {
                    this->value = value;
                    left = NULL;
                    right = NULL;
                }
        };

        class BinaryTree {
            public:
                TreeNode* root;
                int N;
            BinaryTree() {
                root = NULL;
                N = 0;
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
            node->left->right->left->left = new TreeNode(13);
            return node;
        }

        BinaryTree* makeExampleTree() {
            BinaryTree* T = new BinaryTree();
            T->root = new TreeNode(10);
            T->root->left = makeLeftSubtree();
            T->root->right = makeRightSubtree();
            return T;
        }

        void printLevel(TreeNode* node, int curr, int level) {
            // TODO: Modify this
            if (node != NULL) {
                printLevel(node->left, curr+1, level);
                printf("%i ", node->value);
                printLevel(node->right, curr+1, level);
            }
        }

        void printLevel(BinaryTree* T, int level) {
            printLevel(T->root, 1, level);
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 

      int main() {
          BinaryTree* T = makeExampleTree();
          printLevel(T, 3);
          printf(".\n");
          delete T;
          return 0;
      }
        
---
