#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fi first
#define se second

void solve(vector < vector<int> > matrix){
  int rowSum = INT_MIN; // matrix number can be negative
  for(int i = 0; i < matrix.size(); i++){
    int tempSum = 0;
    for(int j = 0; j < matrix[i].size(); j++){
      tempSum += matrix[i][j];
    }
    rowSum = max(rowSum, tempSum);
  }

  int colSum = INT_MIN;
  for(int i = 0; i < matrix[0].size(); i++){
    int tempSum = 0;
    for(int j = 0; j < matrix.size(); j++){
      tempSum += matrix[j][i];
    }
    colSum = max(colSum, tempSum);
  }

  cout<<min(rowSum, colSum)<<'\n';
}


int main() {
//  freopen("in.txt","r", stdin);
//  freopen("out.txt","w", stdout);

  int row, col;
  cin>>row>>col;
  vector<vector<int>> vec( row , vector<int> (col));
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cin>>vec[i][j];
    }
  }
  solve(vec);

  return 0;
}

/**
2 3
1 2 3
4 5 6

*/
