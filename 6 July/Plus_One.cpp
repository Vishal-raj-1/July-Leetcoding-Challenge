class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int n = digits.size();
        if(digits[n-1] >= 0 && digits[n-1] < 9)
            digits[n-1]++;
        else
        {
            int i=n-1;
            do
            {
                digits[i--] = 0;
            } while(i >= 0 && digits[i] == 9);

            if(i < 0)
            {
                digits.push_back(0);
                digits[0] = 1;
            }
            else
                digits[i]++;
        }

        return digits;
    }
};