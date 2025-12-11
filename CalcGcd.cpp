#include <iostream>
#include <tchar.h>
#include <stdlib.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int iNum1, iNum2;
    int iVal1, iVal2;
    std::cout << "Input the first integer number\r\n";
    std::cin >> iNum1;
    std::cout << "Input the second integer number\r\n";
    std::cin >> iNum2;
    iVal1 = abs(iNum1);
    iVal2 = abs(iNum2);
    if (iVal1 > 0 && iVal2 > 0)
    {
        while (iVal1 != iVal2)
        {
            if (iVal1 > iVal2)
            {
                iVal1 -= iVal2;
            }
            else
            {
                iVal2 -= iVal1;
            }
        }
        int nGcd = iVal1;
        std::cout << "The Gcd of the numbers " << iNum1 << " and " << iNum2
            << " is " << nGcd << "\r\n";
    }
    else
    {
        std::cout << "The numbers should not be equal 0\r\n";
    }
    std::cin.ignore();
    std::cin.get();
}
