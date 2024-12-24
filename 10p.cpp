/*Read the marks obtained by students of second year in an onl
 subject. Find out maximum and minimum marks obtained in that s
 structure. Analyze the algorithm.*/
 #include<iostream>
 using namespace std;
 class Heap
 {
   int n;
    int *minheap,*maxheap;
     public:
          void get();
          void displayMin();
          void displayMax();
          void upAdjust(bool,int);        
};
 void Heap::get()
 {
   cout<<"Enter number of students."<<endl;
   cin>>n;
   int k;
    minheap=new int[n];
    maxheap=new int[n];
    
    for(int i=0;i<n;i++)
    {
    cout<<"Enter marks of students."<<endl;
      cin>>k;
      minheap[i]=k;
      upAdjust(0,i);
      maxheap[i]=k;
      upAdjust(1,i);
    }
 }
 void Heap::upAdjust(bool m,int l)
 {
    int s;
    if(!m)
    {
         while(minheap[(l-1)/2]>minheap[l])
        {
          s=minheap[l];
          minheap[l]=minheap[(l-1)/2];
          minheap[(l-1)/2]=s;
          l=(l-1)/2;
          if(l==-1)
            break;
        }
    }
    else
    {
       while(maxheap[(l-1)/2]<maxheap[l])
      {
        s=maxheap[l];
        maxheap[l]=maxheap[(l-1)/2];
        maxheap[(l-1)/2]=s;
        l=(l-1)/2;
        if(l==-1)
         break;
        }
    }
 }
 void Heap:: displayMin()
 {
 cout<<"Minimum marks are :"<<minheap[0]<<endl;
 }
 void Heap:: displayMax()
 {
 cout<<"Maxmum marks are :"<<maxheap[0]<<endl;
 }
          
int main()
 {
 Heap H;
 H.get();
 H.displayMin();
 H.displayMax();
 return(0);
 }
