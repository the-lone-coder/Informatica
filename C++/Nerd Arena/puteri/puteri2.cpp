#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int mod = 100013;

int main() {
    // Open input and output files
    ifstream fin("puteri2.in");
    ofstream fout("puteri2.out");
    
    int n;
    fin >> n;
    vector<int> a(n), b(n);
    

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    

    for (int i = 0; i < n; i++) {
        fin >> b[i];
    }
    

    int freq_a[501] = {0};
    for (int i = 0; i < n; i++) {
        if (a[i] >= 1 && a[i] <= 500) {
            freq_a[a[i]]++;
        }
    }
    
  
    const int phi = mod - 1;
    vector<int> reduced_b(n);
    for (int i = 0; i < n; i++) {
        reduced_b[i] = b[i] % phi;
    }
    
    long long T = 0;
    
    for (int x = 1; x <= 500; x++) {
        if (freq_a[x] == 0) continue;
        
        long long S_x = 0;
        
        
        for (int i = 0; i < n; i++) {
          
            long long base = x;
            long long exp = reduced_b[i];
            long long res = 1;
            
            
            while (exp > 0) {
                if (exp & 1) {
                    res = (res * base) % mod;
                }
                base = (base * base) % mod;
                exp >>= 1;
            }
            
            S_x = (S_x + res) % mod;
        }
        
        T = (T + freq_a[x] * S_x) % mod;
    }
    
    // Final result
    long long ans = (2 * T) % mod;
    fout << ans << endl;
    
    // Close files
    fin.close();
    fout.close();
    
    return 0;
}