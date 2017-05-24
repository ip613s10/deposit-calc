#include <ctest.h>
#include <../src/deposit.h>

CTEST(input_check_more_than_1_year, test_input)
{
    int result = Check(777777, 555);
    int expected = 0;
    
    ASSERT_EQUAL(exp, result);
}

CTEST(input_check, test_input)
{
    int result = Check(1000, 100);  
    int expected = 1;
    
    ASSERT_EQUAL(exp, result);
}

CTEST(calc_test, calc)
{
    int result = Profit(123456, 150);
    const int exp = 133332;
    
    ASSERT_EQUAL(exp, result);
}

CTEST(calc_test_less_than_0_days, calc)
{
    int result = Profit(123456, -10);
    const int exp = 0;
    
    ASSERT_EQUAL(exp, result);
}

/////////////////////////////////

CTEST(calc_30_day_less_than_100k, calc)
{
    int result = Profit(50000, 30);
    const int exp = 45000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_30_day_more_than_100k, calc) 
{
    int result = Profit(150000, 30);
    const int exp = 135000;

    ASSERT_EQUAL(exp, result);
}

/////////////////////////////////

CTEST(calc_31_day_less_than_100k, calc)
{
    int result = Profit(50000, 31);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_31_day_more_than_100k, calc)
{
    int result = Profit(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////

CTEST(calc_120_day_less_100000_rub, calc)
{
    int result = Profit(50000, 31);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_120_day_more_100000_rub, calc)
{
    int result = Profit(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////

CTEST(calc_121_day_less_than_100k, calc)
{
    int result = Profit(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_121_day_more_than_100k, calc)
{
    int result = Profit(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}

/////////////////////////////////

CTEST(calc_240_day_less_than_100k, calc)
{
    int result = Profit(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_240_day_more_than_100k, calc)
{
    int result = Profit(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}

/////////////////////////////////

CTEST(calc_241_day_less_than_100k, calc)
{
    int result = Profit(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_241_day_more_than_100k, calc)
{
    int result = Profit(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////

CTEST(calc_365_day_less_than_100k, calc)
{
    int result = Profit(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_365_day_more_than_100k, calc)
{
    int result = Profit(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}
