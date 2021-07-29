long Fact(long n)
{
    if (n == 0)
        return 1;
    else
    {
        long res = 1;
        for (int i = n; i > 1; i--)
            res *= i;
        return res;
    }
}