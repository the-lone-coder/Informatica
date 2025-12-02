#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ifstream fin("cate3cifre.in");
    ofstream fout("cate3cifre.out");
    
    int cerinta, N;
    fin >> cerinta >> N;
    
    // For each number, count how many representations it has
    vector<int> count(N + 1, 0);
    // Store the representations (base, digit) for each number
    vector<vector<pair<int, int>>> representations(N + 1);
    
    // Iterate through all possible bases
    // The maximum base we need to consider: b² + b + 1 ≤ N
    int max_base = sqrt(N) + 1;
    
    for (int b = 2; b <= max_base; b++) {
        int base_value = b * b + b + 1;
        if (base_value > N) continue;
        
        // For each possible digit a (1 ≤ a < b)
        for (int a = 1; a < b; a++) {
            int num = a * base_value;
            if (num > N) break;
            
            count[num]++;
            representations[num].push_back({b, a});
        }
    }
    
    // Find the largest number ≤ N with exactly 2 representations
    int result_num = -1;
    for (int num = N; num >= 1; num--) {
        if (count[num] == 2) {
            result_num = num;
            break;
        }
    }
    
    if (cerinta == 1) {
        fout << result_num << endl;
    } else {
        // Get the two representations and sort by base
        vector<pair<int, int>> reps = representations[result_num];
        sort(reps.begin(), reps.end());
        
        for (int i = 0; i < 2; i++) {
            fout << reps[i].first << " " << reps[i].second << endl;
        }
    }
    
    fin.close();
    fout.close();
    return 0;
}