// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int R_Fibonacci (int N)
// {
//     if (N == 1) { return 0; }
//     if (N == 2) { return 1; }
//     return R_Fibonacci(N - 1) + R_Fibonacci(N - 2);
// }
//
//
// int main()
// {
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
//
// //    const int sz = 1e5+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    ll sum = 0;
// //
// //    for (int i = 0; i < N; ++i) {
// //        cin >> arr[i];
// //
// //        sum += arr[i];
// //    }
// //
// //    if (sum < 0)
// //        cout << -1 * sum << endl;
// //    else
// //        cout << sum << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
//
// //    const int sz = 1e5+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> arr[i];
// //
// //    int X;
// //    cin >> X;
// //
// //    for (int i = 0; i < N; ++i) {
// //        if (X == arr[i]) {
// //            cout << i << endl;
// //            break;
// //        } else {
// //            if (i == N - 1)
// //                cout << -1 << endl;
// //        }
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i) {
// //        cin >> arr[i];
// //
// //        if (arr[i] > 0)
// //            cout << 1 << " ";
// //        else if (arr[i] < 0)
// //            cout << 2 << " ";
// //        else
// //            cout << 0 << " ";
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i) {
// //        cin >> arr[i];
// //
// //        if (arr[i] <= 10)
// //            cout << "A[" << i << "] = " << arr[i] << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    int mn = INT_MAX;
// //
// //    for (int i = 1; i <= N; ++i) {
// //        cin >> arr[i];
// //
// //        if (arr[i] < mn) {
// //            mn = arr[i];
// //        }
// //    }
// //
// //    cout << mn << " ";
// //
// //    for (int i = 1; i <= N; ++i) {
// //        if (mn == arr[i]) {
// //            cout << i << endl;
// //            break;
// //        }
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> arr[i];
// //
// //    for (int i = N - 1; i >= 0; --i)
// //        cout << arr[i] << " ";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
//
// //    const int sz = 1e5+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    bool palindrome = true;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> arr[i];
// //
// //    for (int i = 0; i < N / 2; ++i) {
// //        if (arr[i] != arr[N - i - 1]) {
// //            palindrome = false;
// //            break;
// //        }
// //    }
// //
// //    if (palindrome)
// //        cout << "YES";
// //    else
// //        cout << "NO";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> arr[i];
// //
// //    // This Is Bubble Sort ???
// //    // Number Of Passes (N - 1) ??
// //    for (int i = 0; i < N - 1; ++i) {
// //        // This is The Number Of Comparison and Swaps Happened
// //        // Know Why We Use N -i - 1 Because The Number Comparisons is Reduced Each Time By One
// //        // As The Greatest Element Get Ordered Each Time.
// //        for (int j = 0; j < N - i - 1; ++j) {
// //            if (arr[j] > arr[j + 1]) {
// //                int temp = arr[j];
// //                arr[j] = arr[j + 1];
// //                arr[j + 1] = temp;
// //            }
// //        }
// //    }
// //
// //    for (int i = 0; i < N; ++i)
// //        cout << arr[i] << " ";
//
// //// OR
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> arr[i];
// //
// //    // This Is Selection Sort ???
// //    // This Is Also The Number of Passes
// //    for (int i = 0; i < N - 1; ++i) {
// //        int min_idx = i;  // I Use Here min_idx and it Point At i ??
// //        // This IS The Inner Movement of Element ??
// //        for (int j = i + 1; j < N; ++j)
// //            if (arr[j] < arr[min_idx])
// //                min_idx = j;  // I Here Change min_idx To Point On j IF Element That j Points Less Than min_idx
// //
// //        // Apply Swapping => To Make The Smallest Element To Go The Start ??
// //        int temp = arr[i];
// //        arr[i] = arr[min_idx];
// //        arr[min_idx] = temp;
// //    }
// //
// //    for (int i = 0; i < N; ++i)
// //        cout << arr[i] << " ";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        int N;
// //        cin >> N;
// //
// //        for (int i = 1; i <= N; ++i)
// //            cin >> arr[i];
// //
// //        int min_res = INT_MAX;
// //
// //        for (int i = 1; i <= N; ++i) {
// //            for (int j = i + 1; j <= N; ++j) {
// //                int equ = arr[i] + arr[j] + j - i;
// //                if (equ < min_res) {
// //                    int temp = equ;
// //                    equ = min_res;
// //                    min_res = temp;
// //                }
// //            }
// //        }
// //
// //        cout << min_res << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    int min_one = INT_MAX;
// //
// //    for (int i = 0; i < N; ++i) {
// //        cin >> arr[i];
// //
// //        int arr_copy = arr[i];
// //
// //        if (arr_copy < min_one) {
// //            int temp = arr_copy;
// //            arr_copy = min_one;
// //            min_one = temp;
// //        }
// //    }
// //
// //    int cnt = 0;
// //
// //    for (int i = 0; i < N; ++i)
// //        if (arr[i] == min_one)
// //            cnt++;
// //
// //    if (cnt % 2 == 0)
// //        cout << "Unlucky\n";
// //    else
// //        cout << "Lucky\n";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
//
// //    int N;
// //    cin >> N;
// //
// //    string digits;
// //    cin >> digits;
// //
// //    int sum = 0;
// //
// //    for (int i = 0; i < N; ++i) {
// //        sum += digits[i] - '0'; // Convert Char To Integer ??
// //    }
// //
// //    cout << sum << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
//
// //    const int sz = 1e2+10;
// //    int arr[sz];
// //
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        int N;
// //        cin >> N;
// //
// //        for (int i = 0; i < N; ++i)
// //            cin >> arr[i];
// //
// //        for (int i = 0; i < N; ++i) {
// //            int current_max = arr[i];
// //
// //            for (int j = i; j < N; ++j) {
// //                current_max = max(current_max, arr[j]);
// //                cout << current_max << " ";
// //            }
// //        }
// //        cout << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> arr[i];
// //
// //    int mn, mx;
// //
// //    for (int i = 0; i < N; ++i) {
// //        mn = arr[i], mx = arr[i];
// //        for (int j = 0; j < N; ++j) {
// //            mn = min(mn, arr[j]);
// //            mx = max(mx, arr[j]);
// //        }
// //    }
// //
// //    for (int i = 0; i < N; ++i) {
// //        if (arr[i] == mx)
// //            arr[i] = mn;
// //        else if (arr[i] == mn)
// //            arr[i] = mx;
// //
// //        cout << arr[i] << " ";
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
//
// //    int A, B;
// //    string S;
// //
// //    cin >> A >> B >> S;
// //
// //    bool valid = true;
// //
// //    // Check if character at A is '-'
// //    if (S[A] != '-') {
// //        valid = false;
// //    }
// //
// //    // Check all characters except position A are digits
// //    for (int i = 0; i < S.size(); ++i) {
// //        if (i == A) continue;
// //
// //        if (!isdigit(S[i])) {
// //            valid = false;
// //            break;
// //        }
// //    }
// //
// //    if (valid)
// //        cout << "Yes\n";
// //    else
// //        cout << "No\n";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
//
// //    const int sz = 1e3+10;
// //    int arr[sz];
// //
// //    int N;
// //    cin >> N;
// //
// ////    // Time Limit ??
// ////    cout << R_Fibonacci(N) << endl;
// //
// //    if (N == 1) {
// //        cout << 0 << endl;
// //        return 0;
// //    }
// //    if (N == 2) {
// //        cout << 1 << endl;
// //        return 0;
// //    }
// //
// //    long long prev = 0, curr = 1;
// //
// //    for (int i = 2; i <= N; ++i) {
// //        long long next = prev + curr;
// //        prev = curr;
// //        curr = next;
// //    }
// //
// //    cout << prev << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
//
// //    int N;
// //    cin >> N;
// //
// //    vector<int> vec(N);
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> vec[i];
// //
// //    int min_ops = INT_MAX;
// //
// //    for (int i = 0; i < N; ++i) {
// //        int cnt = 0;
// //        while (vec[i] % 2 == 0) {
// //            vec[i] /= 2;
// //            cnt++;
// //        }
// //        min_ops = min(min_ops, cnt);
// //    }
// //
// //    cout << min_ops << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
//
// //    const int sz = 1e2 + 5;
// //    int A[sz];
// //
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        int N;
// //        cin >> N;
// //
// //        for (int i = 0; i < N; i++)
// //            cin >> A[i];
// //
// //        long long cnt = 0;
// //        int len = 1;
// //
// //        for (int i = 1; i < N; i++) {
// //            if (A[i] >= A[i - 1]) {
// //                len++;  // Extend current non-decreasing sequence
// //            } else {
// //                // End of non-decreasing block
// //                cnt += 1LL * len * (len + 1) / 2;
// //                len = 1;
// //            }
// //        }
// //
// //        // Count for the last segment
// //        cnt += 1LL * len * (len + 1) / 2;
// //
// //        cout << cnt << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
//
// //    const int sz = 1e3+10;
// //    int A[sz], B[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> B[i];
// //
// //    // Sort The Two Arrays Then Compare ??
// //
// //    sort(A, A + N);
// //    sort(B, B + N);
// ////    // Wrong Answer On Test 3 ??
// ////    // Bubble Sort For Vector A ??
// ////    for (int i = 0; i  < N - 1; ++i) {
// ////        for (int j = i; j < N - i - 1; ++j) {
// ////            if (A[j] > A[j + 1]) {
// ////                int temp = A[j];
// ////                A[j] = A[j + 1];
// ////                A[j + 1] = temp;
// ////            }
// ////        }
// ////    }
// ////
// ////    // Selection Sort For Vector B ??
// ////    for (int i = 0; i < N - 1; ++i) {
// ////        int max_idx = i;
// ////
// ////        for (int j = i + 1; j < N; ++j)
// ////            if (B[j] < B[max_idx])
// ////                max_idx = j;
// ////
// ////        int temp = B[i];
// ////        B[i] = B[max_idx];
// ////        B[max_idx] = temp;
// ////    }
// //
// //    for (int i = 0; i < N; ++i) {
// //        if (A[i] != B[i]) {
// //            cout << "no\n";
// //            return 0;
// //        }
// //    }
// //
// //    cout << "yes\n";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
//
// //    const int sz = 1e2 + 5;
// //    int arr[sz][sz];
// //
// //    int N, M;
// //    cin >> N >> M;
// //
// //    for (int i = 0; i < N; ++i)
// //        for (int j = 0; j < M; ++j)
// //            cin >> arr[i][j];
// //
// //    bool flag = false;
// //
// //    int X;
// //    cin >> X;
// //
// //    for (int i = 0; i < N; ++i) {
// //        for (int j = 0; j < M; ++j) {
// //            if (arr[i][j] == X)
// //                flag = true;
// //        }
// //    }
// //
// //    if (flag)
// //        cout << "will not take number\n";
// //    else
// //        cout << "will take number\n";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
//
// //    const int sz = 1e2 + 5;
// //    int arr[sz][sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        for (int j = 0; j < N; ++j)
// //            cin >> arr[i][j];
// //
// //    int sum_primary_diagona = 0, sum_secondary_diagonal = 0;
// //
// //    for (int i = 0; i < N; ++i) {
// //        for (int j = 0; j < N; ++j) {
// //            if (i == j)
// //                sum_primary_diagona += arr[i][j];
// //            if (i == N - j - 1)
// //                sum_secondary_diagonal += arr[i][j];
// //        }
// //    }
// //
// //    cout << abs(sum_primary_diagona - sum_secondary_diagonal) << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
//
// //    const int sz = 1e4 + 10;
// //    int A[sz], B[sz];
// //
// //    int N, M;
// //    cin >> N >> M;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    for (int i = 0; i < M; ++i)
// //        cin >> B[i];
// //
// //    int sub_sequence = 0;
// //
// //    for (int i = 0; i < N; ++i) {
// //        if (A[i] == B[sub_sequence])
// //            sub_sequence++;
// //    }
// //
// //    if (sub_sequence == M)
// //        cout << "YES\n";
// //    else
// //        cout << "NO\n";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
//
// //    const int sz = 1e5 + 5;
// //    int A[sz];
// //    int res[sz] = {};
// //
// //    int N, M;
// //    cin >> N >> M;
// //
// //    for (int i = 1; i <= N; ++i) {
// //        cin >> A[i];
// //        res[A[i]]++;
// //    }
// //
// //    for (int i = 1; i <= M; ++i)
// //        cout << res[i] << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
//
// //    const int sz = 1e2 + 5;
// //    int arr[sz][sz];
// //
// //    int N, M;
// //    cin >> N >> M;
// //
// //    for (int i = 0; i < N; ++i)
// //        for (int j = 0; j < M; ++j)
// //            cin >> arr[i][j];
// //
// //    for (int i = 0; i < N; ++i) {
// //        for (int j = M - 1; j >= 0; --j)
// //            cout << arr[i][j] << " ";
// //        cout << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
//
// //    const int sz = 1e2 + 5;
// //    char A[sz][sz];
// //
// //    int N, M;
// //    cin >> N >> M;
// //
// //    for (int i = 1; i <= N; ++i)
// //        for (int j = 1; j <= M; ++j)
// //            cin >> A[i][j];
// //
// //    int X, Y;
// //    cin >> X >> Y;
// //
// //
// //    if (
// //        A[X - 1][Y] != '.' &&         // Previous Row
// //        A[X + 1][Y] != '.' &&         // Next Row
// //        A[X][Y - 1] != '.' &&         // Previous Column
// //        A[X][Y + 1] != '.' &&         // Next Column
// //        A[X - 1][Y - 1] != '.' &&     // Left Previous Diagonal
// //        A[X - 1][Y + 1] != '.' &&     // Right Previous Diagonal
// //        A[X + 1][Y - 1] != '.' &&     // Left Next Diagonal
// //        A[X + 1][Y + 1] != '.'        // Right Next Diagonal
// //    )
// //        cout << "yes";
// //    else
// //        cout << "no";
//
// // OR
//
// //// Using Direction Array (More Clean and Professional)
//
// //    const int sz = 1e2 + 5;
// //    char A[sz][sz];
// //
// //    int N, M;
// //    cin >> N >> M;
// //
// //    for (int i = 1; i <= N; ++i)
// //        for (int j = 1; j <= M; ++j)
// //            cin >> A[i][j];
// //
// //    int X, Y;
// //    cin >> X >> Y;
// //
// //    bool flag = true;
// //
// //    // Focus Just As Same As Above But More Clean ??
// //    int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
// //    int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
// //
// //    // 8 ==> For The Eight Directions ??
// //    for (int d = 0; d < 8; ++d) {
// //        int nx = X + dx[d]; // The X New Direction After Changing Directions By Adding and Subtracting Direction Array
// //        int ny = Y + dy[d]; // The Y New Direction After Changing Directions By Adding and Subtracting Direction Array
// //
// //        if (nx >= 1 && nx <= N && ny >= 1 && ny <= M) {
// //            if (A[nx][ny] != 'x') {
// //                flag = false;
// //                break;
// //            }
// //        }
// //    }
// //
// //    if (flag)
// //        cout << "yes";
// //    else
// //        cout << "no";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
//
// //    // Time Limit ???
// //    const int sz = 1e5 + 10;
// //    int A[sz];
// //
// //    int N, Q;
// //    cin >> N >> Q;
// //
// //    for (int i = 1; i <= N; ++i)
// //        cin >> A[i];
// //
// //    while (Q--) {
// //        int L, R;
// //        cin >> L >> R;
// //
// //        int sum = 0;
// //
// //        for (int i = L; i <= R; ++i)
// //            sum += A[i];
// //
// //        cout << sum << endl;
// //    }
//
// // OR
//
// //// Using prefix sum (( Prefix Array ))
//
// //    const int sz = 1e5 + 10;
// //    ll A[sz], prefix[sz];
// //
// //    int N, Q;
// //    cin >> N >> Q;
// //
// //    for (int i = 1; i <= N; ++i)
// //        cin >> A[i];
// //
// //    prefix[0] = 0;
// //    for (int i = 1; i <= N; ++i)
// //        prefix[i] = prefix[i - 1] + A[i];
// //
// //    // This prefix Array Will Contain The Summation From 1 (Start) To N (End)
// //    // And What we Do Is To Reuse It For Our Numbers L, R ??
// //
// //    while (Q--) {
// //        int L, R;
// //        cin >> L >> R;
// //
// //        // Use The Prepared prefix Array To Get Sum From L => R
// //        cout << prefix[R] - prefix[L - 1] << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
//
//     unordered_set<int> A;
//
//     int N, Q;
//     cin >> N >> Q;
//
//     for (int i = 1; i <= N; ++i) {
//         int ele;
//         cin >> ele;
//         A.insert(ele);
//     }
//
//
//     while(Q--) {
//         int X;
//         cin >> X;
//
//         if (A.count(X)) // If Counting Number of X Values Not Equal To Zero (Means that X is in A)
//             cout << "found\n";
//         else
//             cout << "not found\n";
//     }
//
// // -----------------------------------------------------------------------------------------------------
//
//     return 0;
// }
