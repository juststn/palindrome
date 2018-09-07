#include <iostream>
using namespace std;

int main(){
  char str[80];
  char str2[80];
  int b =0;
  int size = 0;
  cin >> str;
  int count=0;
  // for loop execution
  for(int c = 0; c < 80; c = c+1){
    if(str[c]>'0'&&str[c]<='9'||str[c]>='a'&&str[c]<='z'){
      size++;
      cout<<"size of str is "<<size<<endl;
    }
  }
  for( int a = 0; a < size-1; a = a + 1 ) {
				   if(str[a]>='0'&&str[a]<='9'||str[a]>='a' && str[a]<='z'){
				     for (int a; a<size-1; a=a+1){
			       
				       b=size-3-a;
				       
				       cout<< b<<a<<endl;
				       str2[b]=str[a];
				       cout<< str2[b]<<endl;
				       cout<< str[a]<< endl;			     
				    
				   
				     }
				   }
  }

  for(int i = 0; i<size-1; i=i+1){
    cout<<i<<endl;
    cout<<str2[i]<<endl;
    cout<<str[i]<<endl;
    if(str[i]!=str2[i]){
      count++;
      cout<<"not equal"<<endl;
    }
  }

    if(count==0){
      cout << "palindrome" << endl;
    }
    else{
      cout << "not pal" << endl;
      
    }

 
    cout <<count<<endl;
  cout << str << endl;
  return 0;
}
