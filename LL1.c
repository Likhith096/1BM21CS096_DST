int* canSeePersonsCount(int* heights, int heightsSize, int* returnSize)
{   int i,j,large=0;
     int *sol;
     sol =(int*)malloc (heightsSize*sizeof(int));
    for(int i = 0; i<heightsSize;i++)
    {
        large = 0;
        int maxheight = 0;
        for(int j =i+1; j<heightsSize;j++)
    {
        if(heights[i] < heights[j])
        {
            large++;
            break;
        }
        else if((heights[j] > maxheight) && (heights[i] > maxheight))
        {
            maxheight = heights[j];
            large++;
        }
    }
    sol[i] = large;
}

 for(i=0;i<heightsSize;i++)
 {
 printf("%d ",sol[i]);   
 }
 *returnSize = heightsSize;
  return sol;
}