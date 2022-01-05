#include<iostream>
using namespace std;
struct details
{ int reg_no;
  string Name,Branch;
  double CGPA;
}st[3];
void LinearSearch()
{  cout<<"Linear Search"<<endl<<endl;
   int i,N;
   cout<<"Enter Reg.No to be search: ";
    cin>>N;
    for(i=0;i<3;i++)
    { if(N==(st[i].reg_no))
      { break;
      }
    }
  cout<<"Reg_No: "<<st[i].reg_no<<endl<<"Name: "<<st[i].Name<<endl<<"Branch: "<<st[i].Branch<<endl<<"CGPA: "<<st[i].CGPA<<endl<<endl; 
}
void BubbleSort()
{   cout<<"Bubble Sort"<<endl<<endl;
    int temp_reg,i,j;
    string temp_name,temp_branch;
    double temp_cgpa;
    char s;
    cout<<"Ascending/Descending"<<endl;
    cin>>s;
    for(i=0;i<3;i++)
    { for(j=0;j<3-i-1;j++)
          { if((s=='A')&&(st[j].reg_no>st[j+1].reg_no))
              { 
                temp_reg=st[j].reg_no;
                st[j].reg_no=st[j+1].reg_no;
                st[j+1].reg_no=temp_reg;
              
                temp_name=st[j].Name;
                st[j].Name=st[j+1].Name;
                st[j+1].Name=temp_name;
          
                temp_branch=st[j].Branch;
                st[j].Branch=st[j+1].Branch;
                st[j+1].Branch=temp_branch;
                
                temp_cgpa=st[j].CGPA;
                st[j].CGPA=st[j+1].CGPA;
                st[j+1].CGPA=temp_cgpa;
              }
             else if((s=='D')&&(st[j].reg_no<st[j+1].reg_no))
              { 
                temp_reg=st[j].reg_no;
                st[j].reg_no=st[j+1].reg_no;
                st[j+1].reg_no=temp_reg;
              
                temp_name=st[j].Name;
                st[j].Name=st[j+1].Name;
                st[j+1].Name=temp_name;
          
                temp_branch=st[j].Branch;
                st[j].Branch=st[j+1].Branch;
                st[j+1].Branch=temp_branch;
                
                temp_cgpa=st[j].CGPA;
                st[j].CGPA=st[j+1].CGPA;
                st[j+1].CGPA=temp_cgpa;
              }
          }
    }
    for(i=0;i<3;i++)
    {
      cout<<"Reg_No: "<<st[i].reg_no<<endl<<"Name: "<<st[i].Name<<endl<<"Branch: "<<st[i].Branch<<endl<<"CGPA: "<<st[i].CGPA<<endl<<endl; 
    }
}
void BinarySearch()
{
 cout<<"Binary Search"<<endl<<endl;
 int beg,end,mid,temp,N,c=0,i;
 int temp_reg,j;
    string temp_name,temp_branch;
    double temp_cgpa;
    char s;
    cout<<"Ascending / Descending"<<endl;
    cin>>s;
    for(i=0;i<3;i++)
    { for(j=0;j<3-i-1;j++)
          { if((s=='A')&&(st[j].reg_no>st[j+1].reg_no))
              { 
                 
                temp_reg=st[j].reg_no;
                st[j].reg_no=st[j+1].reg_no;
                st[j+1].reg_no=temp_reg;
              
                temp_name=st[j].Name;
                st[j].Name=st[j+1].Name;
                st[j+1].Name=temp_name;
          
                temp_branch=st[j].Branch;
                st[j].Branch=st[j+1].Branch;
                st[j+1].Branch=temp_branch;
                
                temp_cgpa=st[j].CGPA;
                st[j].CGPA=st[j+1].CGPA;
                st[j+1].CGPA=temp_cgpa;
              }
          else if((s=='D')&&(st[j].reg_no<st[j+1].reg_no))
              { 
                temp_reg=st[j].reg_no;
                st[j].reg_no=st[j+1].reg_no;
                st[j+1].reg_no=temp_reg;
              
                temp_name=st[j].Name;
                st[j].Name=st[j+1].Name;
                st[j+1].Name=temp_name;
          
                temp_branch=st[j].Branch;
                st[j].Branch=st[j+1].Branch;
                st[j+1].Branch=temp_branch;
                
                temp_cgpa=st[j].CGPA;
                st[j].CGPA=st[j+1].CGPA;
                st[j+1].CGPA=temp_cgpa;
              }
          }
    }
 cout<<"Enter Reg. No to be search: ";
 cin>>N;
 beg=0;
 end=2;
 if(s=='A')
{ while(beg<=end)
 { 
    mid=(beg+end)/2;
   if(st[mid].reg_no==N)
   { cout<<"Reg Number Found"<<endl;
     cout<<"Reg No: "<<st[mid].reg_no<<endl<<"Name: "<<st[mid].Name<<endl<<"Branch: "<<st[mid].Branch<<endl<<"CGPA: "<<st[mid].CGPA<<endl<<endl;
     c=1;
     break;
   }
   if(st[mid].reg_no>N)
   { end=mid-1;
   }
   else
   { beg=mid+1;
   }
 }
 if(c==0)
  { cout<<"Reg Number Not Found"<<endl;
  }
}
if(s=='D')
{ while(beg<=end)
 { 
    mid=(beg+end)/2;
   if(st[mid].reg_no==N)
   { cout<<"Reg Number Found"<<endl;
     cout<<"Reg No: "<<st[mid].reg_no<<endl<<"Name: "<<st[mid].Name<<endl<<"Branch: "<<st[mid].Branch<<endl<<"CGPA: "<<st[mid].CGPA<<endl<<endl;
     c=1;
     break;
   }
   if(st[mid].reg_no>N)
   { beg=mid+1;
   }
   else
   { end=mid-1;
   }
 }
  if(c==0)
  { cout<<"Reg Number Not Found"<<endl;
  }
 }
}
void InsertionSort()
{ cout<<"Insertion Sort"<<endl<<endl; 
  int n,i,j,temp_reg;
  string temp_name,temp_branch;
  double temp_cgpa;
  for(i=1;i<=3;i++)
  { j=i;
    while(j>0 && st[j-1].CGPA<st[j].CGPA)
    { temp_cgpa=st[j].CGPA;
      st[j].CGPA=st[j-1].CGPA;
      st[j-1].CGPA=temp_cgpa;
      
      temp_reg=st[j].reg_no;
      st[j].reg_no=st[j-1].reg_no;
      st[j-1].reg_no=temp_reg;
      
      temp_name=st[j].Name;
      st[j].Name=st[j-1].Name;
      st[j-1].Name=temp_name;
      
      temp_branch=st[j].Branch;
      st[j].Branch=st[j-1].Branch;
      st[j-1].Branch=temp_branch;
      
      j--;
    }
  }
  for(i=0;i<3;i++)
    cout<<"Reg_No: "<<st[i].reg_no<<endl<<"Name: "<<st[i].Name<<endl<<"Branch: "<<st[i].Branch<<endl<<"CGPA: "<<st[i].CGPA<<endl<<endl; 
}
int main()
{ int i;
  cout<<"Enter Records for 3 Students"<<endl;
  for(i=0;i<3;i++)
  { cout<<"Reg_No:";
    cin>>st[i].reg_no;
    cout<<"Name: ";
    cin>>st[i].Name;
    cout<<"Branch: ";
    cin>>st[i].Branch;
    cout<<"CGPA: ";
    cin>>st[i].CGPA;
    cout<<endl;
  }
  LinearSearch();
  BubbleSort();
  BinarySearch();
  InsertionSort();
  return 0;
}