// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll R_Factorial (ll N)
// {
//     if (N == 0 || N == 1) { return 1; }
//
//     return N * R_Factorial(N - 1);
// }
//
// bool Iter_Is_Prime (int X)
// {
//     if (X <= 1) { return false; }
//
//     // Why We Use Base Condition of ( i * i <= X ) <==> ( i <= sqrt(X) ) ??
//     // Because No Need To Iterate More Than sqrt(X) Try Only To Think Deeply In It..
//     for (int i = 2; i * i <= X; ++i) {
//         if (X % i == 0)
//             return false;
//     }
//     return true;
// }
//
// bool R_Is_Prime (int X, int i = 2)
// {
//     if (X <= 1) { return false; }
//     if (i * i > X) { return true; } // This is similar to the stopping point in the iterative loop.
//     if (X % i == 0) { return false; }
//
//     return R_Is_Prime(X, i + 1);
// }
//
// int GCD (int A, int B)
// {
//     int GCD;
//
//     // Maximize Them (Take the Max of Them) We Made it here A and loop till it ??
//     if (B > A) {
//         int temp = B;
//         B = A;
//         A = temp;
//     }
//
//     for (int i = 1; i <= A; ++i)
//         if (A % i == 0 && B % i == 0)
//             GCD = i; // WE Must Assign it to any variable to be updated and gave me the greatest one
//
//     return GCD;
// }
//
// int Fibonacci (int N)
// {
//     if (N == 0) { return 0; }
//     if (N == 1) { return 1; }
//
//     return Fibonacci(N - 1) + Fibonacci(N - 2);
// }
//
// int main()
// {
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 1; i <= N; ++i)
// //        cout << i << endl;
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
//
// //    int N;
// //    cin >> N;
// //
// //    if (N == 1) { cout << -1 << endl; }
// //
// //    for (int i = 2; i <= N; ++i)
// //        if (i % 2 == 0)
// //            cout << i << endl;
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
//
// //    int N;
// //    cin >> N;
// //
// //    int even = 0, odd = 0, positive = 0, negative = 0;
// //
// //    while (N--) {
// //        int X;
// //        cin >> X;
// //
// //        if (X % 2 == 0)
// //            even++;
// //        else
// //            odd++;
// //
// //        if (X > 0)
// //            positive++;
// //        else if (X < 0)
// //            negative++;
// //    }
// //
// //    cout << "Even: " << even << endl;
// //    cout << "Odd: " << odd << endl;
// //    cout << "Positive: " << positive << endl;
// //    cout << "Negative: " << negative << endl;
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
//
// //    int X;
// //
// //    while (X) {
// //        cin >> X;
// //
// //        if (X != 1999)
// //            cout << "Wrong\n";
// //        else {
// //            cout << "Correct\n";
// //            break;
// //        }
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
//
// //    int N, X, mx = INT_MIN;
// //    cin >> N;
// //
// //    while (N--) {
// //        cin >> X;
// //
// //        if (X > mx)
// //            mx = X;
// //    }
// //
// //    cout << mx << endl;
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 1; i <= 12; ++i)
// //        cout << N << " * " << i << " = " << N * i << endl;
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
//
// ///////// Not Work ?? I Do not Know Why ??
// //    int T;
// //    cin >> T;
// //
// //    ll res = 1;
// //
// //    while (T--) {
// //        ll N;
// //        cin >> N;
// //
// //        if (N == 0 || N == 1)
// //            cout << 1 << endl;
// //        else
// //            for (int i = 2; i <= N; ++i)
// //                res *= i;
// //
// //        cout << res << endl;
// //
// //        res = 1;
// //    }
//
// //// OR
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        ll N;
// //        cin >> N;
// //
// //        cout << R_Factorial(N) << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
//
// //    int X;
// //    cin >> X;
//
// //    if (Iter_Is_Prime(X)) { cout << "YES\n"; }
// //    else { cout << "NO\n"; }
//
// //    if (R_Is_Prime(X)) { cout << "YES\n"; }
// //    else { cout << "NO\n"; }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
//
//     // جامددده
// //    int N;
// //    cin >> N;
// //
// //    int reversed_N = 0;
// //    int original_N = N;
// //
// //    while (N) {
// //        int last_digit = N % 10;
// //        reversed_N = reversed_N * 10 + last_digit;
// //        N /= 10;
// //    }
// //
// //    cout << reversed_N << endl;
// //
// //    if (original_N == reversed_N)
// //        cout << "Yes\n";
// //    else
// //        cout << "NO\n";
//
// //// OR
//
// //    string N;
// //    cin >> N;
// //
// //    string reversed = N;
// //    reverse(reversed.begin(), reversed.end());
// //
// //    // Remove leading zeros from reversed string
// //    int pos = 0;
// //    while (pos < reversed.size() && reversed[pos] == '0') {
// //        pos++;
// //    }
// //
// //    reversed = reversed.substr(pos); // skip leading zeros === Cut Number of Zeros (Number of pos)
// //
// //    if (reversed.empty()) reversed = "0"; // if all digits were 0
// //
// //    cout << reversed << endl;
// //
// //    // Check if original string is a palindrome
// //    if (N == reversed)
// //        cout << "YES\n";
// //    else
// //        cout << "NO\n";
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 2; i <= N; ++i) {
// //        if (R_Is_Prime(i))
// //            cout << i << " ";
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 1; i <= N; ++i) {
// //        if (N % i == 0)
// //            cout << i << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
//
// //    int A, B;
// //    cin >> A >> B;
// //
// //    cout << GCD (A, B) << " ";
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
//
// //    int A, B;
// //    cin >> A >> B;
// //
// //    int check = 0;
// //
// //    for (int i = A; i <= B; ++i) {
// //        int temp = i, flag = 1;
// //
// //        while (temp) {
// //            int last_digit = temp % 10;
// //            temp /= 10;
// //
// //            if (last_digit == 4 || last_digit == 7) { continue; }
// //            else { flag = 0; break; }
// //        }
// //
// //        if (flag) {
// //            cout << i << " ";
// //            check = 1;
// //        }
// //    }
// //
// //    if (!check) { cout << -1 << endl; }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
//
// //    char S;
// //    int N;
// //    cin >> S >> N;
// //
// //    while (N--) {
// //        int X;
// //        cin >> X;
// //
// //        for (int i = 0; i < X; ++i)
// //            cout << S;
// //
// //        cout << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O
//
// //    int N;
// //    cin >> N;
// //
// //    // The First Loop For Accessing The Rows ??
// //    for (int i = 0; i < N; ++i) {
// //        // The Second Loop For Accessing The Columns ??
// //        for (int j = 0; j <= i; ++j) {
// //            cout << "*";
// //        }
// //        cout << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i) {
// //        for (int j = i; j < N; ++j) {
// //            cout << "*";
// //        }
// //        cout << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
//
//     // IT Gave me a Wrong Answer At Test 9 ????
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        int N;
// //        cin >> N;
// //
// //        while (N) {
// //            int last_digit = N % 10;
// //            cout << last_digit << " ";
// //            N /= 10;
// //        }
// //        cout << endl;
// //    }
//
// // OR
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        int N;
// //        cin >> N;
// //
// //        string my_N = to_string(N);
// //
// //        for (int i = 0; i < my_N.size(); ++i) {
// //            int last_digit = N % 10;
// //            cout << last_digit << " ";
// //            N /= 10;
// //        }
// //        cout << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
//
// //    int A, B;
// //
// //    while (true) {
// //        cin >> A >> B;
// //
// //        if (A <= 0 || B <= 0)
// //            break;
// //
// //        if (A > B) {
// //            int temp = A;
// //            A = B;
// //            B = temp;
// //        }
// //
// //        int sum = 0;
// //
// //        for (int i = A; i <= B; ++i) {
// //            cout << i << " ";
// //            sum += i;
// //        }
// //        cout << "sum =" << sum <<  endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
//
// //    int T;
// //    cin >> T;
// //
// //    int sum = 0;
// //
// //    while (T--) {
// //        int X, Y;
// //        cin >> X >> Y;
// //
// //        if (Y > X) {
// //            for (int i = X + 1; i < Y; ++i) {
// //                if (i % 2 != 0)
// //                    sum += i;
// //            }
// //        } else {
// //           for (int i = Y + 1; i < X; ++i) {
// //                if (i % 2 != 0)
// //                    sum += i;
// //            }
// //        }
// //        cout << sum << endl;
// //        sum = 0;
// //    }
//
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 1; i <= N; ++i) {
// //        // Print Spaces (Number of Spaces == N - i) (i => Each Row)
// //        for (int j = 1; j <= N - i; ++j)
// //            cout << " ";
// //
// //        // Each Row i Has (i * 2 - 1) Stars ??
// //        for (int j = 1; j <= (i * 2 - 1); ++j)
// //            cout << "*";
// //
// //        cout << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
//
// //    int N, A, B;
// //    cin >> N >> A >> B;
// //
// //    ll sum = 0;
// //
// //    for (int i = 1; i <= N; ++i) {
// //        if (i / 10 == 0) { // Contains Only One Number
// //            if (i >= A && i <= B) // Check That is Between A, B
// //                sum += i; // If The Number (i) Is Between A, B add IT To Sum ??
// //        }
// //        else { // Contains More Than One Number
// //            int num = i; // Preserve i
// //            int sum_of_the_two_nums = 0;
// //
// //            while (num) {
// //                int last_digit = num % 10;
// //                sum_of_the_two_nums += last_digit;
// //                num /= 10;
// //            }
// //
// //            if (sum_of_the_two_nums >= A && sum_of_the_two_nums <= B)
// //                sum += i;
// //        }
// //    }
// //
// //    cout << sum << endl;
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
//
// //    int N;
// //    cin >> N;
// //
// //    int num = 1;
// //
// //    for (int i = 1; i <= N * 4; ++i) {
// //        if (num % 4 == 0) {
// //            cout << "PUM";
// //            if (num != N * 4)
// //                cout << endl;
// //            num++;
// //        }
// //        else {
// //            cout << num << " ";
// //            num++;
// //        }
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 1; i <= N; ++i) {
// //        // Print Spaces (Number of Spaces == N - i) (i => Each Row)
// //        for (int j = 1; j <= N - i; ++j)
// //            cout << " ";
// //
// //        // Each Row i Has (i * 2 - 1) Stars ??
// //        for (int j = 1; j <= (i * 2 - 1); ++j)
// //            cout << "*";
// //
// //        cout << endl;
// //    }
// //
// //    // Here Just Reverse It ??
// //    for (int i = N; i >= 1; --i)
// //    {
// //        // Print Spaces (Number of Spaces == N - i) (i => Each Row)
// //        for (int j = N - i; j >= 1; --j)
// //            cout << " ";
// //
// //        // Each Row i Has (i * 2 - 1) Stars ??
// //        for (int j = (i * 2 - 1); j >= 1 ; --j)
// //            cout << "*";
// //
// //        cout << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        ll N;
// //        cin >> N;
// //
// //        int ones = 0;
// //
// //        while (N) {
// //            if (N % 2 == 1)
// //                ones++;
// //            N /= 2;
// //        }
// //
// //        ll sum = 0;
// //        for (int i = 0; i < ones; ++i) {
// //            sum += 1 * pow(2, i);
// //        }
// //
// //        cout << sum << endl;
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
//
//     // Recursive Function Gives Me Time Limit  ??
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cout << Fibonacci(i) << " ";
//
// // OR
//
//     // Let's Try The Iterative Version ??
// //    int N;
// //    cin >> N;
// //
// //    int prev = 0, curr = 1;
// //
// //    for (int i = 0; i < N; ++i) {
// //        if (i == 0) { cout << prev << " "; }
// //
// //        else if (i == 1) { cout << curr << " "; }
// //
// //        else {
// //            int next = prev + curr;
// //            cout << next << " ";
// //            prev = curr;
// //            curr = next;
// //        }
// //    }
//
// // --------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
//
//     int K, S;
//     cin >> K >> S;
//
//     int X = 0, Y = 0, Z = 0, cnt = 0;
//
//     for (int i = 0; i <= K; ++i)
//         for (int j = 0; j <= K; ++j)
//             if (S - i - j >= 0 && S - i - j <= K)
//                 cnt++;
//
//     cout << cnt << endl;
//
// // --------------------------------------------------------------------------------------------------
//
//     return 0;
// }
