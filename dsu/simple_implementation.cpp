#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;

int parent[MAXN];

void make_set(int u){
    parent[u] = u;
}

int find_set(int u){
    while(parent[u] != u){
        u = parent[u];
    }
    return u;
}

void union_set(int u, int v){
    int a = find_set(u);
    int b = find_set(v);
    if(a != b){
        parent[b] = a;
    }
}


int main(){

    return 0;
}