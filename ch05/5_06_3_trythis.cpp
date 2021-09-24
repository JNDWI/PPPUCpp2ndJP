// TRY THIS
//  キャッチされない例外エラーがどのようなものであるかを確認するために、例外を１つもキャッチせずに
//  error 関数を使用する簡単なプログラムを実行してみる。
//
// コメント
//  error 関数（定義は std_lib_facilities.h 内に記述されてある）が 投げる型は
//  runtime_error なので、それをキャッチしないようにする。 ここでは out_of_range
//  型のエラーをキャッチする文を記述して runtime_error
//  をキャッチされない例外エラーにする。
//  システムエラーログを下に記載しておく。環境は WSL2 Gentoo、コンパイラーは
//  LLVM Clang。
//
// Error Log
//  terminate called after throwing an instance of 'std::runtime_error'
//      what():  hogehoge ...
//  Aborted

#include "../include/std_lib_facilities.h"

int
main()
try {
    error("hogehoge ...");
} catch (out_of_range& e) {
    std::cerr << "エラー: " << e.what() << '\n';
}

// メモ
//  このブロック文が関数の外にある意味不明な記述にひどく困惑したが、関数tryブロック　というものらしい。参考までに。