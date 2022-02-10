#include<iostream>
#include<vector>

using namespace std;
void getExtensionAndSize(string line);
int arr[4]={0};
int main(){

  int TestCases;
  int i=0,j;
  string line;
  cin>>TestCases;
  vector <int> TestCases_Num(TestCases);
  while(i<TestCases){
    cin>>TestCases_Num[i];
    i++;
  }
  getline(cin,line);
  i=0;
  while(TestCases--){
    for(j=0;j<TestCases_Num[i];j++){
      getline(cin,line);
      getExtensionAndSize(line);
  }
  cout<<"music "<<arr[0]<<"b images "<<arr[1]<<"b movies "<<arr[2]<<"b other "<<arr[3]<<"b"<<endl;
  for(j=0;j<4;j++){
    arr[j]=0;
  }
  i++;
}
  return 0;
}
void getExtensionAndSize(string line){
  string ext;
  string size;
  int int_size;
  size_t foundDot = line.rfind(".");
  size_t foundSpace = line.rfind(" ");
  ext=line.substr(foundDot+1,foundSpace-foundDot-1);
  size=line.substr(foundSpace,line.size()-foundSpace);
  int_size = stoi(size);
  if(ext=="mp3" || ext=="aac" || ext=="flac"){
    arr[0]+=int_size;
  }
  else if(ext=="jpg" || ext=="bmp" || ext=="gif"){
    arr[1]+=int_size;
  }
  else if(ext=="mp4" || ext=="avi" || ext=="mkv"){
    arr[2]+=int_size;
  }
  else{
    arr[3]+=int_size;
  }

}
