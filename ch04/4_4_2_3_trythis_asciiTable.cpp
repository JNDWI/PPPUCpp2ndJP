// �R�����g�F
//  ���̖��̓\�[�X�R�[�h�� ASCII�G���R�[�h �ł���K�v�����邽�߁A��O�I�� UTF-8�G���R�[�h
//  �ł͂Ȃ� ASCII�G���R�[�h�iShiftJIS�j�ɂȂ��Ă��܂��B

#include "../include/std_lib_facilities.h"

int
main()
{
    std::cout << "char\tint\n";

    for (char small = { 'a' }; small <= 'z'; ++small)
        std::cout << small << '\t' << int(small) << std::endl;

    for (char capital = { 'A' }; capital <= 'Z'; ++capital)
        std::cout << capital << '\t' << int(capital) << std::endl;

    for (char number = { '0' }; number <= '9'; ++number)
        std::cout << number << '\t' << int(number) << std::endl;

    return 0;
}