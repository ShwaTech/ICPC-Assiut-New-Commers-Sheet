
// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/A

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     string S; cin >> S;
//
//     int N = S.size();
//     int L = 0, R = N-1;
//
//     while (L <= R) {
//         if (S[L] == S[R]) {
//             if (S[L] == '?') S[L] = S[R] = 'a';
//             L++; R--;
//         } else {
//             if (S[L] == '?') S[L] = S[R];
//             else if (S[R] == '?') S[R] = S[L];
//             else {
//                 cout << -1 << endl;
//                 return 0;
//             }
//             L++; R--;
//         }
//     }
//
//     cout << S << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/B

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
// int main()
// {
//     shwa
//
//     string S, T; cin >> S >> T;
//
//     int N = S.size(), M = T.size();
//
//     if (S == T) {
//         cout << 0;
//         return 0;
//     }
//
//     int i=1, C=0;
//     while (S[N-i] == T[M-i]) {
//         i++, C++;
//     }
//
//     cout << (N - C) + (M - C) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/C

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n, m; cin >> n >> m;
//
//     vector<int> a(n), b(m);
//
//     for (auto &ai : a) cin >> ai;
//     for (auto &bi : b) cin >> bi;
//
//     ll sum_a = 0, sum_b = 0;
//
//     for (auto ai : a) sum_a += ai;
//     for (auto bi : b) sum_b += bi;
//
//     if (sum_a == sum_b) cout << "Yes" << endl;
//     else cout << "No" << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/D

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     string s1, s2; cin >> s1 >> s2;
//
//     int n = s1.size(), m = s2.size();
//
//     if (n != m) {
//         cout << "NO\n";
//         return 0;
//     }
//
//     vector<int> mismatch;
//     for (int i = 0; i < n; i++) {
//         if (s1[i] != s2[i]) {
//             mismatch.push_back(i);
//         }
//     }
//
//     if (mismatch.size() == 2) {
//         // Only 2 Mismatches -> Just Swap
//         swap(s1[mismatch[0]], s1[mismatch[1]]);
//         cout << (s1 == s2 ? "YES\n" : "NO\n");
//     } else if (mismatch.size() == 0) {
//         // Found Some Duplicates
//         set<char> st (All(s1));
//         cout << (st.size() < s1.size() ? "YES\n" : "NO\n");
//     } else {
//         cout << "NO\n";
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/E

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int T; cin >> T;
//     while(T--) {
//         ll n; ll s; cin >> n >> s;
//
//         vector<ll> ans;
//         for (ll i = n; i >= 1; --i) {
//             if (s == 0) { break; }
//             if (i <= s) {
//                 ans.push_back(i);
//                 s -= i;
//             }
//         }
//
//         if (s != 0) {
//             cout << -1 << endl;
//         } else {
//             cout << ans.size();
//             for (auto &a : ans) cout << " " << a;
//             cout << endl;
//         }
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/F

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n, m; cin >> n >> m;
//
//     vector<string> gradebook(n);
//
//     for (int i = 0; i < n; ++i)
//         cin >> gradebook[i];
//
//     vector<bool> successful(n, false);
//
//     for (int col = 0; col < m; ++col) {
//         char mx='0';
//
//         for (int row = 0; row < n; ++row) {
//             mx = max(mx, gradebook[row][col]);
//         }
//
//         for (int row = 0; row < n; ++row) {
//             if (gradebook[row][col] == mx) successful[row] = true;
//         }
//     }
//
//     int c=0;
//     for (bool success: successful) if (success) c++;
//
//     cout << c << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/G

// #include <bits/stdc++.h>
// #define ll long long
// #define ld long double
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     ll n; cin >> n;
//
//     vector<ll> a(n);
//     for (auto &ai: a) {
//         cin >> ai;
//     }
//
//     // (Find That Smallest x) such that:
//     // x^n > product
//     // log(x^n) > log(product)
//     // n * log(x) > log(p1 * p2 * p3 * ... * pn)
//     // n * log(x) > log(p1) + log(p2) + log(p3) + ... + log(pn)
//     // log(x) > [log(p1) + log(p2) + log(p3) + ... + log(pn)] / n      // add base 10
//     // 10 ^ log(x) > 10 ^ ([log(p1) + log(p2) + log(p3) + ... + log(pn)] / n)
//     // x > 10 ^ ([log(p1) + log(p2) + log(p3) + ... + log(pn)] / n)
//
//     ld log_sum=0;
//     for (ll i = 0; i < n; ++i) log_sum += log10(a[i]);
//
//     ld right_side = powl(10, log_sum/n);
//
//     cout << (ll)right_side + 1 << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/H

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     string x; cin >> x;
//
//     for (int i = 0; i < x.size(); ++i) {
//         int di = x[i] - '0';
//         int inv = 9 - di;
//
//         if (inv < di) {
//             if (i == 0 && inv == 0) { continue; }
//             x[i] = inv + '0';
//         }
//     }
//
//     cout << x << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/I

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     map<char, int> score;
//     score['A'] = score['B'] = score['C'] = 0;
//
//     for (int i = 0; i < 3; ++i) {
//         string relation; cin >> relation;
//
//         if (relation[1] == '>') score[relation[0]]++;
//         else score[relation[2]]++;
//     }
//
//     vector<pair<int, char>> results;
//
//     for (auto &s: score) {
//         results.push_back({s.second, s.first});
//     }
//
//     sort(All(results));
//
//     if (results[0].first == results[1].first || results[1].first == results[2].first) {
//         cout << "Impossible\n";
//     } else {
//         for (auto &r: results) {
//             cout << r.second;
//         }
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/J

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int r1, r2, c1, c2, d1, d2;
//     cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
//
//     for (int a = 1; a <= 9; ++a) {
//         for (int b = 1; b <= 9; ++b) {
//             for (int c = 1; c <= 9; ++c) {
//                 for (int d = 1; d <= 9; ++d) {
//                     if (a != b && a != c && a != d && b != c && b != d && c != d) {
//                         if (a+b == r1 && c+d == r2 && a+c == c1 && b+d == c2 && a+d == d1 && b+c == d2) {
//                             cout << a << " " << b << endl;
//                             cout << c << " " << d << endl;
//                             return 0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//
//     cout << -1 << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/K

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n; cin >> n;
//
//     vector<int> freq(n+1);
//
//     int mx = n;
//
//     for (int i = 0; i < n; i++) {
//         int x; cin >> x;
//
//         freq[x] = 1;
//
//         while (freq[mx]) {
//             cout << mx << " ";
//             mx--;
//         }
//
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/L

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     double L, S1, S2; cin >> L >> S1 >> S2;
//
//     int n; cin >> n;
//     for (int i = 0; i < n; i++) {
//         double q; cin >> q;
//
//         // Geometry Rule:
//         //// For Calculating Time for 2 Squares - Given Areas and Overlap between them
//         double time = sqrt(2) * (L - sqrt(q)) / (S2 - S1);
//
//         cout << fixed << setprecision(6) << abs(time) << endl;
//     }
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/M

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     string S; cin >> S;
//     int K; cin >> K;
//
//     int N = S.size();
//
//     // Count Real Letters and Special Operators
//     int letters=0, stars=0, questions=0;
//     for (char C: S) {
//         if (C == '*') stars++;
//         else if (C == '?') questions++;
//         else letters++;
//     }
//
//     int minLen = letters - stars - questions;
//     int maxLen = (stars > 0 ? INT_MAX : letters); // Because * Can Make The Letter Repeated ??
//
//     // Out Of The Problem Scope
//     if (K < minLen || K > maxLen) {
//         cout << "Impossible\n";
//         return 0;
//     }
//
//     string result;
//     int extra = K - minLen; // how many chars we still need to add
//
//     for (int i = 0; i < N; ++i) {
//         if (S[i] == '?' || S[i] == '*') continue;
//
//         if (i+1 < N && (S[i+1] == '?' || S[i+1] == '*')) {
//             if (extra) {
//                 result += S[i];
//                 extra--;
//
//                 // As The * Can Make The Letter be Repeated
//                 if (N && S[i+1] == '*') {
//                     while (extra) {
//                         result += S[i];
//                         extra--;
//                     }
//                 }
//             }
//         } else {
//             result += S[i];
//         }
//     }
//
//     cout << result << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/N

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     ll n, m, k; cin >> n >> m >> k;
//
//     cout << min({n, k, (n+m)/2}) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/O

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

bool IS_Prime (const ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (ll i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}


int main()
{
    shwa

    ll n; cin >> n;
    int x; cin >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> op(n);
    for (int i = 0; i < n; i++) cin >> op[i];

    for (ll i = 0; i < n; ++i) {
        if (op[i] == 1) {
            if (!IS_Prime(a[i])) {
                cout << -1 << " ";
            } else {
                if (x == 0)
                    cout << a[i] % 10 << " ";
                else if (a[i] == 2)
                    cout << 0 << " ";
                else
                    cout << 5 << " ";
            }
        } else {
            if (x == 0)
                cout << a[i] % 10 << " ";
            else
                cout << 0 << " ";
        }
    }

    return 0;
}

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/P

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/Q

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/R

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/S

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/T

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/U

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/V

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/W

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/X

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/Y

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/Z

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------
