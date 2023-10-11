#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N, A, B;
        cin >> N >> A >> B;

        int count = 0;
        int P[N];
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int sum = P[i] + P[j];
                if (A <= sum && sum <= B) {
                    count++;
                }
            }
        }

        cout << "Case " << t << ": " << count << endl;
    }

    return 0;
}
