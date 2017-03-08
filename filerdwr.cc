#include "iostream"
#include "fstream"
#include "cstdlib"
#include "cstring"
using namespace std;
int main(int argv, char *argc[])
 {

                void read(ifstream &file1);
                void write(ofstream &file2, char **str);
   
                if (argv==4)
            {
                //if( (argc[1]=="-r") && ( argc[2]=="-f") )

               //{
                    ifstream file1(argc[3]);
                    if(file1.is_open())
                        read(file1);
                    else
                        cerr<<"File Does Not Exists"<<endl;
               //}
             //cerr<<"Enter correct Commands"<<endl;
           }
               else
           {               
               if (argv==8)
            {    
                // if( (argc[1]=="-w") && ( argc[2]=="-f")  && (argc[4]=="-p"))
               // {
                 ofstream file2(argc[3]);
                 write( file2, argc);
               // }
                     //else
                      //cerr<<"Enter correct command"<<endl;
            }
              
               else
                 cerr<<"Enter correct Commands"<<endl;
           }

          return 0;
 }

         void read( ifstream &file1)
    {
         char ch;
         while(!file1.eof())
      {
             file1.get(ch);
             cout<<ch;
      }
        file1.close();

    }

         void write( ofstream &file2, char **str)
  {
         int value= atoi(str[7]);    
         //cout<<"Enter Counter"<<endl;
         //cin>>c;
          
          /* char *str1= str[6];
           int c= strlen(str1);
           char *trim;

 for(int i=c;i>0;i--)
{
       trim= str1;
       trim++;
        str1++;
   cout<<"NEW"<<trim<<endl;
  break;
   
    }
   //cout<<"NEW1=="<<trim<<endl;
   int value= atoi(trim);
   cout<<"Value"<<value<<endl; 
*/



          if(value!=0)
    {
          while (value!=0)
     {
          file2<<str[5]<<endl;
          value--;
     }
          file2.close();
          cout<<" Task Completed"<<endl;
    }
   else
{   cerr<<"Counter=0 Enter Non-Zero Counter"<<endl;
}
}
