#include<bits/stdc++.h>

using namespace std;

[[segment_tree]]

template<typename T> T Segment<T>::merge(T a, T b) {
    return a + b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M, K; cin >> N >> M >> K;
    Segment<long long> tree(N);
    for(int i = 0; i < N; ++i) {
        long long x; cin >> x;
        tree.update(i, x);
    }
    for(int i = 0; i < M + K; ++i) {
        long long cmd, a, b; cin >> cmd >> a >> b;
        if(cmd == 1) tree.update(a - 1, b);
        else cout << tree.query(a - 1, b - 1) << '\n';
    }
    return 0;
}