// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// const double pi = 3.141592653;
//
// using namespace std;
//
// ll Sum_Form_1_To_N (int N)
// {
//     if (N == 0) return 0;
//     if (N == 1) return 1;
//
//     return N + Sum_Form_1_To_N(N - 1);
// }
//
// int main()
// {
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
//
// //    double R;
// //    cin >> R;
// //
// //    double area = 1.0;
// //
// //    area = pi * R * R;
// //
// //    // fixed ensures the number is printed in fixed-point notation.
// //    // setprecision(9) ensures 9 digits after the decimal point.
// //    cout << fixed << setprecision(9) << area;
//
// //// F. Digits Summation
// //    ll m, n;
// //    cin >> m >> n;
// //
// //    int m_last_digit = m % 10;
// //    int n_last_digit = n % 10;
// //
// //    cout << m_last_digit + n_last_digit << endl;
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G
//
// //    int N;
// //    cin >> N;
// //
// //    // Time Limit ??
// //    couct << Sum_Form_1_To_N(N) << endl;
// //
// //    // Time Limit ??
// //    ll res = 0;
// //    for (int i = 1; i <= N; ++i) {
// //        res += i;
// //    }
// //
// //    cout << res << endl;
//
// //    ll N;
// //    cin >> N;
// //    cout << N * (N + 1) / 2 << endl;
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
//
// //    double A, B;
// //    cin >> A >> B;
// //
// //    cout << "floor " << A << " / " << B << " = " << floor(A / B) << endl;
// //    cout << "ceil " << A << " / " << B << " = " << ceil(A / B) << endl;
// //    cout << "round " << A << " / " << B << " = " << round(A / B) << endl;
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
//
// //    int A, B;
// //    cin >> A >> B;
// //
// //    if (A % B == 0 || B % A == 0)
// //        cout << "Multiples" << endl;
// //    else
// //        cout << "No Multiples" << endl;
//
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
//
// //    int A, B, C;
// //    cin >> A >> B >> C;
// //
// //    if (A <= B && A <= C) {
// //        cout << A << " ";
// //        if (B >= A && B >= C)
// //            cout << B << endl;
// //        else if (C >= A && C >= B)
// //            cout << C << endl;
// //    }
// //
// //    else if (B <= A && B <= C) {
// //        cout << B << " ";
// //        if (A >= B && A >= C)
// //            cout << A << endl;
// //        else if (C >= A && C >= B)
// //            cout << C << endl;
// //    }
// //
// //    else if (C <= A && C <= B) {
// //        cout << C << " ";
// //        if (B >= A && B >= C)
// //            cout << B << endl;
// //        else if (A >= B && A >= C)
// //            cout << A << endl;
// //    }
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
//
// //    string F1, S1, F2, S2;
// //    cin >> F1 >> S1 >> F2 >> S2;
// //
// //    if (S1 == S2)
// //        cout << "ARE Brothers" << endl;
// //    else
// //        cout << "NOT" << endl;
//
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
//
// //    char X;
// //    cin >> X;
// //
// //    if (X >= 47 && X <= 57)
// //        cout << "IS DIGIT\n";
// //    else if (X >= 65 && X <= 90)
// //        cout << "ALPHA\nIS CAPITAL";
// //    else if (X >= 97 && X <= 122)
// //        cout << "ALPHA\nIS SMALL";
//
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
//
// //    char X;
// //    cin >> X;
// //
// //    if (X >= 65 && X <= 90)
// //        cout << char(X + 32) << endl;
// //    else if (X >= 97 && X <= 122)
// //        cout << char(X - 32) << endl;
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
//
// //    int A, B;
// //    char S;
// //
// //    cin >> A >> S >> B;
// //
// //    if (S == '+')
// //        cout << A + B << endl;
// //    else if (S == '-')
// //        cout << A - B << endl;
// //    else if (S == '*')
// //        cout << A * B << endl;
// //    else
// //        cout << A / B << endl;
//
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
//
// //    int X;
// //    cin >> X;
// //
// //    int last;
// //    while(X) {
// //        last = X % 10;
// //        X /= 10;
// //    }
// //
// //    if (last % 2 == 0)
// //        cout << "EVEN\n";
// //    else
// //        cout << "ODD\n";
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
//
// //    double X, Y;
// //    cin >> X >> Y;
// //
// //    if (X == 0 && Y == 0)
// //        cout << "Origem" << endl;
// //    else if (Y == 0 && (0 > X || X > 0))
// //        cout << "Eixo X" << endl;
// //    else if (X == 0 && (0 > Y || Y > 0))
// //        cout << "Eixo Y" << endl;
// //    else if (X > 0 && Y > 0)
// //        cout << "Q1" << endl;
// //    else if (X < 0 && Y > 0)
// //        cout << "Q2" << endl;
// //    else if (X < 0 && Y < 0)
// //        cout << "Q3" << endl;
// //    else
// //        cout << "Q4" << endl;
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
//
// //    int N;
// //    cin >> N;
// //
// //    int years = 0, months = 0, days = 0;
// //
// //    while (N) {
// //        if (N - 365 >= 0) {
// //            N -= 365;
// //            years++;
// //        }
// //        else if (N - 30 >= 0) {
// //            N -= 30;
// //            months++;
// //        }
// //        else if (N > 0) {
// //            N--;
// //            days++;
// //        }
// //    }
// //
// //    cout << years << " years\n";
// //    cout << months << " months\n";
// //    cout << days << " days\n";
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
//
// //    double X;
// //    cin >> X;
// //
// //    if (X >= 0 && X <= 25)
// //        cout << "Interval [0,25]\n";
// //    else if (X > 25 && X <= 50)
// //        cout << "Interval (25,50]\n";
// //    else if (X > 50 && X <= 75)
// //        cout << "Interval (50,75]\n";
// //    else if (X > 75 && X <= 100)
// //        cout << "Interval (75,100]\n";
// //    else
// //        cout << "Out of Intervals\n";
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
//
// //    int A, B, C;
// //    cin >> A >> B >> C;
// //
// //    if (A <= B && A <= C && B <= C)
// //        cout << A << endl << B << endl << C << endl << endl;
// //    else if (A <= B && A <= C && C <= B)
// //        cout << A << endl << C << endl << B << endl << endl;
// //    else if (B <= A && B <= C && A <= C)
// //        cout << B << endl << A << endl << C << endl << endl;
// //    else if (B <= A && B <= C && C <= A)
// //        cout << B << endl << C << endl << A << endl << endl;
// //    else if (C <= A && C <= B && A <= B)
// //        cout << C << endl << A << endl << B << endl << endl;
// //    else if (C <= A && C <= B && B <= A)
// //        cout << C << endl << B << endl << A << endl << endl;
// //
// //    cout << A << endl << B << endl << C << endl;
//
// // OR
//
// //    int A, B, C;
// //    cin >> A >> B >> C;
// //
// //    if (A <= B && A <= C) {
// //        if (B <= C)
// //            cout << A << endl << B << endl << C << endl << endl;
// //        else if (C <= B)
// //            cout << A << endl << C << endl << B << endl << endl;
// //    }
// //    else if (B <= A && B <= C) {
// //        if (A <= C)
// //            cout << B << endl << A << endl << C << endl << endl;
// //        else if (C <= A)
// //            cout << B << endl << C << endl << A << endl << endl;
// //    }
// //
// //    else if (C <= A && C <= B) {
// //        if (A <= B)
// //            cout << C << endl << A << endl << B << endl << endl;
// //        else if (B <= A)
// //            cout << C << endl << B << endl << A << endl << endl;
// //    }
// //
// //    cout << A << endl << B << endl << C << endl;
//
//
// // -------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
//
// //    double N;
// //    cin >> N;
// //
// //    int integer_part = N;
// //    double float_part = N - integer_part;
// //
// //
// //    if (float_part == 0.00)
// //        cout << "int " << integer_part << endl;
// //    else
// //        cout << "float " << integer_part << " " << float_part << endl;
//
// // ------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
//
// //    int A, B;
// //    char S;
// //    cin >> A >> S >> B;
// //
// //    if ((S == '=' && A == B) || (S == '>' && A > B) || (S == '<' && A < B))
// //        cout << "Right\n";
// //    else
// //        cout << "Wrong\n";
//
// // ------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
//
// //    int A, B, C;
// //    char S, Q;
// //    cin >> A >> S >> B >> Q >> C;
// //
// //    if ((S == '+' && A + B == C) || (S == '-' && A - B == C) || (S == '*' && A * B == C))
// //        cout << "Yes\n";
// //    else {
// //        if (S == '+')
// //            cout << A + B << endl;
// //        if (S == '-')
// //            cout << A - B << endl;
// //        if (S == '*')
// //            cout << A * B << endl;
// //    }
//
//
// // ------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
//
// //    int x1, y1, x2, y2;
// //    cin >> x1 >> y1 >> x2 >> y2;
// //
// //    int start, finish;
// //
// //    if ((x1 > x2 && x1 > y2) || (y1 < x2 && y1 < y2))
// //        cout << -1 << endl;
// //    else {
// //        if (x1 >= x2)
// //            start = x1;
// //        else
// //            start = x2;
// //
// //        if (y1 <= y2)
// //            finish = y1;
// //        else
// //            finish = y2;
// //
// //        cout << start << " " << finish << endl;
// //    }
//
// // ------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
//
// //    ll A, B, C, D;
// //    cin >> A >> B >> C >> D;
// //
// //    // You Can not Do Multiplication Then Take The Mod ??
// //    // But You Should Take The Mod Of Each Number ??
// //    ll res = 1;
// //    res = (res * A) % 100;
// //    res = (res * B) % 100;
// //    res = (res * C) % 100;
// //    res = (res * D) % 100;
// //
// //    // To make sure we always print two digits (e.g., 00, 01, ..., 99):
// //    cout << setfill('0') << setw(2) << res;
//
// // ------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
//
// //    double A, B, C, D;
// //    cin >> A >> B >> C >> D;
// //
// //    double Right = B * log(A);
// //    double Left = D * log(C);
// //
// ////    cout << Right << "   " << Left;
// //
// //    if (Right > Left)
// //        cout << "YES\n";
// //    else
// //        cout << "NO\n";
//
// // ------------------------------------------------------------------------------------------------
//
//
//     return 0;
// }
