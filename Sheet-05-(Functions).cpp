// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll Sum_Of_X_Y (int x, int y)
// {
//     return x + y;
// }
//
// void Print_From_1_To_N (int N)
// {
//     for (int i = 1; i <= N; ++i) {
//         cout << i;
//
//         if (i < N)
//             cout << " ";
//     }
// }
//
// bool Is_Odd (int N)
// {
//     return (N & 1);   // Faster Than (N % 2 != 0)
// }
//
// bool Is_Binary_Palindrome (int N)
// {
//     if (N == 0) return true;  // not needed here, but keeps the function general
//
//     string s;
//
//     while (N) {
//         s += (N & 1) ? '1' : '0';
//         N >>= 1;
//     }
//
//     string rev = s;
//
//     reverse(rev.begin(), rev.end());
//
//     return s == rev;
// }
//
// bool Is_Prime(int n)
// {
//     if (n < 2) { return false; }
//     if (n == 2 || n == 3) { return true; }
//     if (n % 2 == 0) { return false; }
//
//     for (int i = 3; i*i <= n; i += 2)
//         if (n % i == 0) return false;
//
//     return true;
// }
//
// void Swapping (int x, int y)
// {
//     cout << y << " " << x << endl;
// }
//
// ll Equation (int X, int N)
// {
//     ll res = 0;
//     for (int i = 2; i <= N; i += 2)
//         res += pow(X, i);
//
//     return res;
// }
//
// const int sz = 1e5 + 10;
// int mx_mn[sz];
// int mm;
//
// void Max_and_Min (int n)
// {
//     int mn = INT_MAX, mx = INT_MIN;
//
//     for (int i = 0; i < n; ++i) {
//         mn = min(mn, mx_mn[i]);
//         mx = max(mx, mx_mn[i]);
//     }
//
//     cout << mn << " " << mx << endl;
// }
//
// void N_Times (int N, char C)
// {
//     for (int i = 0; i < N; ++i)
//         cout << C << " ";
//     cout << endl;
// }
//
// using Matrix = vector<vector<int>>;
//
// void Swap_Row (Matrix& A, int X, int Y) {
//     swap(A[X], A[Y]);
// }
//
// void Swap_Col (Matrix& A, int X, int Y) {
//     for (auto & row: A)
//         swap(row[X], row[Y]);
// }
//
// double Average (int N)
// {
//     float X; double res = 0.0;
//
//     for (int i = 0; i < N; ++i) {
//         cin >> X;
//         res += X;
//     }
//     return res / N;
// }
//
// void Shift_Right (vector<int>& A, int X)
// {
//     int N = A.size();
//
//     X %= N;                 // handle X >= N
//
//     reverse(A.begin(), A.end());
//     reverse(A.begin(), A.begin() + X);
//     reverse(A.begin() + X, A.end());
// }
//
// vector<int> New_Array (vector<int>& A, vector<int>& B)
// {
//     int N = A.size();
//
//     vector<int>res;
//
//     for (auto e: B)
//         res.push_back(e);
//
//     for (auto e: A)
//         res.push_back(e);
//
//     return res;
// }
//
// int Distinct_Numbers (vector<int>& A)
// {
//     int N = A.size();
//
//     sort(A.begin(), A.end());
//
//     A.erase(unique(A.begin(), A.end()), A.end());
//
//     return A.size();
// }
//
// vector<int> Shift_Zeros (vector<int>& A)
// {
//     int N = A.size();
//     vector<int> res;
//
//     for (int i = 0; i < N; ++i) {
//         if (A[i] == 0) { continue; }
//         res.push_back(A[i]);
//     }
//
//     return res;
// }
//
//
// int MyMax (vector<int>& A) {
//     int N = A.size(), mx = INT_MIN;
//
//     for (int i = 0; i < N; ++i)
//         mx = max(mx, A[i]);
//
//     return mx;
// }
//
// int MyMin (vector<int>& A) {
//     int N = A.size(), mn = INT_MAX;
//
//     for (int i = 0; i < N; ++i)
//         mn = min(mn, A[i]);
//
//     return mn;
// }
//
// int MyPrime(vector<int>& A)
// {
//     int cnt = 0;
//
//     for (int a : A)
//         if (Is_Prime(a)) ++cnt;
//
//     return cnt;
// }
//
//
// bool Is_Num_Palindrome(int n)
// {
//     string s = to_string(n);
//     size_t left = 0, right = s.size() - 1;
//
//     while (left < right) {
//         if (s[left] != s[right]) return false;
//         ++left; --right;
//     }
//
//     return true;
// }
//
// int MyPalindrome (vector<int>& A) {
//     int cnt = 0;
//
//     for (int a : A)
//         if (Is_Num_Palindrome(a)) ++cnt;
//
//     return cnt;
// }
//
//
// int countDivisors(int n) {          // same tiny helper
//     if (n < 1) return 0;
//
//     int cnt = 0;
//
//     for (int d = 1; d * d <= n; ++d)
//         if (n % d == 0)
//             cnt += (d * d == n) ? 1 : 2;
//
//     return cnt;
// }
//
// int MyMaxDivisorsValue(vector<int>& v) {
//     return *max_element(
//         v.begin(),
//         v.end(),
//         [](int a, int b)
//         {
//             int ca = countDivisors(a);
//             int cb = countDivisors(b);
//             return (ca < cb) || (ca == cb && a < b);
//         }
//     );
// }
//
//
// int main()
// {
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
//
// //    int X, Y;
// //    cin >> X >> Y;
// //
// //    cout << Sum_Of_X_Y(X, Y);
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
//
// //    int N;
// //    cin >> N;
// //
// //    Print_From_1_To_N(N);
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
//
// //    int N;
// //    cin >> N;
// //
// //    if (Is_Binary_Palindrome(N) && Is_Odd(N))
// //        cout << "YES" << endl;
// //    else
// //        cout << "NO" << endl;
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
//
// //    int T; cin >> T;
// //
// //    while (T--) {
// //        int n; cin >> n;
// //
// //        if(Is_Prime(n)) cout << "YES\n";
// //        else cout << "NO\n";
// //    }
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
//
// //    int x, y; cin >> x >> y;
// //
// //    Swapping(x, y);
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
//
// //    int X, N; cin >> X >> N;
// //
// //    cout << Equation(X, N) << endl;
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
//
// //    cin >> mm;
// //
// //    for (int i = 0; i < mm; ++i)
// //        cin >> mx_mn[i];
// //
// //    Max_and_Min(mm);
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
//
// //    int T; cin >> T;
// //
// //    while (T--) {
// //        int N;
// //        char C;
// //        cin >> N >> C;
// //
// //        N_Times(N, C);
// //    }
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
//
// //    int N, X, Y;
// //    if (!(cin >> N >> X >> Y)) { return 0; }
// //
// //    --X, --Y; // Convert To 0-Based ??
// //
// //    Matrix A(N, vector<int>(N));
// //
// //    for (int i = 0; i < N; ++i)
// //        for (int j = 0; j < N; ++j)
// //            cin >> A[i][j];
// //
// //    Swap_Row(A, X, Y);
// //    Swap_Col(A, X, Y);
// //
// //    for (const auto& row: A)
// //        for (size_t j = 0; j < row.size(); ++j)
// //            cout << row[j] << (j + 1 == row.size() ? "\n" : " ");
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
//
// //    int N; cin >> N;
// //
// //    cout << fixed << setprecision(6) << Average(N) << endl;
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
//
// //    int N, X;
// //    if (!(cin >> N >> X)) { return 0; }
// //
// //    vector<int> A(N);
// //
// //    for (auto& v: A)
// //        cin >> v;
// //
// //    Shift_Right(A,  X);
// //
// //    for (size_t i = 0; i < N; ++i)
// //        cout << A[i] << (i == A.size() ? "\n" : " ");
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
//
// //    int N; while (!(cin >> N)) { return 0; }
// //
// //    int new_N = N + N;
// //
// //    vector<int> A(N), B(N), res;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> B[i];
// //
// //    res = New_Array(A, B);
// //
// //    for (auto q: res)
// //        cout << q << " ";
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
//
// //    int N; while(!(cin >> N)) { return 0; }
// //
// //    vector<int> A(N);
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    cout << Distinct_Numbers(A) << endl;
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
//
// //    int N; while(!(cin >> N));
// //
// //    vector<int> A(N), res(N);
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    res = Shift_Zeros(A);
// //
// //    int zeros = A.size() - res.size();
// //
// //
// //    if(zeros > 0)
// //        for (int i = 0; i < zeros; ++i)
// //            res.push_back(0);
// //
// //    for (auto e: res)
// //        cout << e << " ";
//
// // -----------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
//
//     int N; while (!(cin >> N)) { return 0; }
//
//     vector<int> A(N);
//
//     for (int i = 0; i < N; ++i)
//         cin >> A[i];
//
//     cout << "The maximum number : " << MyMax(A) << endl;
//     cout << "The minimum number : " << MyMin(A) << endl;
//     cout << "The number of prime numbers : " << MyPrime(A) << endl;
//     cout << "The number of palindrome numbers : " << MyPalindrome(A) << endl;
//     cout << "The number that has the maximum number of divisors : " << MyMaxDivisorsValue(A) << endl;
//
//
// // -----------------------------------------------------------------------------------------------
//
//     return 0;
// }
