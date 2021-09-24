// TRY THIS
//  これらの例をコンパイルし、コンパイラーがどのように報告するか確認する。
//
// コメント：
//  使用したコンパイラーと出力されたエラーログは下に記載してある。

int
area(int length, int width);

int
main()
{
    int s1 = area(7;    // エラー: ) がない
    int s2 = area(7)    // エラー: ; がない
    Int s3 = area(7);   // エラー: Int は型ではない
    int s4 = area('7);
    //エラー: 文字が閉じられていない（ ' がない）
}

/*
 * Compiler
 * clang version 12.0.1
 *
5_3_1_trythis.cpp:11:20: error: expected ')'
    int s1 = area(7;    // エラー: ) がない
                   ^
5_3_1_trythis.cpp:11:18: note: to match this '('
    int s1 = area(7;    // エラー: ) がない
                 ^
5_3_1_trythis.cpp:12:14: error: no matching function for call to 'area'
    int s2 = area(7)    // エラー: ; がない
             ^~~~
5_3_1_trythis.cpp:7:5: note: candidate function not viable: requires 2
arguments, but 1 was provided int area(int length, int width);
    ^
5_3_1_trythis.cpp:12:21: error: expected ';' at end of declaration
    int s2 = area(7)    // エラー: ; がない
                    ^
                    ;
5_3_1_trythis.cpp:14:19: warning: missing terminating ' character
[-Winvalid-pp-token] int s4 = area('7);
                  ^
5_3_1_trythis.cpp:14:19: error: expected expression
5_3_1_trythis.cpp:16:2: error: expected ';' at end of declaration
}
 ^
 ;
5_3_1_trythis.cpp:53:4: error: expected '}'
 */
^
  //  5_3_1_trythis.cpp:10:1: note: to match this '{'
  //  {
  //  ^
  //  1 warning and 6 errors generated.
  * /