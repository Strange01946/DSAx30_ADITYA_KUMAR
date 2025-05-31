int searchInsert(int* nums, int numsSize, int target) {
    int front=0;
    int end=numsSize-1;
    int mid;
    while(front<=end){
        mid=(front+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            front=mid+1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
    }
    return front;
}