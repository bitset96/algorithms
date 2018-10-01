#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;

int parent[MAXN];
int size[MAXN]; // Use union by size

void make_set(int u){
    parent[u] = u;
    size[u] = 1;
}

int find_set(int u){
    if(u == parent[u]){
        return u;
    }
    // Path compression
    parent[u] = find_set(parent[u]);
}

void union_sets(int u, int v){
    int a = find_set(u);
    int b = find_set(v);
    if(a != b){
        // Union by size
        if(size[a] < size[b]){
            swap(a,b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}


int main(){
    
    return 0;
}