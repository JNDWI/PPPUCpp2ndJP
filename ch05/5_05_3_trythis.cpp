// TRY THIS
//  このプログラムをさまざまな値でテストしてみる。area1、area2、area3、ratio
//  の値を出力し、エラーがすべて見つかるまでテストの数
//  を増やしていく。エラーがすべて補足されたことはどうすればわかるか。これはひっかけ問題ではない。この例では、有効な引数を渡すことで
//  すべてのエラーを補足できる。
// コメント
//  x、ｙ、ｚ のどれか一つにでも 2 以下の整数値を与えるとエラーが起こる。

#include "../include/std_lib_facilities.h"

constexpr int frame_width{2};

int area(int length, int width) {
    if (length <= 0 || width <= 0)
        error("non-positive area() argument");
    return length * width;
}

int framed_area(int x, int y) { return area(x - frame_width, y - frame_width); }

int f(int x, int y, int z) {
    int area1 = area(x, y);
    if (area1 <= 0)
        error("non-positive area");

    // int area2 = framed_area(1, z);
    // コメント：
    //  framed_areaで呼び出すarea関数でエラーが起こるのでコメントアウトしてある。

    int area3 = framed_area(y, z);
    double ratio = double(area1) / area3;

    std::cout << "area1, area(x,y) = "
              << area1
              //    << "\narea2, framed_area(1,z) = " << area2
              << "\narea3, framed_area(y,z) = " << area3
              << "\nratio, double(area1)/area3 = " << ratio;

    return 0;
}

int main() {
    int x{0};
    int y{0};
    int z{0};

    std::cout << "３つの整数値を入力してください...\n>> ";

    while (cin >> x >> y >> z) {
        std::cout << "x:" << x << ", y:" << y << ", z:" << z << '\n';
        f(x, y, z);
        std::cout << "\n>> ";
    }

    return 0;
}