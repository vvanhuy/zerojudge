// b532 - Xu Ly Chuoi (String Processing) - ZeroJudge
//
// == THUAT TOAN ==
// 1. Doc n dong, moi dong la 1 chuoi gom chu cai + chu so + dung 1 ky tu
//    toan tu trong tap {+, -, *, /, %}.
// 2. Duyet chuoi 1 lan de tim vi tri (idx) va gia tri (op) cua ky tu toan tu
//    do (day la ky tu chia chuoi thanh 2 nua: trai va phai).
// 3. Gom cac chu so o nua trai [0, idx) thanh so nguyen a, cac chu so o nua
//    phai (idx, size) thanh so nguyen b - bo qua moi chu cai xen giua,
//    dung cong thuc: num = num*10 + digit (bat buoc duyet dung thu tu
//    trai -> phai, vi cong thuc nay gan chat voi chieu duyet).
// 4. Dua vao op, dung switch chon dung phep tinh roi in ket qua a <op> b.
//
// Do phuc tap moi dong: O(L), voi L la do dai chuoi (duyet toi da 3 lan
// qua chuoi: 1 lan tim op, 1 lan gom a, 1 lan gom b).
//
// Bug da gap va sua: cin >> n roi goi getline() ngay sau se bi lech dong
// neu chi dung cin.ignore() mac dinh (chi bo 1 ky tu). Phai dung ban 2
// tham so cin.ignore(so_luong_lon, '\n') de bo HET phan con lai cua dong,
// ke ca khi co nhieu hon 1 dau cach thua.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore(1e9, '\n');  // bo het ky tu con sot lai tren dong dau, toi '\n'

    string s;
    while (n--) {
        getline(cin, s);

        // Buoc 1: tim vi tri (idx) va ky tu toan tu (op)
        int idx = -1;
        char op;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' ||
                s[i] == '/' || s[i] == '%') {
                op = s[i];
                idx = i;
            }
        }

        // Buoc 2: gom so a tu nua trai [0, idx), bo qua chu cai
        int a = 0;
        for (int i = 0; i < idx; i++) {
            if (isdigit(s[i])) {
                a = a * 10 + (s[i] - '0');
            }
        }

        // Buoc 3: gom so b tu nua phai (idx, size), bo qua chu cai
        int b = 0;
        for (int i = idx + 1; i < (int)s.size(); i++) {
            if (isdigit(s[i])) {
                b = b * 10 + (s[i] - '0');
            }
        }

        // Buoc 4: chon dung phep tinh theo op, in ket qua
        switch (op) {
            case '+':
                cout << a + b << "\n";
                break;
            case '-':
                cout << a - b << "\n";
                break;
            case '*':
                cout << a * b << "\n";
                break;
            case '/':
                cout << a / b << "\n";
                break;
            default:  // '%'
                cout << a % b << "\n";
                break;
        }
    }

    return 0;
}