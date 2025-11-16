// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_Fun (int i, int N) {
//     if (i > N) return;
//
//     cout << "I love Recursion\n";
//     R_Fun(i+1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_Fun(1, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_From_1_To_N (int i, int N) {
//     if (i > N) return;
//
//     cout << i << endl;
//
//     R_From_1_To_N (i+1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_From_1_To_N (1, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_From_N_To_1 (int N, int i) {
//     if (N < i) return;
//
//     cout << N;
//     if (N > i) cout << " ";
//
//     R_From_N_To_1 (N-1, i);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_From_N_To_1(N, 1);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_Print (int i, string S) {
//     if (i >= S.size()) return;
//
//     cout << S[i] << " ";
//
//     R_Print(i+1, S);
// }
//
// int main()
// {
//     shwa
//
//     int T; cin >> T;
//     while (T--) {
//         int N; cin >> N;
//         string N_str =  to_string(N);
//         R_Print(0, N_str);
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Binary (int i, int N) {
//     if (i >= N) return;
//
//     R_Binary(i, N / 2);
//
//     cout << N % 2;
// }
//
//
// int main()
// {
//     shwa
//
//     int T; cin >> T;
//     while (T--) {
//         int N; cin >> N;
//         R_Binary(0, N);
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Even (int i, int N, vector<int>&A) {
//     if (i >= N) return;
//
//     R_Even(i+1, N, A);
//
//     if (i % 2 == 0) cout << A[i] << " ";
// }
//
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     R_Even(0, N, A);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Spaces (int N) {
//     if (N == 0) return;
//     cout << " ";
//     R_Spaces (N-1);
// }
//
// void R_Stars (int N) {
//     if (N == 0) return;
//     cout << "*";
//     R_Stars (N-1);
// }
//
// void R_Pyramid (int  i, int N) {
//     if (i > N) return;
//
//     R_Spaces(N - i);
//     R_Stars(2 * i - 1);
//     cout << endl;
//
//     R_Pyramid(i+1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_Pyramid(1, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Spaces (int N) {
//     if (N == 0) return;
//     cout << " ";
//     R_Spaces (N-1);
// }
//
// void R_Stars (int N) {
//     if (N == 0) return;
//     cout << "*";
//     R_Stars (N-1);
// }
//
// void R_Pyramid (int  i, int N) {
//     if (i == 0) return;
//
//     R_Spaces(N - i);
//     R_Stars(2 * i - 1);
//     cout << endl;
//
//     R_Pyramid(i-1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_Pyramid(N, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// vector<char> Vowels {'a', 'e', 'i', 'o', 'u'};
//
// int R_Vowels (int i, const string &S) {
//     if (i >= (int)S.size()) return 0;
//
//     int cnt = (find(All(Vowels), tolower(S[i])) != Vowels.end()) ? 1 : 0;
//
//     return cnt + R_Vowels(i+1, S);
// }
//
//
// int main()
// {
//     shwa
//
//     string S; getline(cin, S);
//
//     cout << R_Vowels(0, S) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// ll R_Factorial (int N) {
//     if (N == 0) return 1;
//
//     return N * R_Factorial(N - 1);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     cout << R_Factorial(N) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// int R_Max (int i, int N, vector<int> &A) {
//     if (i == N-1) return A[i];
//
//     return max(A[i], R_Max(i+1, N, A));
// }
//
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     cout << R_Max(0, N, A) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Sum (int i, int N, vector<int>&A) {
//     if (i >= N) return 0;
//
//     return A[i] + R_Sum(i+1, N, A);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     cout << R_Sum(0, N, A) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Suffix(int i, int M, vector<int>&A) {
//     if (i >= M) return 0;
//
//     return A[i] + R_Suffix(i+1, M, A);
// }
//
// int main()
// {
//     shwa
//
//     int N, M; cin >> N >> M;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//     reverse(All(A));
//
//     cout << R_Suffix(0, M, A);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// vector<vector<int>> v1, v2, ans;
//
// void R_Matrix (int i, int j, int R, int C) {
//     if (i == R) return;
//
//     if (j == C) {
//         R_Matrix(i+1, 0, R, C);
//         return;
//     }
//
//     ans[i][j] = v1[i][j] + v2[i][j];
//
//     R_Matrix(i, j+1, R, C);
// }
//
//
// int main() {
//     shwa
//
//     int R, C; cin >> R >> C;
//
//     v1.assign(R, vector<int>(C));
//     v2.assign(R, vector<int>(C));
//     ans.assign(R, vector<int>(C));
//
//     for (int i = 0; i < R; ++i)
//         for (int j = 0; j < C; ++j)
//             cin >> v1[i][j];
//
//     for (int i = 0; i < R; ++i)
//         for (int j = 0; j < C; ++j)
//             cin >> v2[i][j];
//
//     R_Matrix(0, 0, R, C);
//
//     for (int i = 0; i < R; ++i) {
//         for (int j = 0; j < C; ++j) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Fibonacci(ll N) {
//     if (N == 1) return 0;
//     if (N == 2) return 1;
//     return R_Fibonacci(N - 2) + R_Fibonacci(N - 1);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     cout << R_Fibonacci(N) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Log (ll N) {
//     if (N < 2) return 0;
//
//     return 1 + R_Log(N/2);
// }
//
// int main()
// {
//     shwa
//
//     ll N; cin >> N;
//
//     cout << R_Log(N) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Relation (int N) {
//     if (N == 1) return 1;
//
//     if (!(N & 1)) return 1 + R_Relation(N/2);
//
//     return 1 + R_Relation(3*N+1);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     cout << R_Relation(N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// bool R_Palindrome (int i, int N, vector<int>&A) {
//     if (i >= N) return true;
//
//     if (A[i] != A[N]) return false;
//
//     return R_Palindrome(i+1, N-1, A);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     if (R_Palindrome(0, N-1, A)) cout << "YES\n";
//     else cout << "NO\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Sum (int i, int N, vector<ll>&A) {
//     if (i == N-1) return A[i];
//     return A[i] + R_Sum(i+1, N, A);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<ll> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     ll Sum = R_Sum(0, N, A);
//     double Avg = (double)Sum / N;
//
//     cout << fixed << setprecision(6) << Avg;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// // C(n, r)={
// //     1                     if r=0 or r=n
// //     C(n−1,r−1)+C(n−1,r)   otherwise
// // }
//
// ll dp[35][35];
//
// ll R_nCr (int N, int R) {
//     if (R == 0 || R == N) return 1;
//
//     if (dp[N][R] != -1) return dp[N][R];
//
//     return dp[N][R] =  R_nCr(N-1, R-1) + R_nCr(N-1, R);
// }
//
// int main()
// {
//     shwa
//
//     int N, R; cin >> N >> R;
//
//     if (R > N) {
//         cout << 0 << endl;
//         return 0;
//     }
//
//     int r = min(R, N - R);
//
//     memset(dp, -1, sizeof(dp));
//
//     cout << R_nCr(N, r) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// int N, W;
// vector<int> weights, values;
//
// int R_Knapsack (int i, int capacity) {
//     if (i == N) return 0;
//
//     // Skip
//     int skip = R_Knapsack(i+1, capacity);
//
//     // Take
//     int take=0;
//     if (weights[i] <= capacity)
//         take = values[i] + R_Knapsack(i+1, capacity - weights[i]);
//
//     return max(skip, take);
// }
//
// int main()
// {
//     shwa
//
//     cin >> N >> W;
//
//     weights.resize(N);
//     values.resize(N);
//
//     for (int i = 0; i < N; ++i) cin >> weights[i] >> values[i];
//
//     cout << R_Knapsack(0, W) << endl;
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll N, X;
// vector<ll> A(21);
//
// bool R_Expression (ll sum, ll i) {
//     if (i == N) return sum == X;
//
//     bool way1 = R_Expression(sum+A[i], i+1);
//     bool way2 = R_Expression(sum-A[i], i+1);
//
//     return way1 || way2;
// }
//
//
// int main()
// {
//     shwa
//
//     cin >> N >> X;
//     for (int i = 0; i < N; ++i) cin >> A[i];
//
//     if (R_Expression(A[0], 1)) cout << "YES\n";
//     else cout << "NO\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll N;
//
// bool R_Reach (ll num) {
//     if (N < num) return false;
//     else if (N == num) return true;
//     else return R_Reach(num*10) || R_Reach(num*20);
// }
//
// int main()
// {
//     shwa
//
//     int T; cin >> T;
//     while (T--) {
//         cin >> N;
//
//         if (R_Reach(1)) cout << "YES\n";
//         else cout << "NO\n";
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// int raw, col;
// vector<vector<int>> Matrix(11, vector<int>(11));
//
// int R_Path (int start, int end) {
//     if (start == raw-1 && end == col-1) return Matrix[start][end];
//     else if (start > raw-1 || end > col-1) return -INT_MIN;
//
//     int right = R_Path(start, end+1);
//     int down = R_Path(start+1, end);
//
//     return Matrix[start][end] + max(right, down);
// }
//
//
// int main()
// {
//     shwa
//
//     cin >> raw >> col;
//
//     for (int i = 0; i < raw; ++i)
//         for (int j = 0; j < col; ++j)
//             cin >> Matrix[i][j];
//
//     cout << R_Path(0, 0) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// int n1, n2;
//
// int R_Ways (int n) {
//     if (n >= n2) return n == n2;
//
//     return R_Ways(n+1) + R_Ways(n+2) + R_Ways(n+3);
// }
//
// int main()
// {
//     shwa
//
//     cin >> n1 >> n2;
//
//     cout << R_Ways(n1);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_Prefix_Max (int i, int N, vector<ll>&A, ll curr_mx) {
//     if (i >= N) return;
//
//     curr_mx = max(A[i], curr_mx);
//
//     cout << curr_mx << " ";
//
//     R_Prefix_Max(i+1, N, A, curr_mx);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<ll> A(N);
//     for (auto & Ai: A) cin >> Ai;
//
//     R_Prefix_Max(0, N, A, LLONG_MIN);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

