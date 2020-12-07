---
layout: exercise_cpp
permalink: /Module15/Exercise1
title: "CS174: Module 15: Binary Trees Intro"
excerpt: "CS174: Module 15: Binary Trees Intro"
canvasasmtid: "104849"
canvaspoints: "1.5"
canvashalftries: 5

info:
  prev: "./Video1"
  next: "./Video2"
  points: 1.5
  instructions: "Fill in the makeTree() method to create the binary tree pictured below:<BR><img src = \"../images/Module15/Exercise1.svg\">"
  goals:
    - Manipulate nodes in a binary tree data structure
    - Work with object references in C++
    
processor:  
  correctfeedback: "Correct!!" 
  incorrectfeedback: "Try again"
  submitformlink: false
  feedbackprocess: | 
    var pos = runtime.text.trim();
  correctcheck: |
    pos.includes("1 4 8 9 15 20 25 .")
  incorrectchecks:
    - incorrectcheck: |
        pos.includes("4 9 .")
      feedback: "Try again.  It looks like you haven't filled in the new nodes yet for the tree."
 
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

        BinaryTree* makeTree() {
          BinaryTree* T = new BinaryTree();
          T->root = new TreeNode(9);
          T->root->left = new TreeNode(4);
          // TODO: Finish this
          
          return T;
        }


  - filename: "Main Area"
    name: main
    ismain: true
    isreadonly: true
    isvisible: true
    code: | 
      void traverse(TreeNode* N) {
        if (N != NULL) {
          traverse(N->left);
          printf("%i ", N->value);
          traverse(N->right);
        }
      }

      int main() {
          BinaryTree* T = makeTree();
          traverse(T->root);
          printf(".\n");
          delete T;
          return 0;
      }
        
---
