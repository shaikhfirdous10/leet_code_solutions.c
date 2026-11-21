int maxArea(int* height, int heightSize) {
    int area;
    int smallerheight;
    int i=0;
    int j=heightSize-1;
int maxArea=0;

    for(;i<j;){
        if(height[i]<height[j]){
            smallerheight=height[i];
        }
        else{
            smallerheight=height[j];
        }
        area=(j-i)*smallerheight;

        if(area>maxArea){
            maxArea=area;
        }
        if(height[i]<height[j]){
            i++;
        }
        else{
           j--;
        }
    }
    return maxArea;
}
