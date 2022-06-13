#include <iostream>
using namespace std;
int main() {

string atb1,atb2,atb3,atb4,atb5,atb6,atb7,atb8,atb9,atb10;
  
cout<<"Tā ir viktorina par tēmu Biežāk lietotās funkcijas darbam ar simboliem un simbolu virknēm programmēšanas valodā C++";

  do{
    cout<<"\n\n\n1.Kuru simbola virknēs funkciju izmanto lai noteikt norādītās virknes garumu, izņemot nulles rakstzīmi?\n\na.strlen()\nb.strcmp()\nc.strcat()\nd.strcpy()\n\n"; cin>> atb1;
    if(atb1=="a"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb1!="a");

   do{
    cout<<"\n\n\n2.Kuru simbola funkciju izmanto lai apstrādāt simbolu, ta lai atgriež vertību true, ja simbols ir burts vai skaitlis, bet false visos citos variantos?\n\na.strcpy()\nb.strcat()\nc.isalnum()\nd.isalpha()\n\n"; cin>> atb2;
    if(atb2=="c"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb2!="c");
}