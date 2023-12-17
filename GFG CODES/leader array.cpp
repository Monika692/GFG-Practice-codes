public:
    vector<int> leaders(int a[], int n){
        vector<int> leadersList;

        for (int i = 0; i < n; i++) {
            int j;
            for (j = i + 1; j < n; j++) {
                if (a[i] <= a[j]) {
                    break; // Current element is not a leader
                }
            }

            if (j == n) {
                leadersList.push_back(a[i]);
            }
        }

        return leadersList;
    }
