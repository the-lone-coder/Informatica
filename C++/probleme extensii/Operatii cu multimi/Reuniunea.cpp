#include <bits/stdc++.h>
using namespace std;
typedef vector <int> IntVector;
IntVector A, B, AUB, AnB, A_B, B_A, difsim;
int n, m;
bool gasit;

int main(){
    cout << "n = "; cin >> n; // Cardinal A
    cout << "m = "; cin >> m; // Cardinal B

    cout << "Scriem elementele multimii A: " << "\n";
    for (int i = 0; i < n; i++){ // citim multimea A
        int x;
        cin >> x;
        A.push_back(x);
    }
    cout << "Scriem elementele multimii B: " << "\n";
    for (int i = 0; i < m; i++){ // citim multimea B
        int x;
        cin >> x;
        B.push_back(x);
    }
    for (int i = 0; i < n; i++){ // afisam multimea A
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < m; i++){ // afisam multimea B
        cout << B[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < A.size(); i++){ // AUB.size() = 0  AUB.size() = 3
        AUB.push_back(A[i]);
    }
    for (int i = 0; i <= A.size(); i++){ // 1 2 3
        gasit = 0;
        for (int j = 0; j < AUB.size(); j++){// 2 3 4 5
            if (AUB[j] == B[i]){
                gasit = 1;
            }
        }
        if (gasit == 0){
            AUB.push_back(B[i]); // 1 2 3 4 5
        }
    }
    for (int i = 0; i < AUB.size(); i++){
        cout << AUB[i] << " ";
    }
}
