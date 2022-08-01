/*
>> Files are used to store data permanently. 

>> A stream is an abstraction that represents a device on which input and output opertions can be 
   performed

>> A stream can basically be represented as a source or destination of characters of indefinite length

>> datatype            description
  
  >>ofstream:      this data type represents the output file stream and is used to create files and to
                   write information to files.

  >>ifstream:      this data type represents the input file stream and is used to to read information
                   from files.

  >>fstream:       this data type represents he file stream generally, and has the capabilities of
                   both ofstream and ifstream which means it cam create files, write information to
                   files, and read information from files. 

*/ 

#include<iostream>
#include<fstream>
using namespace std;

int main(){

  char arr[100];
  cout<<"Enter your name and age: "<<endl;
  cin.getline(arr,100);  // to take the entire line with space included as input
  
  ofstream myfile("xyz.txt",ios::app);   // fstream myfile("xyz.txt",ios::out);
  /*
  ofstream myfile("xyz.txt",ios::app); can be used if we don't want the data to be overwritten
  everytime. It appends the new content in the file.

  Otherwise, we can use ofstream myfile("xyz.txt");
  */
  // myfile.open("xyz.txt");
  myfile<<arr;
  myfile.close();
  cout<<"File write operation performed successfully"<<endl<<endl;
  
  cout<<"READING FROM FILE OPERATION STARTED"<<endl;
  char arr1[100];
  ifstream obj("xyz.txt");
  obj.getline(arr1,100);
  cout<<"array content: "<<arr;
  obj.close();
  cout<<"\nFILE READ OPERATION COMPLETED"<<endl;
  return 0;
}