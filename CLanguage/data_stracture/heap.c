#include <stdio.h>

int *int_heapsort(int *nums, ssize_t numslen)
{
    ssize_t heapindex;
    ssize_t target;
    ssize_t lasttarget;

    if (numslen < 2)
        return (nums);
    heapindex = numslen - 1;
    while (heapindex)
    {
        target = (heapindex - 1) / 2;
        lasttarget = target * 2;

        int_swap(nums, 0, heapindex);
        heapindex--;
    }
    return (nums);
}


int *int_swap(int *nums, ssize_t first, ssize_t second)
{
    int temp;

    temp = nums[first];
    nums[first] = nums[second];
    nums[second] = temp;
    return (nums);
}
