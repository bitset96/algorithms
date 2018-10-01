#include <bits/stdc++.h>
using namespace std;

const int MAXN = 26;

struct TrieNode {
    bool end;
    TrieNode* children[MAXN];
};

// Generates a new trie node
TrieNode* newNode(){
    TrieNode* node = new TrieNode;
    for(int i = 0; i< MAXN; i++){
        node->children[i] = nullptr;
    }
    return node;
}


// Inserts a given string into the Trie
void insert(TrieNode* root, string& str){
    TrieNode* node = root;
    for(auto& c:str){
        int idx = c-'a';
        if(node->children[idx] == nullptr){
            node->children[idx] = new TrieNode;
        }
        node = node->children[idx];
    }
    node->end = true;
}

// @returns Boolean
// Tests whether a string exists in the trie or not
bool search(TrieNode* root, string& prefix){
    TrieNode* node = root;
    for(auto& c:prefix){
        int idx = c-'a';
        if(!node->children[idx]){
            return false;
        }
        node = node->children[idx];
    }
    return (node != nullptr && node->end);
}

int main(){
    TrieNode* root = newNode();
    string& test = "test";
    insert(root,test);
    if(search(root,test)){
        cout<<"The string exists"<<endl;
    }
    else{
        cout<<"The string doesn't exist!"<<endl;
    }
}