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

  do{
  cout<<"\n\n\n3.Kuru simbola virknēs funkciju izmanto lai apvienot s1 vīrkni ar s2 vīrkni un rezultāts saglabājās uz s1?\n\na.isalpha()\nb.strcpy()\nc.strcat()\nd.strcmp()\n\n"; cin>> atb3;
    if(atb3=="c"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb3!="c");

  do{
  cout<<"\n\n\n4.Ko izpilda funkcija isspace()?\n\na.atgriež vertību true, ja simbols ir burts vai skaitlis, bet false visos citos variantos\nb.atgriež vertību true, ja simbols ir burts, bet false visos citos variantos\nc.atgriež vertību true, ja simbols ir paraugs, bet false visos citos variantos\nd.Tada funkcija nepiestāv\n\n"; cin>> atb4;
    if(atb4=="c"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb4!="c");

  do{
  cout<<"\n\n\n5.Kuru simbola virknēs funkciju izmanto lai apstrādāt simbolu, ta lai atgriež vertību true, ja simbols ir burts, bet false visos citos variantos?\n\na.isalpha()\nb.isalnum()\nc.islower()\nd.issuper()\n\n"; cin>> atb5;
    if(atb5=="a"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb5!="a");

  do{
  cout<<"\n\n\n6.Kuru simbola virknēs funkciju izmanto lai apstrādāt simbolu, ta lai atgriež vertību true, ja simbols ir skaitlis, bet false visos citos variantos?\n\na.isalnum()\nb.islower()\nc.isdigit()\nd.issuper()\n\n"; cin>> atb6;
    if(atb6=="c"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb6!="c");

  do{
  cout<<"\n\n\n7.Kura funkcija atbilst prasībai (salīdzina virkni s1 ar virkni s2 un atgriež int rezultātu: 0 - ja virknes ir līdzvērtīgas, >0 - ja s1<s2, <0 - ja s1>s2 Lieto mazsvarīgi)?\n\na.strlen()\nb.issuper()\nc.strcpy()\nd.stricmp()\n\n"; cin>> atb7;
    if(atb7=="d"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb7!="d");

  do{
  cout<<"\n\n\n8.Kuru simbola virknēs funkciju izmanto lai parviedot virkni s1, double tipa mainīgajā?\n\na.atol()\nb.atoi()\nc.atof()\nd.stlen()\n\n"; cin>> atb8;
    if(atb8=="c"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb8!="c");

  do{
  cout<<"\n\n\n9.Kuru simbola virknēs funkciju izmanto lai parviedot virkni s1, int tipa mainīgajā?\n\na.atof()\nb.atoi()\nc.isalnum()\nd.atol()\n\n"; cin>> atb9;
    if(atb9=="b"){
      cout<<"\nTu atbildeji pareizi!";
      }else{
      cout<<"\nTu atbildeji nepareizi!";
    }
    }while(atb9!="b");

  
}