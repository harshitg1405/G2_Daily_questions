#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,row,col,sum=0,m=INT_MIN;
    cin>>row>>col;
    vector<vector<int>> v(row,vector<int>(col));
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>v[i][j];
        }
    }
    for(i=0;i<row;i++){
        s=0;
        for(j=0;j<col;j++){
            sum=sum+v[i][j];
        }
        m=max(m,sum);
    }
    cout<<m;
}
