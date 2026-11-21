Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).


  double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *merged;
    int total;
    int even,even2;
    int odd;
    double median;

merged=malloc(sizeof(int)*(nums1Size + nums2Size));
if(merged==NULL){
    return 1;
}

int i=0;int j=0;int k=0;
for(;i<nums1Size && j<nums2Size;){
  if( nums1[i]<nums2[j]) {
    merged[k]=nums1[i];
    i++;
  }
  else{
    merged[k]= nums2[j];
    j++;
  }
  k++;
}
  for(;i<nums1Size;){
    merged[k]=nums1[i];
    i++;
    k++;
  }
  for(;j<nums2Size;){
    merged[k]=nums2[j];
    j++;
    k++;
  }
total=nums1Size+nums2Size;

if(total %2 ==0){
    even =total/2-1;
    even2 =total/2;
    median= (merged[even]+ merged[even2])/2.0;
}
if(total %2 !=0){
    odd=total/2;
    median =  merged[odd];
}
free(merged);
return median;
}
