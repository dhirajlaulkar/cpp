#include <bits/stdc++.h>
using namespace std;

// Shortcuts
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

// Fast I/O
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Modular Arithmetic
int modAdd(int a, int b, int m = MOD) { return (a % m + b % m) % m; }
int modMul(int a, int b, int m = MOD) { return (a % m * b % m) % m; }
int modExp(int base, int exp, int m = MOD) {
    int res = 1;
    while (exp) {
        if (exp % 2) res = modMul(res, base, m);
        base = modMul(base, base, m);
        exp /= 2;
    }
    return res;
}
int modInv(int x, int m = MOD) { return modExp(x, m - 2, m); }

// GCD & LCM
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// Binary Search
int binSearch(vi &arr, int x) {
    int l = 0, r = arr.size() - 1, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (arr[mid] == x) return mid;
        (arr[mid] < x) ? (l = mid + 1) : (r = mid - 1);
    }
    return -1;
}

// Main Function
void solve() {
    // Write your code here
}

int32_t main() {
    fastIO();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
