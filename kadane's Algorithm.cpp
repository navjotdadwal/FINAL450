// Kadane's Algorithm -> largest contigous subarray Assumed that answer is always +ve
int kadane_algo(int arr[],int n)
{
  int curr=0,maxSum=0,i=0;
  while(i<n)
  {
    if(curr+arr[i]>0)
      curr+=arr[i];
    else 
      curr=0;
    maxSum=max(maxSum,curr);
  }  
  return maxSum;
}