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

int * change(int * mas, int k) {
	int j = k - 1;
	for (int i = 0; i < k/2; i++) {
		swap(mas[i], mas[j]);
		j--;
	}
	return mas;
}

int main ()
 { 
 
      int i,k,n,j;
      int * mas = new int[n]; 
  
   string str,str1;
   getline(cin,str);
   
   istringstream  stream (str);
    
       if ((stream >> n )&& (n>0)){ 
       
         if ( read (n , mas) ) {
              string str1;
			        getline(cin, str1);
			        istringstream stream(str1);
                
                if (stream >> k) {
            
              int * mas1= new int[k];          
              for (i = 0; i < k ; i++) {
                 mas1[i]=mas[i];
               }                           
              int * mas2= new int[n-k];
              int j=k;
              for (i = 0; i < n-k ; i++) {
                mas2[i]=mas[j];
                j++;
               }
                                       mas1 = change(mas1,k);
                                       mas2 = change(mas2,n-k);
              
              for (i = 0; i < k ; i++) { 
                mas[i]=mas1[i];
              }
              j=0;
              for (i = k ; i < n ; i++) { 
                mas[i]=mas2[j];
                j++;
              }
                                       mas = change (mas,n);
             
              for (i = 0 ; i < n; i++)
              cout << mas[i] << " ";
           
         }}
            
            else  cout << "An error has occurred while reading input data";
       }
           else cout << "An error has occurred while reading input data";
      
       return 0;
 }
