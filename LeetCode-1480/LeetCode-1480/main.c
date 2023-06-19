//
//  main.c
//  LeetCode-1480
//
//  Created by HiLau on 2023/6/19.
//

#include <stdio.h>
//一维数组的动态和



//在leetcode写的解法s
//int* runningSum(int* nums, int numsSize, int* returnSize)
//{
//    int i = 0;
//    for(i = 1;i<numsSize;i++)
//    {
//        nums[i] = nums[i]+nums[i-1];
//    }
//    *returnSize = numsSize;
//    return nums;
//}

//自己的主函数解法
void Nums(int* arr,int sz)
{
    int i = 0;
    for(i = 1;i<sz;i++)
    {
        arr[i] = arr[i]+arr[i-1];
    }
}
int main()
{
    int arr[]={1,2,3,4};
    int sz = sizeof(arr)/sizeof(arr[0]);
    
    Nums(arr,sz);
    
    int i = 0;
    printf("arr = [ ");
    for(i = 0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]");
    printf("\n");
    return 0;
}
