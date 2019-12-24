/*
 * Outputs random 100-digits binary string mostly containing 0's. 
 * In average it contrains only 10% of 1's.
 *
 * 输出随机的 100 位二进制字符串，主要包含 0 。平均而言，它只有 10% 是 1 。
 *
 * To generate different values, call "bgen.exe" with different parameters.
 * 
 * 要生成不同的值，请使用不同的参数调用 "bgen.exe" 。
 *
 * It is typical behaviour of testlib generator to setup randseed by command line.
 * testlib 生成器的一般操作是通过命令行设置随机种子。
 */

#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    println(rnd.next("[0000000001]{100}"));
    return 0;
}
