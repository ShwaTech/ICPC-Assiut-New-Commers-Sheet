
// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/A

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
//     int n, m, q; cin >> n >> m >> q;
//
//     vector<vector<char>> ans(n, vector<char>(m, '.'));
//
//     int r1, c1, r2, c2; char x;
//
//     while (q--) {
//         cin >> r1 >> c1 >> r2 >> c2 >> x;
//         r1--, c1--; r2--; c2--;
//
//         int mn_r = min(r1, r2);
//         int mn_c = min(c1, c2);
//         int mx_r = max(r1, r2);
//         int mx_c = max(c1, c2);
//
//         for (int i = mn_r; i <= mx_r; ++i) {
//             for (int j = mn_c; j <= mx_c; ++j) {
//                 ans[i][j] = x;
//             }
//         }
//     }
//
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (ans[i][j]) cout << ans[i][j];
//         }
//         if (i != n-1) cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/B

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
//     if (n == 0) {
//         cout << 1 << endl;
//         return 0;
//     }
//
//     // Last 8 -> 8^1=8, 8^2=64, 8^3=512, 8^4=4096, 8^5=32768, 8^6=262144 -> Repeats Itself
//
//     vector<int> cycle {6, 8, 4, 2};
//
//     cout << cycle[n % 4] << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/C

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
//     int s, n; cin >> s >> n;
//
//     vector<pair<int, int>> dragon(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> dragon[i].first >> dragon[i].second;
//     }
//
//     sort(All(dragon));
//
//     for (int i = 0; i < n; ++i) {
//         int x = dragon[i].first;
//         int y = dragon[i].second;
//
//         if (s <= x) {
//             cout << "NO";
//             return 0;
//         }
//         s += y;
//     }
//
//     cout << "YES";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/D

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
//     int n, b, d; cin >> n >> b >> d;
//
//     int waste=0, c=0;
//
//     for (int i = 0; i < n; ++i) {
//         int x; cin >> x;
//
//         if (x > b) continue;
//
//         waste += x;
//         if (waste > d) {
//             c++;
//             waste = 0;
//         }
//     }
//
//     cout << c;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/E

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
//     char shift;
//     string typed;
//     cin >> shift >> typed;
//
//     string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
//     string original = "";
//
//     for (char & c : typed) {
//         int position = keyboard.find(c);
//
//         if (shift == 'R') original += keyboard[position-1];
//         else original += keyboard[position+1];
//     }
//
//     cout << original;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/F

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
//     vector<int> fm(m);
//     for(int i = 0; i < m; ++i) cin >> fm[i];
//
//     sort(All(fm));
//
//     int mn = INT_MAX;
//
//     for (int i = 0; i <= m-n; ++i) mn = min(mn, fm[i+n-1] - fm[i]);
//
//     cout << mn;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/G

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define RAll(v) v.rbegin(),v.rend()
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
//     vector<int> a(n);
//     for (auto &ai: a) cin >> ai;
//
//     sort(RAll(a));
//
//     int total_sum = accumulate(a.begin(), a.end(), 0);
//
//     int taken_sum=0, c=0;
//
//     for (auto coin: a) {
//         taken_sum += coin;
//         c++;
//         if (taken_sum > total_sum - taken_sum) break;
//     }
//
//     cout << c;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/H

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
//     string s; cin >> s;
//     vector<int> x(n+1);
//     for (int i = 0; i < n; ++i) cin >> x[i];
//
//     bool no_answer = true;
//     int mn = INT_MAX;
//
//     for (int i = 0; i <= n; ++i) {
//         if (s[i] == 'R' && s[i+1] == 'L') {
//             int Time = (x[i+1] - x[i]) / 2;
//             mn = min(mn, Time);
//             no_answer = false;
//         }
//     }
//
//     if (no_answer) {
//         cout << -1;
//         return 0;
//     }
//
//     cout << mn << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/I

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
//     vector<int> cities(n);
//     for (auto &city: cities) cin >> city;
//
//     for (int i = 0; i < n; ++i) {
//         int mn=INT_MAX;
//         int curr=cities[i];
//
//         if (i > 0) mn = min(mn, abs(curr - cities[i-1]));
//         if (i < n-1) mn = min(mn, abs(cities[i+1] - curr));
//
//         int mx = max(abs(curr - cities[0]), abs(curr - cities[n-1]));
//
//         cout << mn << " " << mx << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/J

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
//     vector<int> a(n+1);
//     for (int i = 1; i <= n; ++i) cin >> a[i];
//
//     int m; cin >> m;
//     while (m--) {
//         int x, y; cin >> x >> y;
//
//         if (x > 1) a[x-1] += y-1;
//         if (x < n) a[x+1] += a[x]-y;
//         a[x] = 0;
//     }
//
//     for (int i = 1; i <= n; ++i) cout << a[i] << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/K

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
//     int n, m; cin >> n >> m;
//
//     vector<string> Grid(n);
//
//     for (int i = 0; i < n; ++i)
//         cin >> Grid[i];
//
//     vector<tuple<int, int, int>> Stars;
//
//     vector<string> Draw (n, string(m, '.'));
//
//     for (int i = 0; i < n-1; ++i) {
//         for (int j = 0; j < m-1; ++j) {
//             if (Grid[i][j] == '*') {
//                 int size = 0;
//
//                 while (true) {
//                     int x1 = i - (size + 1);  // Up
//                     int x2 = i + (size + 1);  // Down
//                     int y1 = j - (size + 1);  // Left
//                     int y2 = j + (size + 1);  // Right
//
//                     if (x1 < 0 || x2 >= n || y1 < 0 || y2 >= m) break;
//                     if (Grid[x1][j] != '*' || Grid[x2][j] != '*' || Grid[i][y1] != '*' || Grid[i][y2] != '*') break;
//
//                     size++;
//                 }
//
//                 if (size >= 1) {
//                     Stars.push_back({i + 1, j + 1, size});
//                     Draw[i][j] = '*';
//                     for (int s = 1; s <= size; s++) {
//                         Draw[i - s][j] = '*';
//                         Draw[i + s][j] = '*';
//                         Draw[i][j - s] = '*';
//                         Draw[i][j + s] = '*';
//                     }
//                 }
//             }
//         }
//     }
//
//     if (Draw != Grid) {
//         cout << -1 << endl;
//         return 0;
//     }
//
//     cout << (int)Stars.size() << endl;
//     for (auto &[a, b, c]: Stars)
//         cout << a << " " << b << " " << c << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/L

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
//     int N; cin >> N;
//
//     if (N == 1) {
//         cout << -1 << endl;
//         return 0;
//     }
//
//     vector<int> Diff(N);
//     for (auto &di: Diff) cin >> di;
//
//     // Take Care !!!!
//     // replacements = sum(cnt - 1) is exactly the number of problems to change so all difficulties become unique.
//
//     unordered_map<int, int> freq;
//     freq.reserve(N*2);
//     for (int x : Diff)
//         freq[x]++;
//
//     int replaced=0;
//     for (auto &[val, cnt]: freq)
//         if (cnt > 1)
//             replaced += (cnt-1);
//
//     if (replaced == 0) cout << -1 << endl;
//     else cout << replaced << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/M

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
//     int N = S.length();
//
//     char firstChar=S[0]; bool same = true;
//     for (int i = 1; i < N; i++)
//         if (firstChar != S[i])
//             same = false;
//
//     if (same) {
//         cout << 0 << endl;
//         return 0;
//     }
//
//     bool palindrome = true;
//     for (int i = 0; i < N / 2; ++i) {
//         if (S[i] != S[N - i - 1])
//             palindrome = false;
//     }
//
//     if (palindrome)
//         cout << N - 1 << endl;
//     else
//         cout << N << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/N

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
//     int n, m, k; cin >> n >> m >> k;
//
//     vector<vector<int>> Grid(n, vector<int>(m));
//     for (int i = 0; i < n; ++i)
//         for (int j = 0; j < m; ++j)
//             cin >> Grid[i][j];
//
//     // iota -> fills a range with consecutive increasing values.
//     vector<int> rowMap(n), colMap(m);
//     iota(All(rowMap), 0);
//     iota(All(colMap), 0);
//
//     while (k--) {
//         char s; int x, y; cin >> s >> x >> y;
//
//         x--, y--;
//
//         if (s == 'g') cout << Grid[rowMap[x]][colMap[y]] << endl;
//         else if (s == 'r') swap(rowMap[x], rowMap[y]);
//         else if (s == 'c') swap(colMap[x], colMap[y]);
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/O

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
//     int N; cin >> N;
//
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     // no two equal numbers are next to each other
//     // if and only if the most frequent number doesn’t appear too many times.
//     // Possible => mx <= (n + 1) / 2 Otherwise => Impossible
//
//     int mx=0;
//     for (int i = 0; i < N; ++i)
//         mx = max(mx, (int)count(All(A), A[i]));
//
//     cout << (mx <= (N+1)/2 ? "YES" : "NO") << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/P

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
//     ll X; cin >> X;
//
//     // Just Use Pin and Paper, and You Will Reach it.
//
//     if (X & 1)
//         cout << -(X + 1) / 2 << endl;
//     else
//         cout << X / 2 << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/Q

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
//     int N, M; cin >> N >> M;
//
//     int mn=0;
//
//     if (N % 2 == 0) mn = N/2; // Each Step is With Value 2
//     else mn = (N/2)+1;
//
//     for (int i = mn; i <= N; ++i) {
//         if (i % M == 0) {
//             cout << i << endl;
//             return 0;
//         }
//     }
//
//     cout << -1 << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/R

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
//     string s, extra;
//     cin >> s >> extra;
//
//     int pos = s.find('|');
//     string left = s.substr(0, pos);
//     string right = s.substr(pos + 1);
//
//     int L = left.size(), R = right.size();
//     int remain = extra.size();
//
//     int diff = abs(L - R);
//
//     // Not enough weights to balance == Already Fine
//     if (diff > remain) {
//         cout << "Impossible\n";
//         return 0;
//     }
//
//     // Use part of extra to equalize lengths
//     int use = diff;
//     string rest = extra.substr(use);
//
//     if (L < R) left += extra.substr(0, use);
//     else right += extra.substr(0, use);
//
//     // After equalizing, remaining letters must be even
//     if (rest.size() % 2 != 0) {
//         cout << "Impossible\n";
//         return 0;
//     }
//
//     // Split remaining equally
//     int half = rest.size() / 2;
//     left += rest.substr(0, half);
//     right += rest.substr(half);
//
//     cout << left << '|' << right << "\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/S

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
//     vector<ll> a(n);
//     for (auto &ai: a) cin >> ai;
//
//     sort(All(a));
//
//     for (int i = 0; i < n - 2; ++i) {
//         if (a[i] + a[i+1] > a[i+2]) {
//             cout << "YES\n";
//             return 0;
//         }
//     }
//
//     cout << "NO\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/T

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
//     int n, t; cin >> n >> t;
//
//     if (n == 1 && t > 9) {
//         cout << -1 << endl;
//         return 0;
//     }
//
//     if (t == 10) {
//         cout << 1;
//         for (int i = 1; i < n; i++) cout << 0;
//     } else {
//         cout << t;
//         for (int i = 1; i < n; i++) cout << 0;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/U

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

// 💡 What does it mean to have exactly 3 divisors?
// If a number t has exactly 3 distinct positive divisors,
// then those divisors must be:
//      1, p, p²
// for some prime number p.
// Because:
// 1 divides everything
// p divides p²
// and p² divides itself
// ✅ Total = 3 divisors
// So a T-prime number = square of a prime.


int main()
{
    shwa

    int n; cin >> n;

    vector<ll> x(n);
    for (auto &xi: x) cin >> xi;

    const int MAX=1e6;  // sqrt(1e12)
    vector<bool> sieve_primes(MAX+1, true);
    sieve_primes[0] = sieve_primes[1] = false;

    // Sieve of Eratosthenes
    for (int i = 2; i * i  <= MAX; ++i) {
        if (sieve_primes[i]) {
            for (int j = i*i; j <= MAX; j += i) {
                sieve_primes[j] = false;
            }
        }
    }

    unordered_set<ll> T_Primes;
    for (int i = 2; i <= MAX; ++i)
        if (sieve_primes[i])
            T_Primes.insert(1LL * i * i);

    for (auto xi: x) {
        if (T_Primes.count(xi)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/V

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
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/W

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
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/X

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
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/Y

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
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/Z

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
//     return 0;
// }

// -------------------------------------------------------------------------------------------
