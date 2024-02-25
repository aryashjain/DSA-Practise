//Jai Shree Ram
// DSU CLASS IMPLEMENTATION
#include<bits/stdc++.h>
using namespace std;
class DisjointSet {
  vector<int> rank, parent;
public:
  DisjointSet(int n){
    rank.resize(n+1,0);
    parent.resize(n+1,0);
    for(int i =0; i<=n; i++){
      parent[i] =i;
    }
  }
  int findUPar(int node) {
    if(node == parent[node])
      return node;
    return parent[node] = findUPar(parent[node]);
  }

  void unionByRank(int u, int v) {
    int ultimateParentOfU = findUPar(u);
    int ultimateParentOfV = findUPar(v);

    if(ultimateParentOfV == ultimateParentOfU) return;
    // attach to the larger part... and change the rank if equal
    if(rank[ultimateParentOfU]<rank[ultimateParentOfV]) {
      parent[ultimateParentOfU] = ultimateParentOfV;
    }
    else if(rank[ultimateParentOfU]<rank[ultimateParentOfV]) {
      parent[ultimateParentOfV]= ultimateParentOfU;
    }
    else { // in case of equal
          parent[ultimateParentOfV] = ultimateParentOfU;
          // u became a parent and hence increasing
          rank[ultimateParentOfU]++;
    }



  }
  void checkUltimateParent(int u , int v){

   if(findUPar(u)== findUPar(v))
   {
    cout<< "same"<<endl;
   }
   else
    cout<<"not same"<<endl;
  }
};
#define ll long long int
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================
//cout << fixed << setprecision(10); if double "
 // ll dp[10000][10000];


int main() {

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
   DisjointSet ds(7);
   ds.unionByRank(1,2);
   ds.unionByRank(2,3);
   ds.unionByRank(4,5);
   ds.unionByRank(6,7);

   ds.checkUltimateParent(3,5);
   
   ds.unionByRank(3,5);
   ds.unionByRank(5,6);

   ds.checkUltimateParent(3,5);

   


    }
/* girte hai maidaan-e-jung me sheh sawaar hi,
woh tifl kya girenge jo ghutno ke bal chaley */
/* like share subscribe  #Bot747 */