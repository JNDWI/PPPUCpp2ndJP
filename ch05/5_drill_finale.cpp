// ドリル
//  ここでは２５種類のコードを示す。それらは以下の「足場」に組み込むためのものだ。

/*
 *  #include "std_lib_facilities.h"
 *
 *  int main()
 *  try{
 *      << コードをここに入力 >>
 *      keep_window_open();
 *      return 0;
 *  }
 *  catch (exception& e) {
 *      cerr << "error: " << e.what() << '\n';
 *      keep_window_open();
 *      return 1;
 *  }
 *  catch (...) {
 *      cerr << "Oops: unknown exception!\n";
 *      keep_window_open();
 *      return 2;
 *  }
 */

//  以下のコードには、エラーが一つ以上含まれているものと、含まれていないものがある。ここでの課題は、各コードのエラーをすべて見つけ出して
//  取り除くことだ。バグが取り除かれたプログラムは正しくコンパイルされ、実行され、"Success!"
//  を出力する。エラーを見つけたと思っても、
//  （元の改善されていない）コードを入力してテストしてみる必要がある。エラーと思っていたものが実際にはそうではないこともあるし、見つけたもの
//  以外にもエラーがあるかもしれない。また、使用しているコンパイラーがさまざまな種類のエラーにどのように反応するかを確かめることも、この
//  ドリルの目的の１つである。それから、足場コードを２５回も入力しないこと。それらは切り取りと貼り付けか、同様の「機械的な」な手法に任せれば
//  よい。問題を修正する際には、文を削除してしまうのではなく、文字を変更、追加、削除するという方法で修正するようにしよう。

// コメント
//  このドリルには２５のコードが記載されている。これらすべてのコードをこの一つの「足場」に組み込む。問題一つ一つに個別のソースファイルを用意するのは
//  大変手間がかかるため、すべてまとめてやることにした。コメントには本で書かれた直すべきコード、その下に修正したコードを書いておいた。
//  変数名の重複を避けるためにオリジナルの変数名を使用している。
//  Linux上で実行したので keep_window_open() は使用していない。
//  cout << "n: ";という文を実行結果を見やすくするために追加している。

//  コンパイラーは Clang、実行環境は Gentoo WSL2。

#include "../include/std_lib_facilities.h"

int
main()
try {
    /*
     *  1: Cout << "Success!\n";
     *
     *  コンパイルエラー:   error: use of undeclared identifier 'Cout'; did you
     * mean 'cout'?
     */
    cout << "1: ";
    cout << "Success!\n";

    /*
     *  2: cout << "Success!\n;
     *
     *  コンパイルエラー:   error: expected expression
     */
    cout << "2: ";
    cout << "Success!\n";

    /*
     *  3: cout << "Success" << !\n"
     *
     *  コンパイルエラー:   error: expected expression
     */
    cout << "3: ";
    cout << "Success"
         << "!\n";

    /*
     *  4: cout << success << '\n';
     *
     *  コンパイルエラー:   error: use of undeclared identifier 'success'
     */
    cout << "4: ";
    cout << "Success!" << '\n';

    /*
     *  5: string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
     *
     *  コンパイルエラー:   error: no viable conversion from 'int' to
     * 'std::string' (aka 'basic_string<char>') error: assigning to 'int' from
     * incompatible type 'std::string' (aka 'basic_string<char>')
     */
    cout << "5: ";
    int res = 7;
    vector<int> v5(10);
    v5[5] = res;
    cout << "Success!\n";

    /*  6: vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
     *
     *  コンパイルエラー:   error: type 'Vector<int>' does not provide a call
     * operator error: type 'Vector<int>' does not provide a call operator
     */
    cout << "6: ";
    vector<int> v6(10);
    v6[5] = 7;
    if (v6[5] == 7)
        cout << "Success!\n";

    /*
     *  7: if (cond) cout << "Success!\n"; else cout << "Fail!\n";
     *
     *  コンパイルエラー:   error: use of undeclared identifier 'cond'
     */
    cout << "7: ";
    if (cout)
        cout << "Success!\n";
    else
        cout << "Fail!\n";

    /*
     *  8: bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
     *
     *  論理エラー:  ifの条件文が常に false である。
     */
    cout << "8: ";
    bool c8 = false;
    if (!c8)
        cout << "Success!\n";
    else
        cout << "Fail!\n";

    /*
     *  9: string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
     *
     *  コンパイルエラー:   error: use of undeclared identifier 'boo'; did you
     * mean 'bool'? 論理エラー:  cは false のため、ifの条件文が常井 false
     * である。
     */
    cout << "9: ";
    string s9 = "ape";
    bool c9 = "fool" < s9;
    if (!c9)
        cout << "Success!\n";

    /*
     *  10: string s = "ape"; if (s=="fool") cout << "Success!\n";
     *
     *  論理エラー:  ifの条件文が常に false である。
     */
    cout << "10: ";
    string s10 = "ape";
    if (s10 != "fool")
        cout << "Success!\n";

    /*
     *  11: string s = "ape"; if (s=="fool") cout < "Success!\n";
     *
     *  コンパイルエラー:   error: invalid operands to binary expression
     * ('std::ostream' (aka 'basic_ostream<char>') and 'const char [10]')
     *  論理エラー:  ifの条件文が常に false である。
     */
    cout << "11: ";
    string s11 = "ape";
    if (s11 != "fool")
        cout << "Success!\n";

    /*
     *  12: string s = "ape"; if (s+"fool") cout < "Success!\n";
     *
     *  コンパイルエラー:   error: value of type 'basic_string<char>' is not
     * contextually convertible to 'bool' error: invalid operands to binary
     * expression ('std::ostream' (aka 'basic_ostream<char>') and 'const char
     * [10]')
     */
    cout << "12: ";
    string s12 = "ape";
    if (s12 != "fool")
        cout << "Success!\n";

    /*
     *  13: vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout <<
     * "Success!\n";
     *
     *  論理エラー:  forの条件文 0<v.size() が不適切である。
     */
    cout << "13: ";
    vector<char> v13(5);
    for (int i = 0; i < v13.size(); ++i)
        ;
    cout << "Success!\n";

    /*
     *  14: vector<char> v(5); for (int i=0; i<=v.size(); ++i); cout <<
     * "Success!\n";
     *
     *  エラーはないが、一つ違いのエラーに似ている。
     */
    cout << "14: ";
    vector<char> v14(5);
    for (int i = 0; i <= v14.size(); ++i)
        ;
    cout << "Success!\n";

    /*
     *  15: string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
     *
     *  論理エラー:  string
     * の要素が6以上かつ、6はマジックナンバーなので非常によろしくない。
     */
    cout << "15: ";
    string s15 = "Success!\n";
    for (int i = 0; i < s15.size(); ++i)
        cout << s15[i];

    /*
     *  16: if (true) then cout << "Success!\n"; else cout << "Fail!\n";
     *
     *  コンパイルエラー:   error: unknown type name 'then'
     *                    error: expected ';' at end of declaration
     */
    cout << "16: ";
    if (true)
        cout << "Success!\n";
    else
        cout << "Fail!\n";

    /*
     *  17: int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
     *
     *  論理エラー:  char型に 2000は入らないので丸められた値が入る。
     */
    cout << "17: ";
    int x17 = 2000;
    int c17 = x17;
    if (c17 == 2000)
        cout << "Success!\n";

    /*
     *  18: string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
     *
     *  何もエラーはないが、マジックナンバーは非常によろしくないのでこれだけ直しておく。
     */
    cout << "18: ";
    string s18 = "Success!\n";
    for (int i = 0; i < s18.size(); ++i)
        cout << s18[i];

    /*
     *  19: vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
     *
     *  コンパイルエラー:   error: use of class template 'Vector' requires
     * template arguments
     *
     *  一つ違いエラーにみえるが、動作はするのでこれは修正しない。
     */
    cout << "19: ";
    vector<int> v19(5);
    for (int i = 0; i <= v19.size(); ++i)
        ;
    cout << "Success!\n";

    /*
     *  20: int i = 0; int j = 9; while (i<10) ++j; if (j<i) cout <<
     * "Success!\n";
     *
     *  論理エラー:  whileの条件文と実行文が不適切である。
     */
    cout << "20: ";
    int i20 = 0;
    int j20 = 9;
    while (i20 < 10)
        ++i20;
    if (j20 < i20)
        cout << "Success!\n";

    /*
     *  21: int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n";
     *
     *  ランタイムエラー:   Floating point exception
     *
     *  xが2であるかぎり、dは
     * 5/0になり、エラーが起こる。 5.0に変更するべき。ifの条件文がtrueになるように、double
     * d　の右側の式を 変更する。
     */
    cout << "21: ";
    int x21 = 2;
    double d21 = 5.0 / x21 + 2;
    if (d21 == 2 * x21 + 0.5)
        cout << "Success!\n";

    /*
     *  22: string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout
     * <<s[i];
     *
     *  コンパイルエラー:   error: expected unqualified-id
     */
    cout << "22: ";
    string s22 = "Success!\n";
    for (int i = 0; i < s22.size(); ++i)
        cout << s22[i];

    /*
     *  23: int i = 0; while (i<10) ++j; if(j<i) cout << "Success!\n";
     *
     *  コンパイルエラー:   use of undeclared identifier 'j23'
     */
    cout << "23: ";
    int i23 = 0;
    int j23 = 0;
    while (i23 < 10)
        ++i23;
    if (j23 < i23)
        cout << "Success!\n";

    /*
     *  24: int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
     *
     *  論理エラー:  double の右の式の 5 に小数点がない。ifの条件文が ==
     * じゃない。
     */
    cout << "24: ";
    int x24 = 4;
    double d24 = 5.0 / (x24 - 2);
    if (d24 == (x24 / 2.0) + 0.5)
        cout << "Success!\n";

    /*
     *  25: cin << "Success!\n";
     *
     *  コンパイルエラー:   error: invalid operands to binary expression
     * ('std::istream' (aka 'basic_istream<char>') and 'const char [10]')
     */
    cout << "25: ";
    cout << "Success!\n";

    return 0;

} catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
} catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
}
