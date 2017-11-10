#include <iostream>
#include <sstream>

using namespace std;

bool read (int & n, int * mas)
{
  string str;
   getline(cin,str);
    istringstream stream(str);
     bool F = true;
    
       for (int i=0;i<n;i++)
        {
          if (!(stream >> mas[i])) { F = false; break;}
        }
   return F;
}

int main ()
 { 
   int * mas = new int; 
   int i,k,n,j;
   int mas1[],mas2[];
   string str,str1;
   getline(cin,str);
   
   istringstream  stream (str);
    
       if ((stream >> n )&& (n>0)){   
         if ( read (n , mas) ) {
            
            getline(cin,k);
            
              for (i = 0; i < n-k ; i++) {
                 mas1[i]=mas[i];
               }                           
             
              for (i = n-k; i < n ; i++) {
                mas2[j]=mas[i];
                j++;
               }
             for (i = 0; i < k ; i++) { 
                mas[i]=mas2[i];
              }
             for (i = k; i < n ; i++) { 
                mas[i]=mas1[j];
                j++;
              }
              for (i = 0; i < n/2 ; i++) { 
                
                swap(mas[i],mas[n-i-1]);
            }
           for (i = 0 ; i < n; i++)
             cout << mas[i] << " ";
           
         }
            
            else  cout << "An error has occurred while reading input data";
       }
           else cout << "An error has occurred while reading input data";
      
       return 0;
 }
