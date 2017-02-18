#include <iostream>
using namespace std;

int main() {
   int N, K, n;
   cin >> N >> K;
   int occ[K] = {0};
   for (int i = 0; i < N; i++) {
      cin >> n;
      occ[n % K]++;
   }//for
   int i,j,res=0;
    for(i=0,j<k-1;i<j;i++,j--)
        {
        if(occ[i]>occ[j])
            res+=occ[i];
        else
            res+=occ[j];
    }
    if(i==j && occ[i]>=1)
        res+=1;
    if(occ[0]>=1)
        res+=1;
    cout << res <<endl;
}/
