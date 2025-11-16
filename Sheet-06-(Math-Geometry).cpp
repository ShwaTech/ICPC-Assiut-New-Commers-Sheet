
// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A

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
//     unsigned ll N; cin >> N;
//
//     cout << ((N && (N & (N - 1)) == 0) ? "YES" : "NO");
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// bool IS_PRIME (ll N) {
//     if (N < 2) return false;
//     if (N == 2) return true;
//     if (N % 2 == 0) return false;
//
//     for (ll i = 3; i * i <= N; i += 2) {
//         if (N % i == 0) return false;
//     }
//     return true;
// }
//
//
// int main()
// {
//     shwa
//
//     ll N; cin >> N;
//
//     if (IS_PRIME(N))
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C

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
//     ll L, R; cin >> L >> R;
//
//     if (L > R) swap(L, R);
//
//     ll sum = 0, sum_even = 0, sum_odd = 0;
//
//     for (ll i = L; i <= R; ++i) {
//         sum += i;
//         if (i % 2 == 0) sum_even += i;
//         else sum_odd += i;
//     }
//
//     cout << sum << endl;
//     cout << sum_even << endl;
//     cout << sum_odd << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/D

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
//     ll A, B, Q; cin >> A >> B >> Q;
//
//     switch ((Q - 1) % 3) {
//         case 0: cout << A << endl; break;
//         case 1: cout << B << endl; break;
//         case 2: cout << (A ^ B) << endl; break;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/E

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
//     ll N; cin >> N;
//
//     // k² + k ≤ 2N.
//     // k² + k – 2N ≤ 0.
//     // k² + k – 2N = 0.
//     // k = [–b ± √(b² – 4ac)] / (2a)
//     // -> here a = 1, b = 1, c = –2N
//     // k = [–1 ± √(1 + 8N)] / 2.
//
//     ll k = (sqrt(1 + 8 * N) - 1) / 2;
//
//     cout << k;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/F

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
//     int r1, c1; cin >> r1 >> c1;
//     vector<vector<int>> A(r1, vector<int>(c1));
//
//     for (int i = 0; i < r1; i++)
//         for (int j = 0; j < c1; j++)
//             cin >> A[i][j];
//
//     int r2, c2;  cin >> r2 >> c2;
//     vector<vector<int>> B(r2, vector<int>(c2));
//
//     for (int i = 0; i < r2; i++)
//         for (int j = 0; j < c2; j++)
//             cin >> B[i][j];
//
//
//     if (c1 != r2) return 0;
//
//     // result matrix of size r1 × c2
//     vector<vector<int>> res(r1, vector<int>(c2, 0));
//
//     for (int i = 0; i < r1; ++i)
//         for (int k = 0; k < c1; ++k)
//             for (int j = 0; j < c2; ++j)
//                 res[i][j] += A[i][k] * B[k][j];
//
//     for (const auto& row : res) {
//         for (size_t j = 0; j < row.size(); ++j) {
//             cout << row[j];
//             if (j + 1 != row.size()) cout << ' ';
//         }
//         cout << '\n';
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/G

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
//     ll N; cin >> N;
//
//     ll res = 0;
//
//     for (ll i = 1; i * i <= N; i++) {
//         if (N % i == 0) {
//             res += i;                   // Small Divisor
//
//             // Just Trace (Fantastic)
//             if (i != N / i)
//                 res += (N / i);         // Large Divisor
//         }
//     }
//
//     cout << res << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/H

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// ll GCD (ll A, ll B) {
//     if (B == 0) return A;
//
//     return GCD(B, A%B);
// }
//
// ll LCM (ll A, ll B) {
//     return (A * B) / GCD(A, B);
// }
//
// int main()
// {
//     shwa
//
//     ll A, B; cin >> A >> B;
//
//     // cout << __gcd(A, B) << " " << lcm(A, B) << endl;
//     cout << GCD(A, B) << " " << LCM(A, B) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/I

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll Summation (ll N) {
//     return N * (N + 1) / 2;
// }
//
// int main()
// {
//     shwa
//
//     ll A, B, X; cin >> A >> B >> X;
//
//     if (A > B) swap(A, B);
//
//     cout << Summation(B / X) * X - Summation((A - 1) / X)  * X;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/J

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// vector<ll> Prime_Factors (ll N) {
//     vector<ll> res;
//
//     while (N % 2 == 0) {
//         res.push_back(2);
//         N /= 2;
//     }
//
//     for (ll i = 3; i * i < N; i += 2) {
//         while (N % i == 0) {
//             res.push_back(i);
//             N /= i;
//         }
//     }
//
//     if (N > 2) res.push_back(N);
//
//     return res;
// }
//
//
// int main()
// {
//     shwa
//
//     ll N; cin >> N;
//
//     vector<ll> ans(N);
//     vector<int> freq(N);
//
//     ans = Prime_Factors(N);
//
//     for (auto i = 0; i < ans.size(); i++) freq[ans[i]]++;
//
//     auto it = unique(All(ans));
//     ans.erase(it, ans.end());
//
//     for (auto i = 0; i < ans.size(); i++) {
//         cout << "(";
//         if (freq[ans[i]] >= 2) cout << ans[i] << "^" << freq[ans[i]] << ")";
//         else cout << ans[i] << "^1)";
//
//         if (i != ans.size() - 1) cout << "*";
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/K

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll Factorial(int N) {
//     if (N == 0) return 1;
//     if (N == 1) return 1;
//
//     return N * Factorial(N - 1);
// }
//
// int main()
// {
//     shwa
//
//     int N, R; cin >> N >> R;
//
//     ll NFac = Factorial(N), RFac = Factorial(R), N_RFac = Factorial(N - R);
//
//     ll comb = NFac / (RFac * N_RFac);
//     ll perm = NFac / N_RFac;
//
//     cout << comb << " " << perm;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/L

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
//     vector<int> curr;
//     for (int i = 0; i < N; ++i) {
//         curr.push_back(1);  // rightmost element
//
//         for (int j = i - 1; j > 0; --j)
//             curr[j] += curr[j - 1];  // update in reverse
//
//         for (int val : curr) cout << val << ' ';
//
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/M

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
//     string Nstr;
//     int X;
//     cin >> Nstr >> X;
//
//     int rem = 0;
//     for (char c : Nstr) rem = (rem * 10LL + c - '0') % X;
//
//     cout << (rem == 0 ? "YES" : "NO") << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/M

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int CharToInt (char c) {
//     if (isdigit(c)) return c - '0';
//
//     return toupper(c) - 'A' + 10;
// }
//
// char IntToChar (int x) {
//     if (x < 10) return char(x + '0');
//
//     return char(x - 10 + 'A');
// }
//
//
// int main()
// {
//     shwa
//
//     int T; cin >> T;
//
//     if (T == 1) {
//         string N; int X; cin >> N >> X;
//
//         ll dec = 0;
//
//         for (char C: N) dec = dec * X + CharToInt(C);
//
//         cout << dec << endl;
//     } else {
//         ll N; int X; cin >> N >> X;
//
//         if (N == 0) {
//             cout << "0\n";
//             return 0;
//         }
//
//         string other;
//         while (N) {
//             other.push_back(IntToChar(N % X));
//
//             N /= X;
//         }
//
//         reverse(All(other));
//
//         cout << other << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/O

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// string addLargeNumbers(const string &num_1, const string &num_2) {
//
//     string result;
//     int carry = 0;
//     int sum = 0;
//
//     int num_1_sz = num_1.size();
//     int num_2_sz = num_2.size();
//
//     int i = num_1_sz - 1;
//     int j = num_2_sz - 1;
//
//     while (i >= 0 || j >= 0 || carry) {
//         sum = carry;
//
//         if (i >= 0)
//             sum += num_1[i--] - '0';
//
//         if (j >= 0)
//             sum += num_2[j--] - '0';
//
//         carry = sum / 10;
//
//         result.push_back(sum % 10 + '0');
//     }
//
//     reverse(result.begin(), result.end());
//
//     return result;
// }
//
// string multiplyLargeNumber(const string &number, int multiplier) {
//
//     string result;
//     int carry = 0;
//     int product = 0;
//
//     int n = number.size();
//     int i = n - 1;
//
//     while (i >= 0 || carry) {
//         product = carry;
//
//         if (i >= 0)
//             product += (number[i--] - '0') * multiplier;
//
//         carry = product / 10;
//
//         result.push_back(product % 10 + '0');
//     }
//
//     reverse(result.begin(), result.end());
//
//     return result;
// }
//
//
// int main()
// {
//     shwa
//
//     string Nstr; cin >> Nstr;
//
//     string sumResult = addLargeNumbers(Nstr, "9999");
//     string productResult = multiplyLargeNumber(Nstr, 9999);
//
//     cout << sumResult << endl;
//     cout << productResult << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/P

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
//     double N; cin >> N;
//
//     double ans;
//
//     // Exclude 1 as Log Base(10) is 0 ??
//     // Rule -> Summation of Log Base(10) From 2 To N
//     // Is The Number of Digits of its Factoral
//
//     for (int i = 2; i <= N; ++i)
//         ans += log10(i);
//
//     cout << "Number of digits of " << N << "! is " << (int)ans + 1 << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Q

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
//     int L, R, M; cin >> L >> R >> M;
//
//     ll ans = 1;
//
//     for (int i = L; i <= R; ++i) {
//         ans = (ans % M * i % M) % M;
//     }
//
//     cout << ans;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/R

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
//     double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//
//     if (x1 < x2) swap(x1, x2);
//     if (y1 < y2) swap(y1, y2);
//
//     double insidesqrt = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//
//     cout << fixed << setprecision(9) << sqrtl(insidesqrt);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/S

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// bool Valid_Triangle(double a, double b, double c) {
//     return (a + b > c) && (a + c > b) && (b + c > a);
// }
//
// double TriangleArea(double a, double b, double c) {
//     double S = (a + b + c) / 2.0;
//
//     return sqrt(S * (S - a) * (S - b) * (S - c));
// }
//
//
// int main()
// {
//     shwa
//
//     double a, b, c; cin >> a >> b >> c;
//
//     if (Valid_Triangle(a, b, c)) {
//         cout << "Valid\n";
//         cout << fixed << setprecision(6) << TriangleArea(a, b, c);
//     } else {
//         cout << "Invalid\n";
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/T

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// double CalcDistance (double x1, double y1, double x2, double y2) {
//     if (x1 > x2) swap(x1, x2);
//     if (y1 > y2) swap(y1, y2);
//
//     return sqrtl(pow(x2 - x1, 2) + pow(y2 - y1, 2));
// }
//
//
// int main()
// {
//     shwa
//
//     double X, Y, R, N; cin >> X >> Y >> R >> N;
//
//     for (int i = 0; i < N; ++i) {
//         double x, y; cin >> x >> y;
//
//         if (CalcDistance(X, Y, x, y) <= R)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/U

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
//     ll x1, y1; cin >> x1 >> y1;
//     ll x2, y2; cin >> x2 >> y2;
//     ll x3, y3; cin >> x3 >> y3;
//
//     //// Wrong Answer Because of Division By Zero
//     //// Transform it Into an Equation Using Cross Product
//     // ll slop1 = (y2 - y1) / (x2 - x1);
//     // ll slop2 = (y3 - y1) / (x3 - x1);
//
//     ll crossProdcut = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
//
//     if (crossProdcut == 0) cout << "YES\n";
//     else cout << "NO\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/V

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
//     ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//     ll x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
//
//     ll crossProdcut = (x2 - x1) * (y4 - y3) - (x4 - x3) * (y2 - y1);
//
//     if(crossProdcut == 0) cout << "YES\n";
//     else cout << "NO\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/W

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// double distance (double x1, double y1, double x2, double y2) {
//     return sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
// }
//
//
// int main()
// {
//     shwa
//
//     double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//     double x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
//
//     double center_x1 = (x1 + x2) * 0.5; double center_y1 = (y1 + y2) * 0.5;
//     double center_x2 = (x3 + x4) * 0.5; double center_y2 = (y3 + y4) * 0.5;
//
//     double distance_between_centers = distance(center_x1, center_y1, center_x2, center_y2);
//
//     double r1 = distance(x1, y1, x2, y2) * 0.5;
//     double r2 = distance(x3, y3, x4, y4) * 0.5;
//
//     double rr = r1 + r2;
//
//     if (distance_between_centers > rr) cout << "NO\n";
//     else cout << "YES\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/X

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
//     double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//     double x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
//
//     double min_x = min(x1, min(x2, min(x3, x4)));
//     double max_x = max(x1, max(x2, max(x3, x4)));
//
//     double min_y = min(y1, min(y2, min(y3, y4)));
//     double max_y = max(y1, max(y2, max(y3, y4)));
//
//     int T; cin >> T;
//     while (T--) {
//         double xi, yi; cin >> xi >> yi;
//
//         if (xi >= min_x && xi <= max_x && yi >= min_y && yi <= max_y) cout << "YES\n";
//         else cout << "NO\n";
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Y

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
//     int T; cin >> T;
//     int cnt = 1;
//     while (cnt <= T) {
//         int N; cin >> N;
//         ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//
//         ll max_x1 = x1, max_y1 = y1, min_x2 = x2, min_y2 = y2;
//
//         for (int i = 1; i < N; i++) {
//             cin >> x1 >> y1 >> x2 >> y2;
//
//             max_x1 = max(max_x1, x1);
//             max_y1 = max(max_y1, y1);
//
//             min_x2 = min(min_x2, x2);
//             min_y2 = min(min_y2, y2);
//         }
//
//         if (min_x2 > max_x1 && min_y2 > max_y1)
//             cout << "Case #"<< cnt << ": " << (min_x2 - max_x1) * (min_y2 - max_y1) << endl;
//         else cout << "Case #"<< cnt << ": " << 0 << endl;
//
//         cnt++;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Z

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
//     ll R, S; cin >> R >> S;
//
//     // Diameters
//     ll circle_D = R * 2;
//     ll square_D = sqrt(pow(S, 2) + pow(S, 2));
//
//     if (circle_D <= S) cout << "Square";
//     else if (circle_D > square_D) cout << "Circle";
//     else cout << "Complex";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------
