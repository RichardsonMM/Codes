#include<vector>
#include<stdio.h>
using namespace std;

class UnionFind{
private:
    vector<int> parent, rank;
public:
        UnionFind(int N){
            parent.assign(N+1, 0);
            rank.assign(N+1, 0);
            for(int i = 0; i < N; i++)
                parent[i] = i;
        }
        int find(int i){
            while(i != parent[i]) i = parent[i];
            return i;
        }
        bool isSameSet(int i , int j){
            return find(i) == find(j);
        }
        void unionSet(int i, int j){
            if(isSameSet(i, j)) 
                return;
            int x = find(i), y = find(j);
            if(rank[x] > rank[y]) parent[y] = x;
            else {
                parent[x] = y;
                if(rank[x] == rank[y]) rank[y]++;
            }
        }   
    };

int main(){
    int nb, no;
    scanf("%d %d", &nb, &no);
    UnionFind uf(nb);
    while(no--){
        char op;
        int a, b;
        scanf(" %c %d %d", &op, &a, &b);
        a--;
        b--;
        if(op == 'F') uf.unionSet(a, b);
        else if(op == 'C'){
            if(uf.isSameSet(a, b)){
                printf("S\n");
            }else{
                printf("N\n");
            }
        }  
    }
    return 0;
}
