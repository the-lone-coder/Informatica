#include <bits/stdc++.h>
using namespace std;

int main() {


    // Fisiere input & output
    freopen("tancuri.in", "r", stdin);
    freopen("tancuri.out", "w", stdout);

    int N;
    cin >> N;  // numarul de trageri

    // Calculeaza probabilitatea
    vector<double> p(N + 1);
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;       
        p[i] = x / 100.0;  
    }


    int Q;
    cin >> Q;  
    vector<int> K(Q);
    for (int i = 0; i < Q; i++) 
       { 
        cin >> K[i];
       }


   

    vector<vector<double>> dp(N + 1, vector<double>(N + 1, 0.0));
    // Cazul in care nu sunt trase obuze 
    dp[0][0] = 1.0; 
    for (int i = 1; i <= N; i++) 
    {
        for (int k = 0; k <= i; k++) 
        {
            // Cazul in care nu nimereste
            dp[i][k] += dp[i - 1][k] * (1 - p[i]);
            // Cazul in care nimereste
            if (k > 0)
                {
                    dp[i][k] += dp[i - 1][k - 1] * p[i];
                }
        }
    }

    cout << fixed << setprecision(8);
    for (int i = 0; i < Q; i++) 
    {
        double res = dp[N][K[i]];    
        double res_percent = res * 100.0;                    
        res_percent = floor(res_percent * 1e8) / 1e8;       
        cout << res_percent << "\n";
    }

    return 0;
}
