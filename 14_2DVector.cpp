#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <vector <int>> matrix={{1,5,3,4},
                              {8,4,3,2},
                              {8,5,9,3},
                              {6,2,1,3}};

    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}