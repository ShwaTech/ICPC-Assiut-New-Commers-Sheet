// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
//
// //    string S, T;
// //    cin >> S >> T;
// //
// //    cout << S.size() << " " << T.size() << endl;
// //    cout << S << " " << T;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
//
// //    string S;
// //    getline(cin, S);
// //
// //    for (int i = 0; i < S.size(); ++i)
// //        if (S[i] != '\\')
// //            cout << S[i];
// //        else
// //            break;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
//
// //    string X, Y;
// //    getline(cin, X);
// //    getline(cin, Y);
// //
// //    if (X > Y)
// //        cout << Y;
// //    else
// //        cout << X;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
//
// //    string S1, S2;
// //    getline(cin, S1);
// //    getline(cin, S2);
// //
// //    cout << S1.size() << " " << S2.size() << endl;
// //
// //    cout << S1 + S2 << endl;
// //
// //    char first_S1_Char = S1[0];
// //    char first_S2_Char = S2[0];
// //
// //    S1[0] = first_S2_Char;
// //    S2[0] = first_S1_Char;
// //
// //    cout << S1 << " " << S2 << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
//
// //    string S;
// //    getline(cin, S);
// //
// //    int sum = 0;
// //
// //    for (int i = 0; i < S.size(); ++i)
// //        sum += S[i] - '0';
// //
// //    cout << sum;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        string S;
// //        cin >> S;
// //
// //        if (S.size() <= 10)
// //            cout << S << endl;
// //        else {
// //            cout << S[0];
// //            cout << S.size() - 2;
// //            cout << S[S.size() - 1] << endl;
// //        }
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
//
// //    string S;
// //    cin >> S;
// //
// //    for (int i = 0; i < S.size(); ++i) {
// //        if (S[i] == ',')
// //            cout << ' ';
// //        else {
// //            if (S[i] >= 65 && S[i] <= 90)
// //                cout << char(S[i] + 32);
// //            else if (S[i] >= 97 && S[i] <= 122)
// //                cout << char(S[i] - 32);
// //        }
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        string S;
// //        cin >> S;
// //
// //        // It represents "no position" — meaning "not found"
// //        // It's actually a very large number (specifically, it's the maximum value an unsigned size type can hold, like 4294967295).
// //        // Simply As find Method Returns The Position or Index of The Given Value
// //        // IF the Value Given Is Really Found In Our String Then Its Position Is Impossible To Equal sting::npos ???
// //        if (S.find("010") != string::npos || S.find("101") != string::npos)
// //            cout << "Good\n";
// //        else
// //            cout << "Bad\n";
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
//
// //    string S;
// //    cin >> S;
// //
// //    string reversed_S;
// //
// //    for (int i = S.size() - 1; i >= 0; --i)
// //        reversed_S += S[i];
// //
// //    if (S == reversed_S)
// //        cout << "YES";
// //    else
// //        cout << "NO";
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
//
// //    const int sz = 26; // All Letters ??
// //    int freq[sz]  {0};
// //
// //    string S;
// //    cin >> S;
// //
// //    for (char C : S)
// //        freq[C - 'a']++;
// //        // I Here Subtract from each char 'a' to normalize it to index from (0 : 25)
// //        // freq['a' - 'a'] == freq[0]
// //        // freq['b' - 'a'] == freq[1]
// //        // freq['c' - 'a'] == freq[2]
// //        // freq['d' - 'a'] == freq[3]
// //        // freq['e' - 'a'] == freq[4]
// //
// //    for (int i = 0; i < sz; ++i)
// //        if (freq[i] > 0)
// //            cout << char(i + 'a') << " : " << freq[i] << endl;
// //
// ////    For S = "aaabbc" :::>
// ////
// ////        freq['a' - 'a']++ → freq[0]++ → count of a becomes 3
// ////
// ////        freq['b' - 'a']++ → freq[1]++ → count of b becomes 2
// ////
// ////        freq['c' - 'a']++ → freq[2]++ → count of c becomes 1
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
//
// //    // Wrong Answer At Test 2 ???????
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        string S1, S2;
// //        cin >> S1 >> S2;
// //
// //        for (int i = 0; i < max(S1.size(), S2.size()); ++i) {
// //            if (S1[i] && S2[i])
// //                cout << S1[i] << S2[i];
// //            else if (S1[i] && S2[i] == '\0')
// //                cout << S1[i];
// //            else if (S1[i] == '\0' && S2[i])
// //                cout << S2[i];
// //        }
// //        cout << endl;
// //    }
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        string S1, S2;
// //        cin >> S1 >> S2;
// //
// //        int lenS1 = S1.size();
// //        int lenS2 = S2.size();
// //        int maxlen = max(lenS1, lenS2);
// //
// //        string combined = "";
// //
// //        for (int i = 0; i < maxlen; ++i) {
// //            if (i < lenS1)  { combined += S1[i]; }
// //            if (i < lenS2)  { combined += S2[i]; }
// //        }
// //
// //        cout << combined << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
//
// //    int N, Q;
// //    cin >> N >> Q;
// //
// //    string S;
// //    cin >> S;
// //
// //    while (Q--) {
// //        string operation;
// //        cin >> operation;
// //
// //        if (operation == "pop_back") {
// //            if (!S.empty())
// //                S.pop_back();
// //        }
// //        else if (operation == "front") {
// //            if (!S.empty())
// //                cout << S.front() << endl;
// //        }
// //        else if (operation == "back") {
// //            if (!S.empty())
// //                cout << S.back() << endl;
// //        }
// //        else if (operation == "sort") {
// //            int L, R;
// //            cin >> L >> R;
// //
// //            // It Must Be As This If We Start From Index 0
// //            //  sort (S.begin() + min(L, R) - 1, S.begin() + max(L, R));
// //            // But I Here Start From Index 1
// //            sort (S.begin() + min(L, R) - 1, S.begin() + max(L, R));
// //        }
// //        else if (operation == "reverse") {
// //            int L, R;
// //            cin >> L >> R;
// //
// //            // It Is Like Sort ??
// //            reverse (S.begin() + min(L, R) - 1, S.begin() + max(L, R));
// //        }
// //        else if (operation == "print") {
// //            int pos;
// //            cin >> pos;
// //
// //            if (pos >= 1 && pos <= S.length())
// //            cout << S[pos-1] << endl;
// //        }
// //        else if (operation == "substr") {
// //            int L, R;
// //            cin >> L >> R;
// //
// //            cout << S.substr(min(L, R) - 1, max(L, R) - min(L, R) + 1) << endl;
// //        }
// //        else if (operation == "push_back") {
// //            char X;
// //            cin >> X;
// //            S.push_back(X);
// //        }
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
//
// //    string S;
// //    cin >> S;
// //
// //    string hello = "hello";
// //
// //    int j = 0;
// //
// //    for (int i = 0; i < S.size(); ++i) {
// //        if (S[i] == hello[j])
// //            j++;
// //        if (j == 5) {
// //            cout << "YES";
// //            break;
// //        }
// //    }
// //
// //    if (j != 5)
// //        cout << "NO";
//
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
//
// //    int N;
// //    cin >> N;
// //
// //    string S;
// //    cin >> S;
// //
// //    // I Make It 1 As We Always Take The First Char Only ???
// //    int cnt = 1;
// //
// //    for (int i = 1; i < S.size(); ++i) {
// //        if (S[i] != S[i-1])
// //            // Sense The Char is Not Equal To The Previous one To IT Then Increase The Counter ??
// //            cnt++;
// //    }
// //
// //    cout << cnt;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
//
// //    int N;
// //    cin >> N;
// //    cin.ignore();
// //
// //    // Please, Put It Outside The Main To Work Exactly ??
// //    int freq[26] = {};
// //
// //    for (int i = 0; i < N; ++i) {
// //        // I Here Must Use getchar() For Memory Saving ??
// //        char C = getchar();
// //        freq[C - 'a']++;
// //    }
// //
// //    for (int i = 0; i < 26; ++i) {
// //        while (freq[i]--)
// //            putchar(i + 'a');
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
//
// //    string S;
// //    getline(cin, S);
// //
// //    int cnt = 0;
// //    bool inWord = false;
// //
// //    for (char C : S) {
// //
// ////        If c is a letter, and we’re not already inside a word, that means a new word has started, so:
// ////        Increment the word count.
// ////        Set inWord = true (we're now inside a word).
// //        if ((C >= 'a' && C <= 'z') || (C >= 'A' && C <= 'Z')) {
// //            if (!inWord) {
// //                cnt++;
// //                inWord = true;
// //            }
// //        }
// ////        If c is not a letter, we set inWord = false,
// ////        meaning we’re outside of a word, waiting for the next word to begin.
// //        else {
// //            inWord = false;
// //        }
// //    }
// //
// //    cout << cnt;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
//
// //    string S;
// //    getline(cin, S); // Read the full line including spaces
// //
// //    int len = S.length();
// //    int start = 0;
// //
// //    for (int i = 0; i <= len; ++i) {
// //
// //        // When we reach a space or end of string, reverse the word
// //        if (i == len || S[i] == ' ') {
// //            // Here i Will Progress Till Find Space means The End Of The Word ???
// //            reverse(S.begin() + start, S.begin() + i);
// //
// //            start = i + 1; // Move start to the beginning of the next word ??
// //        }
// //    }
// //
// //    cout << S << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
//
// //    int N;
// //    cin >> N;
// //
// //    string S;
// //    cin >> S;
// //
// //    int score = 0;
// //
// //    for (int i = 0; i < S.size(); ++i) {
// //        char ch = S[i];
// //
// //        switch(ch) {
// //            case 'V':
// //                score += 5;
// //                break;
// //            case 'W':
// //                score += 2;
// //                break;
// //            case 'Z':
// //                if (i != S.size() - 1) {
// //                    if (S[i+1] == 'V') {
// //                        score /= 5;
// //                        // Put Char Zero (Means Nothing) Instead Of V Or W Which Are At S[i+1] ??
// //                        S[i+1] = '0';
// //                    } else if (S[i+1] == 'W') {
// //                        score /= 2;
// //                        S[i+1] = '0';
// //                    }
// //                }
// //                break;
// //            case 'Y':
// //                if (i != S.size() - 1) {
// //                    S.push_back(S[i+1]);
// //                    S[i+1] = '0';
// //                }
// //                break;
// //            case 'X':
// //                if (i != S.size() - 1) {
// //                    S[i+1] = '0';
// //                }
// //                break;
// //        }
// //    }
// //
// //    cout << score;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
//
// //    string S;
// //    cin >> S;
// //
// //    int balance = 0;
// //    string current = "";
// //    int cnt = 0;
// //    vector<string> BalancedString;
// //
// //    for (char ch : S) {
// //        current += ch;
// //
// //        if (ch == 'L') { balance++; }
// //        else if (ch == 'R') { balance--; }
// //
// //        if (balance == 0) {
// //            cnt++;
// //            BalancedString.push_back(current);
// //            current = "";
// //        }
// //    }
// //
// //    cout << cnt << endl;
// //
// //    for (string S : BalancedString)
// //        cout << S << endl;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
//
// //    string URL;
// //    getline(cin, URL);
// //
// //    // Find the part after '?'
// //    size_t query_start = URL.find('?');
// //
// //    // Means That ? Not Found ??
// //    if (query_start == string::npos) { return 1; }
// //
// //    string query = URL.substr(query_start + 1); // Skipping '?' and Start After it ????
// //
// //    // Use stringstream to parse the query string
// //    stringstream ss(query);
// //    string pairs;
// //
// //    // This reads from the stringstream ss, and splits each part by the character & ???
// //    while (getline(ss, pairs, '&')) {
// //        size_t equal_position = pairs.find('=');
// //
// //        string key = pairs.substr(0, equal_position);
// //        string val = pairs.substr(equal_position + 1);
// //
// //        cout << key << ": " << val << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
//
// //    string S;
// //    cin >> S;
// //
// //    transform(S.begin(), S.end(), S.begin(), ::toupper);
// //
// //    cout << min({
// //                count(S.begin(), S.end(), 'E'),
// //                count(S.begin(), S.end(), 'G'),
// //                count(S.begin(), S.end(), 'Y'),
// //                count(S.begin(), S.end(), 'P'),
// //                count(S.begin(), S.end(), 'T')
// //            });
//
// //// OR
//
// //    string S;
// //    cin >> S;
// //
// //    for (char &C : S)
// //        C = toupper(C);
// //
// //    map<char, int> freq;
// //
// //    for (char C : S)
// //        if (C == 'E' || C == 'G' || C == 'Y' || C == 'P' || C == 'T')
// //            freq[C]++;
// //
// //    cout << min({ freq['E'], freq['G'], freq['Y'], freq['P'], freq['T'] });
//
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
//
// //    string S;
// //    cin >> S;
// //
// //    string EGYPT = "EGYPT";
// //    string S_without_EGYPT;
// //
// //    for (int i = 0; i < S.size(); ) {
// //        if (S.substr(i, 5) == EGYPT) {
// //            S_without_EGYPT.append(" ");
// //            i += 5;
// //        } else {
// //            S_without_EGYPT += S[i];
// //            ++i;
// //        }
// //    }
// //
// //    cout << S_without_EGYPT;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
//
// //    int Q;
// //    cin >> Q;
// //
// //    string S;
// //    cin >> S;
// //
// //    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
// //
// //    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
// //
// //    string encrypted, decrypted;
// //
// //    for (char &C : S) {
// //        if (Q == 1) {
// //            int each_original_char_pos = Original.find(C);
// //            encrypted += Key[each_original_char_pos];
// //        } else if (Q == 2) {
// //            int each_key_char_pos = Key.find(C);
// //            decrypted += Original[each_key_char_pos];
// //        } else {
// //            return 1;
// //        }
// //    }
// //
// //    if (Q == 1 && !encrypted.empty())
// //        cout << encrypted << endl;
// //    else if (Q == 2 && !decrypted.empty())
// //        cout << decrypted << endl;
//
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X
//
// //    string S;
// //    cin >> S;
// //
// //    if (S.size() == 1) {
// //        // If we can't split, just print the original string
// //        cout << S << endl;
// //        return 0;
// //    }
// //
// //    string min_result = "";
// //
// //    for (int i = 1; i < S.size(); ++i) {
// //        string first = S.substr(0, i);
// //        string second = S.substr(i);
// //
// //        sort (first.begin(), first.end());
// //        sort (second.begin(), second.end());
// //
// //        string combined = first + second;
// //
// //        if (min_result.empty() || combined < min_result)
// //            min_result = combined;
// //    }
// //
// //    cout << min_result;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Y
//
// //    string s;
// //    cin >> s;
// //
// //    vector<int> cost(26);
// //    for (int i = 0; i < 26; ++i) {
// //        cin >> cost[i];
// //    }
// //
// //    string result = s;
// //    int n = s.size();
// //
// //    for (int i = 0; i < n; ) {
// //        if (s[i] != '?') {
// //            ++i;
// //            continue;
// //        }
// //
// //        // Start of '?' sequence
// //        int j = i;
// //        while (j < n && s[j] == '?') ++j;
// //
// //        // Now we have s[i...j-1] as '?'
// //
// //        char leftChar = (i - 1 >= 0) ? result[i - 1] : -1;
// //        char rightChar = (j < n) ? s[j] : -1;
// //
// //        int bestCost = INT_MAX;
// //        char bestFill = 'a';
// //
// //        for (int c = 0; c < 26; ++c) {
// //            char filled = 'a' + c;
// //            int currentCost = 0;
// //
// //            if (leftChar != -1 && leftChar != '?')
// //                currentCost += abs(cost[leftChar - 'a'] - cost[filled - 'a']);
// //
// //            if (rightChar != -1 && rightChar != '?')
// //                currentCost += abs(cost[filled - 'a'] - cost[rightChar - 'a']);
// //
// //            if (currentCost < bestCost || (currentCost == bestCost && filled < bestFill)) {
// //                bestCost = currentCost;
// //                bestFill = filled;
// //            }
// //        }
// //
// //        // Fill all '?' from i to j-1 with bestFill
// //        for (int k = i; k < j; ++k) {
// //            result[k] = bestFill;
// //        }
// //
// //        i = j;
// //    }
// //
// //    // Final cost calculation
// //    long long total = 0;
// //    for (int i = 1; i < n; ++i) {
// //        total += abs(cost[result[i] - 'a'] - cost[result[i - 1] - 'a']);
// //    }
// //
// //    cout << total << "\n" << result << "\n";
//
// //// OR
//
// //    string S;
// //    cin >> S;
// //
// //    vector<int> cost(26);
// //    for (int i = 0; i < 26; ++i)
// //        cin >> cost[i];
// //
// //    int N = S.size();
// //    int cnt = 0;
// //
// //    for (int i = 0; i < N; ++i) {
// //        cnt = 0;
// //
// //        if (S[i] == '?') {
// //            for (int j = i; j < N; ++j) {
// //                if (S[j] == '?') { cnt++; }
// //                else { break; }
// //            }
// //            if (cnt == N) {
// //                cout << "0" << endl;
// //
// //                for (int j = 0; j < N; ++j) { cout << "a"; }
// //
// //                return 0;
// //            } else {
// //
// //                if (i == 0) {
// //                    int mn = INT_MAX, idx;
// //
// //                    for (int j = 0; j < (S[cnt] - 97) + 1 ; ++j) { // 97 => ASCII CODE Of a ??
// //                        int mycost = abs(cost[S[cnt] - 97] - cost[j]);
// //                        if (mycost < mn) {
// //                            mn = mycost;
// //                            idx = j;
// //                        }
// //                    }
// //
// //                    char c = idx + 97;
// //                    for (int j = 0; j < cnt; ++j) { S[j] = c; }
// //
// //                    i += cnt;
// //
// //                } else if (i + cnt == N) {
// //                    int mn = INT_MAX, idx;
// //
// //                    for (int j = 0; j < (S[i - 1] - 97) + 1 ; ++j) { // 97 => ASCII CODE Of a ??
// //                        int mycost = abs(cost[S[i - 1] - 97] - cost[j]);
// //                        if (mycost < mn) {
// //                            mn = mycost;
// //                            idx = j;
// //                        }
// //                    }
// //
// //                    char c = idx + 97;
// //                    for (int j = i; j < i + cnt; ++j) { S[j] = c; }
// //
// //                    break;
// //
// //                } else {
// //                    int mn = INT_MAX, idx;
// //
// //                    for (int j = 0; j < 26; ++j) {
// //                        int mycost = abs(cost[S[i - 1] - 97] - cost[j]) +
// //                                     abs(cost[j] - cost[S[i + cnt] - 97]);
// //
// //                        if (mycost < mn) {
// //                            mn = mycost;
// //                            idx = j;
// //                        }
// //                    }
// //
// //                    char c = idx + 97;
// //                    for (int j = i; j < i + cnt; ++j) { S[j] = c; }
// //
// //                    i += cnt;
// //                }
// //            }
// //        }
// //    }
// //
// //    long long final_cost = 0;
// //    for (int i = 0; i < N - 1; ++i) {
// //        final_cost += abs(cost[S[i] - 97] - cost[S[i+1] - 97]);
// //    }
// //
// //    cout << final_cost << endl;
// //    cout << S;
//
// // -----------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Z
//
// //    string line;
// //    bool openBlock = 1;
// //
// //    while (getline(cin, line)) {
// //        bool notComment = 0;
// //
// //        if (line.size() == 0 || line == " ") { continue; }
// //
// //        for (int i = 0; i < line.length(); ++i) {
// //            // This Is a Single Line Comment ??
// //            if (line[i] == '/' && line[i+1] == '/' && openBlock) { break; }
// //
// //            // This Is The Start Of Block Comment ??
// //            else if (line[i] == '/' && line[i+1] == '*') {
// //                i++;
// //                openBlock = 0;
// //            }
// //            // This Is The End Of Block Comment ??
// //            else if (line[i] == '*' && line[i+1] == '/' && !openBlock) {
// //                i++;
// //                openBlock = 1;
// //            }
// //            else if (openBlock) {
// //                cout << line[i];
// //                notComment = 1;
// //            }
// //        }
// //
// //        if (notComment && openBlock)
// //            cout << endl;
// //    }
//
// // -----------------------------------------------------------------------------------------------------
//
//     return 0;
// }
