# C++によるプログラミングの原則と実践

[<img src="https://64.media.tumblr.com/cfa36cd69bfd32f29777b78fbeac8748/tumblr_inline_obfh31Gbpj1u8j60o_1280.jpg" width="200px">](https://asciidwango.jp/post/148488491965/c-%E3%81%AB%E3%82%88%E3%82%8B%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E3%81%AE%E5%8E%9F%E5%89%87%E3%81%A8%E5%AE%9F%E8%B7%B5)<br>
書籍『[C++によるプログラミングの原則と実践](https://asciidwango.jp/post/148488491965/c-%E3%81%AB%E3%82%88%E3%82%8B%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0%E3%81%AE%E5%8E%9F%E5%89%87%E3%81%A8%E5%AE%9F%E8%B7%B5)』
で取り扱っている問題（Try this、ドリル、練習問題）の解答。

## ディレクトリ構成
|ディレクトリ名|説明|
|:--		 |:--|
|ch02|2章で取り扱った問題の解答|
|ch03|3章で取り扱った問題の解答|
|・・・|・・・|
|images|Markdown等に使用した画像|
|include|本書で使用されるヘッダーファイル等|
|Programming-code|http://www.stroustrup.com/Programming/Programming-code.zip の内容物、[Web Archive](https://web.archive.org/web/20170202064114/http://www.stroustrup.com/Programming/Programming-code.zip) から|

## コンパイルと実行

#### LLVM Clang

```shell
# Linux
$ clang++ -o example1 ch02/2_drill_2_helloWorld.cpp
$ ./example1

# Windows
$ clang++ -o example1.exe .\ch02\2_drill_2_helloWorld.cpp
$ .\example1.exe
```

#### GCC

```shell
# Linux
$ g++ -o example2 ch02/2_drill_2_helloWorld.cpp
$ ./example2

# Windows
$ g++ -o example2.exe .\ch02\2_drill_2_helloWorld.cpp
$ .\example2.exe
```

#### MSVC cl.exe (Windows)

```shell
# Develop Powershell for VS 2019
$ cl /source-charset:utf-8 .\ch02\2_drill_2_helloWorld.cpp
$ .\2_drill_2_helloWorld.exe
```

## ノート

- `std_lib_facilities.h` に `using namespace std`は含まれているが `std::`は敢えて書いてある。

## 参考

- [cpprefjp - C++日本語リファレンス](https://cpprefjp.github.io)
- [BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp](https://github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp)
- [bewuethr/stroustrup-ppp](https://github.com/bewuethr/stroustrup-ppp)
- [0p3r4t4/PPPUCPP2nd](https://github.com/0p3r4t4/PPPUCPP2nd)

***
