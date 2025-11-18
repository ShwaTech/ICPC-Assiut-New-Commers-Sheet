
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

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;


int main()
{
    shwa

    map<char, int> score;
    score['A'] = score['B'] = score['C'] = 0;

    for (int i = 0; i < 3; ++i) {
        string relation; cin >> relation;

        if (relation[1] == '>') score[relation[0]]++;
        else score[relation[2]]++;
    }

    vector<pair<int, char>> results;

    for (auto &s: score) {
        results.push_back({s.second, s.first});
    }

    sort(All(results));

    if (results[0].first == results[1].first || results[1].first == results[2].first) {
        cout << "Impossible\n";
    } else {
        for (auto &r: results) {
            cout << r.second;
        }
    }

    return 0;
}

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
//
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
//
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
//
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
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/O

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
