
// codechef link - https://www.codechef.com/submit-v2/CK87MEDI
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int testcases,N,K;
    
	cin>>testcases;
	
  for(auto i=0;i<testcases;i++)
  {
      cin>>N>>K;
      int arr[N]
;      for(auto j=0;j<N;j++)
      {
          cin>>arr[j];
      }

      sort(arr,arr+N);//sort function to sort normal array.

      //to find median in the sorted array  
      cout<<arr[(N+K)/2]<<"\n";

  }
	return 0;
	
}

// the median in an array is the element positioned at the center of the array after sorting it.


//to sort vector we can use sort(v.begin(), v.end()); -------ascending order

//to sort vector we can use sort(v.begin(), v.end(), greater<int>()); -------descending order
