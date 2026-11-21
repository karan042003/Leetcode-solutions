int maxArea(int* height, int heightSize) 
{
 int temp=0,area=0;
 int left=0,right=heightSize-1;
 while(left<right)
 {
    temp=fmin(height[left],height[right])*(right-left);
    area=fmax(temp,area);
    if(height[left]<height[right]) left++;
    else right--;
 }
 return(area);   
}