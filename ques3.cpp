
#include <bits/stdc++.h> 
using namespace std; 

bool find3Town(int A[], int n, int td)  
{  
    int l, r;  
  
    for (int i = 0; i < n - 2; i++) 
    {  
         for (int j = i + 1; j < n - 1; j++) 
        {  
            for (int k = j + 1; k < n; k++) 
            {  
                if (A[i] + A[j] + A[k] <= sum) 
                {  
                    cout << "3 corresponding town are [ " << A[i] << 
                        ", " << A[j] << ", " << A[k] <<" ]";  
                    return true;  
                }  
            }  
        }  
    }  
  
    return false;  
}  
  
int main()  
{  
    int n;
    cout<<"Enter the size of array which should be greater than 3: ";
    cin>>n;
    if(n<3)
        return 0;
    else{
        int A[n];
        cout<<"Enter elements of array : ";
        for(int i=0;i<n;i++)
            cin>>A[i];
        int td;
        cout<<"Enter the max distance : ";
        cin>>td;
        find3Town(A, n, td);  
    }
   
}  
