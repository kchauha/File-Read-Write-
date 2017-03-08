#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "iostream"
#include "cstdlib"
#include "cstring"
#include <sstream>

#include "fstream"
using namespace std;


//#include "conio"

int 
main (int argc, char **argv)
{
   string fname, sname, cname;
     void read(ifstream &rd_file);
                void write(ofstream &wr_file, string, string);
    
    string find(int, char *[], string);
	string checkrw(int, char *[], string);

    
	if ((checkrw(argc, argv, "-r")!="") && argc==4)
		{
		fname= find(argc, argv, "-f");
		 ifstream rd_file(fname.c_str());
                    if(rd_file.is_open())
                        read(rd_file);
                    else
                        cerr<<"File Does Not Exists"<<endl;

		}
	else if ((checkrw(argc, argv, "-w")!="") && argc==8)
		{
		fname= find(argc, argv, "-f");
                 sname=find(argc, argv, "-p");
                 cname=find(argc, argv, "-n");	
                  ofstream wr_file(fname.c_str());
                 write( wr_file, sname, cname);
               
		}
	else cerr<<"Invalid arguments"<<endl;
  return 0;
}

  string find( int argc, char *argv[], string value)
{  
      for(int i=0; i<argc; i++)
{
	if (argv[i] == value)	return argv[i+1];
}
}

 string checkrw( int argc, char *argv[], string value)
{  
      for(int i=0; i<argc; i++)
{	
			
if (argv[i] == value)	return argv[i];
}
return "";
}


void read( ifstream &rd_file)
    {
         char ch;
         while(!rd_file.eof())
      {
             rd_file.get(ch);
             cout<<ch;
      }
        rd_file.close();

    }


void write( ofstream &wr_file, string sname, string cname)
  {
         int count;//= atoi(value[7]);    
       stringstream str;
       str<<cname;
        str>>count;  



          if(count!=0)
    {
          while (count!=0)
     {
          wr_file<<sname<<endl;
          count--;
     }
          wr_file.close();
          cout<<" Task Completed"<<endl;
    }
   else
{   cerr<<"Counter=0 Enter Non-Zero Counter"<<endl;
}
}








