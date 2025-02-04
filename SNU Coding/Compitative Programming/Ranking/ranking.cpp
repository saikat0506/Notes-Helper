#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to get the rank for each score of Alice
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    // Remove duplicates from ranked scores
    vector<int> ranks;
    ranks.push_back(ranked[0]);
    for (int i = 1; i < ranked.size(); i++) {
        if (ranked[i] != ranked[i - 1]) {
            ranks.push_back(ranked[i]);
        }
    }

    vector<int> result;
    int n = ranks.size();
    int idx = n - 1;

    // For each score of Alice, find the rank
    for (int i = 0; i < player.size(); i++) {
        while (idx >= 0 && player[i] >= ranks[idx]) {
            idx--;
        }
        result.push_back(idx + 2);
    }

    return result;
}

int main() {
    int n, m;
    // Input number of ranked players
    cin >> n;
    vector<int> ranked(n);
    for (int i = 0; i < n; i++) {
        cin >> ranked[i];
    }

    // Input number of games Alice played
    cin >> m;
    vector<int> player(m);
    for (int i = 0; i < m; i++) {
        cin >> player[i];
    }

    // Get the rankings for Alice's scores
    vector<int> result = climbingLeaderboard(ranked, player);

    // Output the results
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}
