#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class heap
{
     public:
             int arr[100];
             int size = 0;

             void insert(int val)
             {
                size  = size + 1;
                int index = size;
                arr[index] = val;

                while (index > 1)
                {
                    int parent = index / 2;
                    if(arr[parent] < arr[index])
                    {
                        swap(arr[parent],arr[index]);
                        index = parent;
                    }
                    else{
                        return;
                    }
                }
                
             }

             void print()
             {
                 for (int i = 1; i <= size ; i++)
                 {
                    cout <<" Element Are :" << " "<<arr[i] <<endl;
                 }
             }

             void DeleteformHeap()
             {
                if( size == 0)
                {
                    cout <<" there is nothing to delete" << endl;
                    return;
                }

                /// Step 1 - Put last index to first index
                 arr[1] = arr[size];

                 //// step 2 - Remove the last index
                 size--;

                 ///step 3 : Take Root Node to its correct position

                 int i = 1;
                 while (i < size )
                 {
                    int leftchild = 2*i;
                    int rightchild = 2*i+1;

                    if(leftchild < size && arr[i] < arr[leftchild])
                    {
                        swap(arr[i],arr[leftchild]);
                        i = leftchild;
                    }
                    else if(rightchild < size && arr[i] < arr[rightchild])
                    {
                        swap(arr[i],arr[rightchild]);
                        i = rightchild;
                    }
                    else
                    {
                        return;
                    }
                 }
             }

};

int main()
{
        heap h;
        h.insert(50);
        h.insert(55);
        h.insert(53);
        h.insert(52);
        h.insert(54);

        h.print();

        h.DeleteformHeap();
        cout << " " << endl;
        h.print();
   
 
       return 0;
}

