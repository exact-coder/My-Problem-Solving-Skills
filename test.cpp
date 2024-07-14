#include "bits/stdc++.h"
using namespace std;


int main(){
    int tt; cin >> tt;
    while (tt--)
    {
        int n,m; cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) cin >> matrix[i][j];
        }

        bool stabilized = true;
        while (stabilized)
        {
            stabilized = false;
            int up,down,left,right;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {

                    if(i>0) up = matrix[i-1][j];
                    else up=0;

                    if(j>0) left = matrix[i][j-1];
                    else left=0;

                    if(i<n-1) down = matrix[i+1][j];
                    else down=0;

                    if(j<m-1) right = matrix[i][j+1];
                    else right=0;

                    int max_neighbor = max(max(up,down), max(left,right));

                    if(matrix[i][j] > max_neighbor){
                        matrix[i][j] = max_neighbor;
                        stabilized=true;
                    }

                }
                
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
                cout << endl;
            }
            
        }
        
    }
    
}
