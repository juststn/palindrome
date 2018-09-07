#include <iostream>

using namespace std;

int main(){
  char str[80];
  char str2[80];
  int b =0;  
  cin >> str;
  int count=0;
  // for loop execution
  for( int a = 0; a < 80; a = a + 1 ) {
				   if(str[a]>='0'&&str[a]<='9'||str[a]>='a' && a<='z'){
				     for (int a; a<80; a=a+1){
				       int size =  ; 
				       b=size-a;
				       
				       cout<< b<<a<<endl;
				       str2[b]=str[a];
				       cout<< str2[b]<<endl;
				       cout<< str[a]<< endl;			     
				    
				   
				     }
				   }
  }

  for(int i = 0; i<80; i=i+1){
    cout<<i<<endl;
    cout<<str2[i]<<endl;
    cout<<str[i]<<endl;
    if(str[i]!=str2[i]){
      count++;
      cout<<"not equal"<<endl;
    }
  }

    if(count==0){
      cout << "HONEY DETECTED" << endl;
    }
    else{
      cout << "no pollen" << endl;
      
    }

 
    cout <<count<<endl;
  cout << str << endl;
  return 0;
}
