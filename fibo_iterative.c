unsigned long  fibo_iter(unsigned long n)
{
    unsigned long save_previous = 0;
    unsigned long sav_current = 1;
    unsigned long current = 1;

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    for (unsigned long  i = 0; i < n - 2; i++)
    {
        save_previous = sav_current ;
        sav_current = current;
        current = save_previous + sav_current;
    }

    return current;
}
