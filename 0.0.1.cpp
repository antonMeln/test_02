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
   int i,n;
   string str;
   getline(cin,str);
   istringstream  stream (str);
    
       if ((stream >> n )&& (n>0)){   
         if ( read (n , mas) ) {
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
