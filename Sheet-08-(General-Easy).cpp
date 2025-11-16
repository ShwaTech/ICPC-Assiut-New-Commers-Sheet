
// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//
//     for (int i = 0; i < N / 2; ++i) {
//         int j = N - 1 - i;
//
//         if (S[i] != S[j]) {
//             if (S[i] == '?') S[i] = S[j];
//             else if (S[j] == '?') S[j] = S[i];
//             else { cout << -1 << endl; return 0; }
//         } else if (S[i] == '?' && S[j] == '?') {
//             S[i] = S[j] = 'a';
//         }
//     }
//
//     if ((N & 1) && S[N/2] == '?') S[N/2] = 'a';
//
//     cout << S << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/B

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int W; cin >> W;
//
//     if (!(W & 1) && W > 2) cout << "YES\n";
//     else cout << "NO\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/C

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     ll sumA=0, sumB=0;
//
//     for (int i = 0; i < n; i++) {
//         int x; cin >> x;
//         sumA += x;
//     }
//     for (int i = 0; i < m; i++) {
//         int x; cin >> x;
//         sumB += x;
//     }
//
//     if (sumA == sumB) cout << "Yes\n";
//     else cout << "No\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/D

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int a, b; cin >> a >> b;
//
//     int years=0;
//
//     while (a <= b) {
//         a*=3; b*=2;
//         years++;
//     }
//
//     cout << years;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/E

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     int cnt=0;
//
//     while (n--) {
//         int p, q; cin >> p >> q;
//
//         if (q - p >= 2) cnt++;
//     }
//
//     cout << cnt;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/F

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     for (int i = 1; i <= n; ++i) {
//         if (i % 2 == 1) cout << string(m, '#');
//         else if (i % 4 == 2) cout << string(m-1, '.') << '#';
//         else if (i % 4 == 0) cout << '#' << string(m-1, '.');
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/G

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     vector<string>s(n+1);
//
//     for(int i = 0; i < n; i++) {
//         cin >> s[i];
//     }
//
//     int c=0;
//
//     for(int i = 1; i <= n; i++) {
//         if (s[i] != s[i-1]) c++;
//     }
//
//     cout << c;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/H

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     vector<int> a(n+1), p(n+1);
//
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//         p[a[i]] = i;
//     }
//
//     for (int i = 1; i <= n; i++) {
//         cout << p[i] << " ";
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/I

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     string S, T; cin >> S >> T;
//
//     int i=0;
//     for (auto &C : T) {
//         if (S[i] == C) i++;
//     }
//
//     cout << i+1;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/J

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     vector<int> lucky = {
//         4, 7, 44, 47, 74, 77,
//         444, 447, 474, 477,
//         744, 747, 774, 777
//     };
//
//     for (auto &x: lucky) {
//         if (n % x == 0) {
//             cout << "YES";
//             return 0;
//         }
//     }
//
//     cout << "NO";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/K

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// // Precompute Fibonacci and primality
// const int MAX_N = 50;
// long long fib[MAX_N + 1];
// bool is_prime_cache[MAX_N + 1];
//
// bool is_prime(long long n) {
//     if (n < 2) return false;
//     if (n == 2) return true;
//     if (n % 2 == 0) return false;
//     for (long long i = 3; i * i <= n; i += 2)
//         if (n % i == 0) return false;
//     return true;
// }
//
// void precompute() {
//     fib[1] = 0;
//     fib[2] = 1;
//     for (int i = 3; i <= MAX_N; ++i)
//         fib[i] = fib[i - 1] + fib[i - 2];
//
//     for (int i = 1; i <= MAX_N; ++i)
//         is_prime_cache[i] = is_prime(fib[i]);
// }
//
// int main() {
//     shwa
//
//     precompute();
//
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         cout << (is_prime_cache[N] ? "prime" : "not prime") << '\n';
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/L

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     vector<int> cards(N);
//     for (auto &ci: cards) cin >> ci;
//
//     int score[2] {0, 0};
//     int turn = 0;
//
//     int left=0, right=N-1;
//     while (left <= right) {
//         int pick;
//         if (cards[left] > cards[right]) pick = cards[left++];
//         else pick = cards[right--];
//
//         score[turn] += pick;
//
//         turn ^= 1;
//     }
//
//     cout << score[0] << " " << score[1];
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/M

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     vector<int> X(3);
//     for (auto &Xi: X) cin >> Xi;
//
//     sort(All(X));
//
//     cout << (X[1]-X[0]) + (X[2]-X[1]);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/N

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int r, c; cin >> r >> c;
//
//     vector<string> cake(r);
//     for (int i = 0; i < r; ++i) cin >> cake[i];
//
//     vector<bool> cleanRow(r, true);
//     vector<bool> cleanCol(c, true);
//
//     for (int i = 0; i < r; ++i) {
//         for (int j = 0; j < c; ++j) {
//             if (cake[i][j] == 'S') {
//                 cleanRow[i] = false;
//                 cleanCol[j] = false;
//             }
//         }
//     }
//
//     int eaten=0;
//
//     for (int i = 0; i < r; ++i) {
//         if (cleanRow[i]) eaten += c;
//     }
//
//     for (int j = 0; j < c; ++j) {
//         if (cleanCol[j]) {
//             for (int i = 0; i < r; ++i) {
//                 if (!cleanRow[i]) eaten++;
//             }
//         }
//     }
//
//     cout << eaten;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/O

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n, x; cin >> n >> x;
//
//     ll packs=x; int c=0;
//
//     while (n--) {
//         char s; int d; cin >> s >> d;
//
//         if (s == '+') packs += d;
//         else if (s == '-' && packs >= d) packs -= d;
//         else c++;
//     }
//
//     cout << packs << " " << c;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/P

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     int c=0, p=0;
//
//     for (int i = 0; i < n; ++i) {
//         int x; cin >> x;
//
//         if (x == -1) {
//             if (p) p--;
//             else c++;
//         } else p += x;
//     }
//
//     cout << c;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Q

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     int curr=0, ans=0;
//
//     for (auto & C:  S) {
//         int next = C - 'a';
//         int diff = abs(curr - next);
//         ans += min(diff, 26-diff);
//         curr = next;
//     }
//
//     cout << ans << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/R

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     for (auto &ai : a) cin >> ai;
//
//     int maxVal = *max_element(All(a));
//     int idxMax = -1;
//     for (int i = 0; i < n; i++) {
//         if (a[i] == maxVal) {
//             idxMax = i;
//             break;
//         }
//     }
//
//     int minVal = *min_element(All(a));
//     int idxMin = -1;
//     for (int i = n - 1; i >= 0; i--) {
//         if (a[i] == minVal) {
//             idxMin = i;
//             break;
//         }
//     }
//
//     int moves = idxMax + (n - 1 - idxMin);
//     if (idxMax > idxMin) moves--;
//
//     cout << moves << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n, k; cin >> n >> k;
//
//     vector<char> v(k+1);
//     for (int i = 0; i <= k; ++i) v[i] = char('0' + i);
//
//     int c=0;
//
//     while (n--) {
//         string s; cin >> s;
//
//         bool found=true;
//
//         for (auto &c : v) {
//             if (s.find(c) == string::npos) {
//                 found=false;
//                 break;
//             }
//         }
//
//         if (found) c++;
//     }
//
//     cout << c << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/T

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     string New_S = "";
//
//     for (int i = 0; i < S.length(); ++i) {
//         if (S[i] != '+') New_S += S[i];
//     }
//
//     sort(All(New_S));
//
//     for (int i = 0; i < New_S.length(); ++i) {
//         cout << New_S[i] << (i == New_S.length() - 1 ? ' ' : '+');
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/U

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//
//     if (n > 0) cout << n;
//     else {
//         int lst_1 = n / 10;
//         int lst_2 = (n / 100) * 10 + (n % 10);
//         cout << max({n, lst_1, lst_2});
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/V

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     vector<pair<int, int>> rates(n, {4130, 4130});
//
//     for (int i = 0; i < n; ++i) cin >> rates[i].first >> rates[i].second;
//
//     for (int i = 0; i < n; ++i)
//         if (rates[i].first != rates[i].second) { cout << "rated"; return 0; }
//
//     for (int i = 1; i < n; ++i)
//         if (rates[i-1].first < rates[i].first) { cout << "unrated"; return 0; }
//
//     cout << "maybe";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/W

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     if (s1 == s2) cout << -1;
//     else cout << max(s1.length(), s2.length());
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/X

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// bool Is_Prime (int n) {
//     if (n < 2) return false;
//     if (n == 2) return true;
//     if (n % 2 == 0) return false;
//     for (int i = 3; i*i <= n; i += 2)
//         if (n % i == 0) return false;
//     return true;
// }
//
// vector<int> Prime_51 (int n) {
//     vector<int> res;
//
//     for (int i = 2; i <= n; ++i)
//         if (Is_Prime(i)) res.push_back(i);
//
//     return res;
// }
//
//
// int main() {
//     shwa
//
//     int x, y; cin >> x >> y;
//
//     if (!Is_Prime(x) || !Is_Prime(y)) { cout << "NO"; return 0; }
//
//     vector<int> primes = Prime_51(51);
//
//     bool flag = false;
//
//     for (int i = 0; i < primes.size(); ++i) {
//         if (primes[i] == x && primes[i+1] == y) flag=true;
//     }
//
//     if (flag) cout << "YES";
//     else cout << "NO";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Y

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n; cin >> n;
//     vector<int> ones, twos, threes;
//
//     for (int i = 1; i <= n; i++) {
//         int T; cin >> T;
//
//         if (T == 1) ones.push_back(i);
//         else if (T == 2) twos.push_back(i);
//         else threes.push_back(i);
//     }
//
//     int w = min({(int)ones.size(), (int)twos.size(), (int)threes.size()});
//     cout << w << endl;
//
//     for (int i = 0; i < w; i++)
//         cout << ones[i] << " " << twos[i] << " " << threes[i] << "\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Z

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
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
//     string S; cin >> S;
//
//     string ans="";
//
//     while (n--) {
//         if (n % 2 != 0) {
//             ans += S[0];
//             S.erase(S.begin());
//         } else {
//             ans = S[0] + ans;
//             S.erase(S.begin());
//         }
//     }
//
//     reverse(All(ans));
//
//     cout << ans << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------
