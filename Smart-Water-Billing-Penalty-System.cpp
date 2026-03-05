/*Program background:
The water bill consumption program is a program that prompt the user to enter his water bill and informs him whether there is a fine that he must pay or not.
 It also gives the user 3 chances to pay the fine, and if an amount less than the fine is paid, the user is informed of the remainder of the fine.\
*/

#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std; 
 
 //Name of constants
const double Amount_of_fine = 200; 
const int size =2 ; 
int main() 
{ 

// Name of varible 
    int numberofwarningmessages; 
    int  totalpaid=0; 
    int therest ; 
    double Thebasicwaterbill; 
    double fineispaied; 
    double rest; 
    
     
     
    cout << "Enter the amount of your water bill: " << endl; 
    cin >> Thebasicwaterbill; 
 
    if (Thebasicwaterbill <= 500) 
    { 
        cout << "Your water consumption is fine, there is no fine" << endl; 
    } 
    else if (Thebasicwaterbill > 500) 
    { 
        cout << "Your water consumption is high, be careful. Enter 200 as a fine: " << endl; 
        cin >> fineispaied; 
 
        if (fineispaied == Amount_of_fine) 
        { 
            cout << "Your fine is paid" << endl; 
        } 
        else if (fineispaied < Amount_of_fine) 
        { 
            cout << "You have three warnings" << endl; 
            totalpaid += fineispaied ; 
            int numberofwarningmessages = 1;  
          
            while (numberofwarningmessages <= 3) 
               {  
                 
                  if (totalpaid < Amount_of_fine)   
                  { 
                      cout << "You must pay the rest, the rest is: " <<Amount_of_fine - totalpaid << endl; 
                     cin >> fineispaied; 
                     totalpaid+=fineispaied; 
                  } 
                  else 
                  { 
                    break; 
                  }// end if  
                  numberofwarningmessages++; 
                  }//end while 
              if(totalpaid >=Amount_of_fine) 
                  { 
                    cout << "Your fine is paid"  << endl;   
                    
                  }// end if  
            } // end if 
             
            if ( totalpaid< Amount_of_fine) 
            { 
                cout << "Your water will be disconnected" << endl; 
            } 
           }// end if 
            
            
            string Bill[size]={"Bill","fine"}; 
         int Bill2[size]={Thebasicwaterbill,totalpaid}; 
          
           cout <<endl<<"\t  The Bill" << endl<< endl ; 
            
           for (int i=0 ; i < size ; i++) 
     { 
            cout <<"\t"<< Bill[i] << "    "<< Bill2[i] << endl; 
     } 
            
            
  return 0; 
}
