
int findK(int **a,int n,int m,int k)
{
    int up=0,left=0,right=m-1,down=n-1;
     
    while(up<=down&&left<=right)
    {
        // Traversing to the right side
       for( int i=left;i<=right;i++)
      {
        k--;
        if(k==0)return a[up][i];
      }
      up++;
        
       //Traversing to the down side
      for(int i=up;i<=down;i++)
     {
       k--;
       if(k==0)return a[i][right];
     }
     right--;
 		    
     if(down>=up)
     {
        //Traversing to the right side
        for(int i=right;i>=left;i--)
        {
          k--;
          if(k==0)return a[down][i];
        }
        down--;
     }
 		    
     if(left<=right)
     {
        // Traversing to the upper side
        for(int i=down;i>=up;i--)
        {
 		  k--;
 	      if(k==0)return a[i][left];
 	    }
 	    left++;
     }
    }
   return -1;
}

