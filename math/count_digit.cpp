class Solution
{
public:
    int countDigit(int n)
    {
        int count = 0;
        if (n == 0)
        {
            return 1;
        }
        for (int i = 0; n > 0; i++)
        {
            count = count + 1;
            n = n / 10;
        }
        return count;
    }
};