#include <bits/stdc++.h>
using namespace std;

//STL
//// Rotate Functions
// void rotateLeft(vi &v, int k) {
//     rotate(v.begin(), v.begin() + (k % v.size()), v.end());
// }

// void rotateRight(vi &v, int k) {
//     rotate(v.begin(), v.end() - (k % v.size()), v.end());
// }

// // Contains Function
// bool contains(vi &v, int x) {
//     return find(all(v), x) != v.end();
// }

// bool contains(string &s, char c) {
//     return s.find(c) != string::npos;
// }

// bool contains(string &s, string sub) {
//     return s.find(sub) != string::npos;
// }

// //  Bitwise Operations
// bool isPowerOfTwo(int x) { return (x > 0) && ((x & (x - 1)) == 0); }
// int countSetBits(int x) { return __builtin_popcountll(x); }
// int highestPowerOfTwo(int x) { return x ? (1LL << (63 - __builtin_clzll(x))) : 0; }
// int lowestSetBit(int x) { return x & -x; }
// int toggleBit(int x, int pos) { return x ^ (1LL << pos); }
// bool checkBit(int x, int pos) { return (x & (1LL << pos)) != 0; }
// int setBit(int x, int pos) { return x | (1LL << pos); }
// int clearBit(int x, int pos) { return x & ~(1LL << pos); }

// // STL Data Structures
// void STLExamples() {
//     // Vector
//     vi v = {5, 2, 8, 1};
//     sort(all(v));
//     reverse(all(v));
//     v.pb(10);
//     v.erase(v.begin() + 1);
    
//     // Rotate Examples
//     rotateLeft(v, 2);
//     rotateRight(v, 2);
    
//     // Check if contains element
//     if (contains(v, 5)) cout << "Vector contains 5\n";
    
//     // String
//     string s1 = "hello world";
//     reverse(all(s1));

//     if (contains(s1, 'o')) cout << "String contains 'o'\n";
//     if (contains(s1, "world")) cout << "String contains 'world'\n";

//     // Pair
//     pii p = {1, 5};
//     vpi vp = {{1, 2}, {3, 4}};
    
//     // Set
//     set<int> s = {5, 2, 8, 1};
//     s.insert(3);
//     s.erase(2);
    
//     // Map
//     map<int, string> mp;
//     mp[1] = "Alice";
//     mp[2] = "Bob";

//     // Priority Queue (Max-Heap)
//     priority_queue<int> pq;
//     pq.push(3);
//     pq.push(10);
//     pq.push(1);
    
//     // Min-Heap
//     priority_queue<int, vector<int>, greater<int>> minHeap;
    
//     // Stack
//     stack<int> st;
//     st.push(1);
//     st.push(2);
    
//     // Queue
//     queue<int> q;
//     q.push(1);
//     q.push(2);
    
//     // Deque
//     deque<int> dq;
//     dq.push_front(5);
//     dq.push_back(10);

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
