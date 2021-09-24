// TRY THIS
//   これらの例をコンパイルし、コンパイラーがどのように反応するか確認する。自分でもエラーをいくつか考えて、それらも試してみる。
//
// コメント
//  オリジナルのエラーを一つ書いてコンパイルさせた。エラーログは下に記載してある。

int area(int length, int width);

int main() {
    // 本に記載されているエラーの例
    int x0 = arena(7);         // エラー: 関数が宣言されていない
    int x1 = area(7);          // エラー: 引数の個数が合わない
    int x2 = area("seven", 2); // エラー: 第１引数の型が正しくない

    // オリジナルのエラー
    int x3 = area(99999999999999999999,
                  1); //エラー: 第１引数のサイズがintに収まらない
}

// Compiler
//  Clang version 12.0.1

/*
> clang++ -W -o ../bin/ch05/Linux/5_3_2_trythis 5_3_2_trythis.cpp -std=c++11

5_3_2_trythis.cpp:9:14: error: use of undeclared identifier 'arena'
    int x0 = arena(7);          // エラー: 関数が宣言されていない
             ^
5_3_2_trythis.cpp:10:14: error: no matching function for call to 'area'
    int x1 = area(7);           // エラー: 引数の個数が合わない
             ^~~~
5_3_2_trythis.cpp:4:5: note: candidate function not viable: requires 2
arguments, but 1 was provided int area(int length, int width);
    ^
5_3_2_trythis.cpp:11:14: error: no matching function for call to 'area'
    int x2 = area("seven", 2);  // エラー: 第１引数の型が正しくない
             ^~~~
5_3_2_trythis.cpp:4:5: note: candidate function not viable: no known conversion
from 'const char [6]' to 'int' for 1st argument int area(int length, int width);
    ^
5_3_2_trythis.cpp:14:17: error: integer literal is too large to be represented
in any integer type int x3=area(99999999999999999999,1); //エラー:
第１引数のサイズがintに収まらない
                ^
5_3_2_trythis.cpp:14:17: warning: implicit conversion from 'unsigned long long'
to 'int' changes value from 7766279631452241919 to 1661992959
[-Wconstant-conversion] int x3=area(99999999999999999999,1); //エラー:
第１引数のサイズがintに収まらない
           ~~~~ ^~~~~~~~~~~~~~~~~~~~
1 warning and 4 errors generated.
 */