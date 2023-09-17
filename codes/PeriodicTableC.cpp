#include <bits/stdc++.h>
using namespace std;
 /* * * * * * * * * * * * * * * * * * *
 *                                    *
 *          (PERIODIC TABLE)          *
 *                                    *
 *    From Team: Turtle               *
 *    Prepared by:                    *
 *      1. Omar Faruk                 *
 *      2. Zarin Tasnim chowdhury     *
 *      3. Ibna Sultana Hasnat Bristi *
 *                                    *
 * * * * * * * * * * * * *  * * * * * */
#define int long long
#define endl "\n"
map<int,pair<vector<string>,double> >int_atom;
map<string,pair<vector<string>,double> >str_atom;
vector<string> table={
        "                                THE MODERN PERIODIC TABLE\n",
        "                                -------------------------\n\n\n",
        "       H                                                                                    He\n\n",

        "       Li   Be                                                     B    C    N    O    F    Ne\n\n",

        "       Na   Mg                                                     Al   Si   P    S    Cl   Ar\n\n",

        "       K    Ca   Sc   Ti   V    Cr   Mn   Fe   Co   Ni   Cu   Zn   Ga   Ge   As   Se   Br   Kr\n\n",

        "       Rb   Sr   Y    Zr   Nb   Mo   Tc   Ru   Rh   Pd   Ag   Cd   In   Sn   Sb   Te   I    Xe\n\n",

        "       Cs   Ba   La   Hf   Ta   W    Re   Os   Ir   Pt   Au   Hg   Tl   Pb   Bi   Po   At   Rn\n\n",

        "       Fr   Ra   Ac   Rf   Db   Sg   Bh   Hs   Mt   Ds   Rg   Cn   Nh   Fl   Mc   Lv   Ts   Og\n\n\n",


        "                 Ce   Pr   Nd   Pm   Sm   Eu   Gd   Tb   Dy   Ho   Er   Tm   Yb   Lu\n\n",

        "                 Th   Pa   U    Np   Pu   Am   Cm   Bk   Cf   Es   Fm   Md   No   Lr\n\n"
    };
void oparation();
void periodicTable();
void searchElements();
void calculation();
void database();

void oparation(){

        cout << "\n\nWhat would you like to do?\n\n";
        cout << "1. View the Modern Periodic Table\n";
        cout << "2. Search an element from Periodic Table.\n";
        cout << "3. Calculalate Molicular Molar Mass\n";
        cout << "4. Exit.\n\n";
        cout << "Enter your option: ";

        int check;
        while(cin >> check){
            if(check<1 or check >4){
                cout << "Wrong key :( \nPlease try again";
                cout <<"\nEnter your option: ";
                continue;
            }
            else{
                if(check==1){
                    periodicTable();
                }
                else if(check==2){
                 searchElements();
                }
                else if(check==3){
                    calculation();
                }
                else if(check==4)
                    return;
                break;
            }
        }
}
void periodicTable(){
    for(auto x:table)
        cout << x;
    cout << "Input any character then hit the enter key to continue\n";
    char p; cin >> p;
    return oparation();
}
void searchElements(){
    cout << "\n\t\tMain :: Menu\n::How would you like to search for your element?\n\n";
    cout << "1. Entering the atomic number.\n";
    cout << "2. Entering the element name.\n\n";
    cout << "Enter your option: ";
    int option;
    while(cin >> option){

        if(option<1 or option >2){
                cout << "Wrong key :(\nPlease try again";
                cout <<"\nEnter your option: ";
                //continue;
        }
        else{
            if(option==1){
                cout << "Enter atomic number of the element : ";
                int atom;
                while(cin >> atom){
                    if(int_atom.find(atom)!=int_atom.end()){
                        for(auto x:int_atom[atom].first)
                            cout << x;
                        break;
                    }
                    else{
                        cout << "Invalid Element Number:(\nPlease try again : ";
                        //continue;
                    }
                }
                break;
            }
            else if(option==2){
                cout << "Enter the element's Symbol : ";
                string atom;
                while(cin >> atom){
                    if(str_atom.find(atom)!=str_atom.end()){
                        for(auto x:str_atom[atom].first)
                            cout << x;
                        break;
                    }
                    else{
                        cout << "Invalid Element Name:(\nPlease try again : ";
                        //continue;
                    }
                }
            }
            break;
        }
        break;
    }
    cout << "Input any character then hit the enter key to continue.\n";
    char d; cin >> d;

    cout << "Do you want to search again ?\nType Yes or No : ";
    string s;   cin >> s;
    if(s[0]=='Y' || s[0]=='y')
        return searchElements();
    else
        return oparation();

}

void calculation(){
    int a;string s;
    char c;
    double sum=0.0;

    cout << "To calculate mass-> Please  follow the format: \n";
    cout << "\"Number of element\"*\"Element Symbol\"\n";
    cout << "For Example:\n";
    cout << "9*Na\n3*Cu\n7*K\n.\n.\n.\n8*Zn\n";
    cout <<"To stop calculation, enter : -1\n";
    vector<string> temp;
    vector<int>tm;
    int cnt=0;
    while(cin >> a){
        cnt++;
        if(a<0)break;
        cin >> c >> s;
        tm.push_back(a);
        temp.push_back(c+s);
        if(str_atom.find(s)!=str_atom.end())
            sum+=a*str_atom[s].second;
        else{
            cout <<"Invalid Element name\nTry again:\n";
            // continue;
        }

    }
    // cout << "Total mass of  " << sum << endl << endl;
    cout << "Total mass of ( ";
    // cout << cnt <<endl;
    for(int i=0; i<cnt-1; i++){
        cout << tm[i] << temp[i];
        if(i<cnt-2)
            cout << " + ";
    }

    cout << " ) is = "<< sum << " g" << endl << endl;
    cout << "Do you want to calculalate again ?\n";
    cout << "Type Yes or No : ";
    string x; cin >> x;
    if(x[0]=='Y' or x[0]=='y')
        calculation();
    else
        return oparation();

}


int32_t main(void) {

    cout << " \n\n\n\n\n\n\t\t\t WELCOME TO MODERN PERIODIC TABLE\n\n\n";
    cout << "\n\n\t\t\tWe are from Team Turtle :)\n\n\t\t\tTeam members:\n\t\t\t\t1. Omar Faruk\n\t\t\t\t2. Zarin Tasnim Chowdhury\n\t\t\t\t3. Ibna Suntana Hasnat Bristi\n\n";
    cout << "\tInput any character then hit the enter key to continue\n";
    char p; cin >> p;
    database();
    oparation();
    return 0;
}

void database(){
    int_atom[11]={
            {
              "Name:            Sodium- Na\n\n",

              "Origin of Name: The English word soda\n\n",

              "Atomic Number               11\n",
              "Electronic Configuration    [Ne] 3s1\n",
              "Group                       1\n",
              "Period                      3\n",
              "Block                       s\n",
              "Atomic Weight               22.9898 g\n",
              "Atomic Radius               190 pm\n",
              "Electronegativity           0.93 (Pauling Scale)\n",
              "Melting Point               370.87 K\n",
              "Boiling Point               1156 K\n",
              "Density                     0.971 g/cm3\n"
            },22.9898
        };

    str_atom["Na"]={
            {
              "Name:            Sodium- Na\n\n",

              "Origin of Name: The English word soda\n\n",

              "Atomic Number               11\n",
              "Electronic Configuration    [Ne] 3s1\n",
              "Group                       1\n",
              "Period                      3\n",
              "Block                       s\n",
              "Atomic Weight               22.9898\n",
              "Atomic Radius               190 pm\n",
              "Electronegativity           0.93 (Pauling Scale)\n",
              "Melting Point               370.87 K\n",
              "Boiling Point               1156 K\n",
              "Density                     0.971 g/cm3\n"
            },22.9898
        };
        int_atom[1]={
            {
              "Name:            Hydrogen- H\n\n",

              "Origin of Name: The English word hydro\n\n",

              "Atomic Number               1\n",
              "Electronic Configuration     1s1\n",
              "Group                       1\n",
              "Period                      1\n",
              "Block                       s\n",
              "Atomic Weight               1.0079 g\n",
              "Atomic Radius               53 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               532.14 K\n",
              "Boiling Point               525.87 K\n",
              "Density                     70.6 g/cm3\n"
            },1.0079
        };

    str_atom["H"]={
            {
              "Name:            Hydrogen- H\n\n",

              "Origin of Name: The English word hydro\n\n",

              "Atomic Number               1\n",
              "Electronic Configuration    1s1\n",
              "Group                       1\n",
              "Period                      1\n",
              "Block                       s\n",
              "Atomic Weight               1.0079\n",
              "Atomic Radius               53 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               13.13 K\n",
              "Boiling Point               20.13 K\n",
              "Density                     70.6 g/cm3\n"
            },1.0079
        };
int_atom[2]={
            {
              "Name:            Helium- He\n\n",

              "Origin of Name: The English word helios\n\n",

              "Atomic Number               2\n",
              "Electronic Configuration    1s2\n",
              "Group                       18\n",
              "Period                      1\n",
              "Block                       s\n",
              "Atomic Weight               4.0026 g\n",
              "Atomic Radius               31 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               none K\n",
              "Boiling Point               -452 K\n",
              "Density                     0.1785 g/cm3\n"
            },4.0026
        };

    str_atom["He"]={
       {
              "Name:            Helium- He\n\n",

              "Origin of Name: The English word helios\n\n",

              "Atomic Number               2\n",
              "Electronic Configuration    1s2\n",
              "Group                       18\n",
              "Period                      1\n",
              "Block                       s\n",
              "Atomic Weight               4.0026 g\n",
              "Atomic Radius               31 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               none K\n",
              "Boiling Point               4.1 K\n",
              "Density                     0.1785 g/cm3\n"
            },4.0026
        };
        int_atom[3]={
            {
              "Name:            Lithium- Li\n\n",

              "Origin of Name: The English word lithos\n\n",

              "Atomic Number               3\n",
              "Electronic Configuration    1s2 2s1\n",
              "Group                       1\n",
              "Period                      2\n",
              "Block                       s\n",
              "Atomic Weight               6.941 g\n",
              "Atomic Radius               182 pm\n",
              "Electronegativity           0.98 (Pauling Scale)\n",
              "Melting Point               453.5 K\n",
              "Boiling Point               1615 K\n",
              "Density                     0.53 g/cm3\n"
          },6.941
        };
        str_atom["Li"]={
               {
              "Name:            Lithium- Li\n\n",

              "Origin of Name: The English word lithos\n\n",

              "Atomic Number               3\n",
              "Electronic Configuration    1s2 2s1\n",
              "Group                       1\n",
              "Period                      2\n",
              "Block                       s\n",
              "Atomic Weight               6.941 g\n",
              "Atomic Radius               182 pm\n",
              "Electronegativity           0.98 (Pauling Scale)\n",
              "Melting Point               453.5 K\n",
              "Boiling Point               1615 K\n",
              "Density                     0.53 g/cm3\n"
          },6.941
        };
         int_atom[4]={
            {
              "Name:            Beryllium- Be\n\n",

              "Origin of Name: The English word beon\n\n",

              "Atomic Number               4\n",
              "Electronic Configuration    1s2 2s2\n",
              "Group                       2\n",
              "Period                      2\n",
              "Block                       s\n",
              "Atomic Weight               9.0122 g\n",
              "Atomic Radius               153 pm\n",
              "Electronegativity           1.57 (Pauling Scale)\n",
              "Melting Point               1560 K\n",
              "Boiling Point               2742 K\n",
              "Density                     1.848 g/cm3\n"
          },9.0122
        };
        str_atom["Be"]={
           {
              "Name:            Beryllium- Be\n\n",

              "Origin of Name: The English word beon\n\n",

              "Atomic Number               4\n",
              "Electronic Configuration    1s2 2s2\n",
              "Group                       2\n",
              "Period                      2\n",
              "Block                       s\n",
              "Atomic Weight               9.0122 g\n",
              "Atomic Radius               153 pm\n",
              "Electronegativity           1.57 (Pauling Scale)\n",
              "Melting Point               1560 K\n",
              "Boiling Point               2742 K\n",
              "Density                     1.848 g/cm3\n"
          },9.0122
        };
        int_atom[5]={
            {
              "Name:            Boron- B\n\n",

              "Origin of Name: The English word barn\n\n",

              "Atomic Number               5\n",
              "Electronic Configuration    1s2 2s2 2p1\n",
              "Group                       13\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               10.811 g\n",
              "Atomic Radius               85 pm\n",
              "Electronegativity           2.04 (Pauling Scale)\n",
              "Melting Point               2349 K\n",
              "Boiling Point               4273 K\n",
              "Density                     2.3 g/cm3\n"
          },10.811
        };
          str_atom["Be"]={
                 {
              "Name:            Boron- B\n\n",

              "Origin of Name: The English word barn\n\n",

              "Atomic Number               5\n",
              "Electronic Configuration    1s2 2s2 2p1\n",
              "Group                       13\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               10.811 g\n",
              "Atomic Radius               85 pm\n",
              "Electronegativity           2.04 (Pauling Scale)\n",
              "Melting Point               2349 K\n",
              "Boiling Point               4273 K\n",
              "Density                     2.3 g/cm3\n"
          },10.811
        };
         int_atom[6]={
           {
              "Name:            Carbon- C\n\n",

              "Origin of Name: The English word carbo\n\n",

              "Atomic Number               6\n",
              "Electronic Configuration    1s2 2s2 2p2\n",
              "Group                       14\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               12.011 g\n",
              "Atomic Radius               70 pm\n",
              "Electronegativity           2.55 (Pauling Scale)\n",
              "Melting Point               3823 K\n",
              "Boiling Point               5100 K\n",
              "Density                     2.25 g/cm3\n"
          },12.011
        };
          str_atom["C"]={
         {
              "Name:            Carbon- C\n\n",

              "Origin of Name: The English word carbo\n\n",

              "Atomic Number               6\n",
              "Electronic Configuration    1s2 2s2 2p2\n",
              "Group                       14\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               12.011 g\n",
              "Atomic Radius               70 pm\n",
              "Electronegativity           2.55 (Pauling Scale)\n",
              "Melting Point               3823 K\n",
              "Boiling Point               5100 K\n",
              "Density                     2.25 g/cm3\n"
          },12.011
        };
          int_atom[7]={
         {
              "Name:            Nitrogen- N\n\n",

              "Origin of Name: The Greek word nitron\n\n",

              "Atomic Number               7\n",
              "Electronic Configuration    1s2 2s2 2p3\n",
              "Group                       15\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               14.007 g\n",
              "Atomic Radius               65 pm\n",
              "Electronegativity           3.04 (Pauling Scale)\n",
              "Melting Point               63 K\n",
              "Boiling Point               77.2 K\n",
              "Density                     1.25 g/cm3\n"
          },14.007
        };
         str_atom["N"]={
         {
              "Name:            Nitrogen- N\n\n",

              "Origin of Name: The Greek word nitron\n\n",

              "Atomic Number               7\n",
              "Electronic Configuration    1s2 2s2 2p3\n",
              "Group                       15\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               14.007 g\n",
              "Atomic Radius               65 pm\n",
              "Electronegativity           3.04 (Pauling Scale)\n",
              "Melting Point               63 K\n",
              "Boiling Point               77.2 K\n",
              "Density                     1.25 g/cm3\n"
          },14.007
        };
         int_atom[8]={
         {
              "Name:            Oxygen- O\n\n",

              "Origin of Name: The Greek word oxygenes\n\n",

              "Atomic Number               8\n",
              "Electronic Configuration    1s2 2s2 2p4\n",
              "Group                       16\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               15.999 g\n",
              "Atomic Radius               60 pm\n",
              "Electronegativity           3.44 (Pauling Scale)\n",
              "Melting Point               54.2 K\n",
              "Boiling Point               90 K\n",
              "Density                     1.43 g/cm3\n"
          },15.999
        };
         str_atom["O"]={
         {
              "Name:            Oxygen- O\n\n",

              "Origin of Name: The Greek word oxygenes\n\n",

              "Atomic Number               8\n",
              "Electronic Configuration    1s2 2s2 2p4\n",
              "Group                       16\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               15.999 g\n",
              "Atomic Radius               60 pm\n",
              "Electronegativity           3.44 (Pauling Scale)\n",
              "Melting Point               54.2 K\n",
              "Boiling Point               90 K\n",
              "Density                     1.43 g/cm3\n"
          },15.999
        };
          int_atom[9]={
         {
              "Name:            Fluorine- F\n\n",

              "Origin of Name: The Latin word fluere\n\n",

              "Atomic Number               9\n",
              "Electronic Configuration    1s2 2s2 2p5\n",
              "Group                       17\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               18.998 g\n",
              "Atomic Radius               147 pm\n",
              "Electronegativity           3.98 (Pauling Scale)\n",
              "Melting Point               53.4 K\n",
              "Boiling Point               84.9 K\n",
              "Density                     1.696 g/cm3\n"
          },18.998
        };
       str_atom["F"]={
         {
              "Name:            Fluorine- F\n\n",

              "Origin of Name: The Latin word fluere\n\n",

              "Atomic Number               9\n",
              "Electronic Configuration    1s2 2s2 2p5\n",
              "Group                       17\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               18.998 g\n",
              "Atomic Radius               147 pm\n",
              "Electronegativity           3.98 (Pauling Scale)\n",
              "Melting Point               53.4 K\n",
              "Boiling Point               84.9 K\n",
              "Density                     1.696 g/cm3\n"
          },18.998
        };
         int_atom[10]={
         {
              "Name:            Neon- Ne\n\n",

              "Origin of Name: The Greek word neos\n\n",

              "Atomic Number               10\n",
              "Electronic Configuration    1s2 2s2 2p6\n",
              "Group                       18\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               20.18 g\n",
              "Atomic Radius               38 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               24.33 K\n",
              "Boiling Point               26.952 K\n",
              "Density                     0.899 g/cm3\n"
          },20.18
        };
        str_atom["Ne"]={
             {
              "Name:            Neon- Ne\n\n",

              "Origin of Name: The Greek word neos\n\n",

              "Atomic Number               10\n",
              "Electronic Configuration    1s2 2s2 2p6\n",
              "Group                       18\n",
              "Period                      2\n",
              "Block                       p\n",
              "Atomic Weight               20.18 g\n",
              "Atomic Radius               38 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               24.33 K\n",
              "Boiling Point               26.952 K\n",
              "Density                     0.899 g/cm3\n"
          },20.18
        };
           int_atom[12]={
        {
              "Name:            Megnesium- Mg\n\n",

              "Origin of Name: The Greek word magnesia\n\n",

              "Atomic Number               12\n",
              "Electronic Configuration    [Ne] 3s2\n",
              "Group                       2\n",
              "Period                      3\n",
              "Block                       s\n",
              "Atomic Weight               24.305 g\n",
              "Atomic Radius               173 pm\n",
              "Electronegativity           1.31 (Pauling Scale)\n",
              "Melting Point               923 K\n",
              "Boiling Point               1364 K\n",
              "Density                     1.738 g/cm3\n"
          },24.305
        };
       str_atom["Mg"]={
        {
              "Name:            Megnesium- Mg\n\n",

              "Origin of Name: The Greek word magnesia\n\n",

              "Atomic Number               12\n",
              "Electronic Configuration    [Ne] 3s2\n",
              "Group                       2\n",
              "Period                      3\n",
              "Block                       s\n",
              "Atomic Weight               24.305 g\n",
              "Atomic Radius               173 pm\n",
              "Electronegativity           1.31 (Pauling Scale)\n",
              "Melting Point               923 K\n",
              "Boiling Point               1364 K\n",
              "Density                     1.738 g/cm3\n"
          },24.305
        };

        int_atom[13]={
            {
              "Name:            Aluminium- Al\n\n",

              "Origin of Name: The Latin word alumen\n\n",

              "Atomic Number               13\n",
              "Electronic Configuration    [Ne] 3s2 3p1\n",
              "Group                       13\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               26.982 g\n",
              "Atomic Radius               143 pm\n",
              "Electronegativity           1.61 (Pauling Scale)\n",
              "Melting Point               933.3 K\n",
              "Boiling Point               2743 K\n",
              "Density                     2.7 g/cm3\n"
          },26.982
        };
        str_atom["Al"]={
            {
              "Name:            Aluminium- Al\n\n",

              "Origin of Name: The Latin word alumen\n\n",

              "Atomic Number               13\n",
              "Electronic Configuration    [Ne] 3s2 3p1\n",
              "Group                       13\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               26.982 g\n",
              "Atomic Radius               143 pm\n",
              "Electronegativity           1.61 (Pauling Scale)\n",
              "Melting Point               933.3 K\n",
              "Boiling Point               2743 K\n",
              "Density                     2.7 g/cm3\n"
          },26.982
        };
        str_atom["Mg"]={
          {
              "Name:            Aluminium- Al\n\n",

              "Origin of Name: The Latin word alumen\n\n",

              "Atomic Number               13\n",
              "Electronic Configuration    [Ne] 3s2 3p1\n",
              "Group                       13\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               26.982 g\n",
              "Atomic Radius               143 pm\n",
              "Electronegativity           1.61 (Pauling Scale)\n",
              "Melting Point               933.3 K\n",
              "Boiling Point               2743 K\n",
              "Density                     2.7 g/cm3\n"
          },26.982
        };
        int_atom[14]={
            {
              "Name:            Silicon- Si\n\n",

              "Origin of Name: The Latin word silicis\n\n",

              "Atomic Number               14\n",
              "Electronic Configuration    [Ne] 3s2 3p2\n",
              "Group                       14\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               28.086 g\n",
              "Atomic Radius               111 pm\n",
              "Electronegativity           1.9 (Pauling Scale)\n",
              "Melting Point               1683 K\n",
              "Boiling Point               2628 K\n",
              "Density                     2.33 g/cm3\n"
          },28.086
        };
        str_atom["Si"]={
            {
              "Name:            Silicon- Si\n\n",

              "Origin of Name: The Latin word silicis\n\n",

              "Atomic Number               14\n",
              "Electronic Configuration    [Ne] 3s2 3p2\n",
              "Group                       14\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               28.086 g\n",
              "Atomic Radius               111 pm\n",
              "Electronegativity           1.9 (Pauling Scale)\n",
              "Melting Point               1683 K\n",
              "Boiling Point               2628 K\n",
              "Density                     2.33 g/cm3\n"
          },28.086
        };
        int_atom[15]={
            {
              "Name:            Phosphorus- P\n\n",

              "Origin of Name: The Greek word phosphoros\n\n",

              "Atomic Number               15\n",
              "Electronic Configuration    [Ne] 3s2 3p3\n",
              "Group                       15\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               30.974 g\n",
              "Atomic Radius               195 pm\n",
              "Electronegativity           2.19 (Pauling Scale)\n",
              "Melting Point               317.1 K\n",
              "Boiling Point               552 K\n",
              "Density                     2.68 g/cm3\n"
          },30.974
        };
         str_atom["Si"]={
            {
              "Name:            Phosphorus- P\n\n",

              "Origin of Name: The Greek word phosphoros\n\n",

              "Atomic Number               15\n",
              "Electronic Configuration    [Ne] 3s2 3p3\n",
              "Group                       15\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               30.974 g\n",
              "Atomic Radius               195 pm\n",
              "Electronegativity           2.19 (Pauling Scale)\n",
              "Melting Point               317.1 K\n",
              "Boiling Point               552 K\n",
              "Density                     2.68 g/cm3\n"
          },30.974
        };
        int_atom[16]={
            {
              "Name:            Sulphur- S\n\n",

              "Origin of Name: The Latin word sulfurium\n\n",

              "Atomic Number               16\n",
              "Electronic Configuration    [Ne] 3s2 3p4\n",
              "Group                       16\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               32.065 g\n",
              "Atomic Radius               100 pm\n",
              "Electronegativity           2.58 (Pauling Scale)\n",
              "Melting Point               385.8 K\n",
              "Boiling Point               717.6 K\n",
              "Density                     2.07 g/cm3\n"
          },32.065
        };
        str_atom["S"]={
            {
              "Name:            Sulphur- S\n\n",

              "Origin of Name: The Latin word sulfurium\n\n",

              "Atomic Number               16\n",
              "Electronic Configuration    [Ne] 3s2 3p4\n",
              "Group                       16\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               32.065 g\n",
              "Atomic Radius               100 pm\n",
              "Electronegativity           2.58 (Pauling Scale)\n",
              "Melting Point               385.8 K\n",
              "Boiling Point               717.6 K\n",
              "Density                     2.07 g/cm3\n"
          },32.065
        };
        int_atom[17]={
            {
              "Name:            Chlorine- Cl\n\n",

              "Origin of Name: The Greek word chloros\n\n",

              "Atomic Number               17\n",
              "Electronic Configuration    [Ne] 3s2 3p5\n",
              "Group                       17\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               35.453 g\n",
              "Atomic Radius               175 pm\n",
              "Electronegativity           3.16 (Pauling Scale)\n",
              "Melting Point               171.5 K\n",
              "Boiling Point               238.96 K\n",
              "Density                     3.2 g/cm3\n"
          },35.453
        };
        str_atom["Cl"]={
            {
              "Name:            Chlorine- Cl\n\n",

              "Origin of Name: The Greek word chloros\n\n",

              "Atomic Number               17\n",
              "Electronic Configuration    [Ne] 3s2 3p5\n",
              "Group                       17\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               35.453 g\n",
              "Atomic Radius               175 pm\n",
              "Electronegativity           3.16 (Pauling Scale)\n",
              "Melting Point               171.5 K\n",
              "Boiling Point               238.96 K\n",
              "Density                     3.2 g/cm3\n"
          },35.453
        };
        int_atom[18]={
            {
              "Name:            Argon- Ar\n\n",

              "Origin of Name: The Greek word argos\n\n",

              "Atomic Number               18\n",
              "Electronic Configuration    [Ne] 3s2 3p6\n",
              "Group                       18\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               39.948 g\n",
              "Atomic Radius               188 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               83.6 K\n",
              "Boiling Point               87.2 K\n",
              "Density                     1.78 g/cm3\n"
          },39.948
        };
         str_atom["Ar"]={
            {
              "Name:            Argon- Ar\n\n",

              "Origin of Name: The Greek word argos\n\n",

              "Atomic Number               18\n",
              "Electronic Configuration    [Ne] 3s2 3p6\n",
              "Group                       18\n",
              "Period                      3\n",
              "Block                       p\n",
              "Atomic Weight               39.948 g\n",
              "Atomic Radius               188 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               83.6 K\n",
              "Boiling Point               87.2 K\n",
              "Density                     1.78 g/cm3\n"
          },39.948
        };
        int_atom[19]={
            {
              "Name:            Photassium- K\n\n",

              "Origin of Name: The English word pot ash\n\n",

              "Atomic Number               19\n",
              "Electronic Configuration    [Ar] 4s1\n",
              "Group                       1\n",
              "Period                      4\n",
              "Block                       s\n",
              "Atomic Weight               39.098 g\n",
              "Atomic Radius               280 pm\n",
              "Electronegativity           0.82 (Pauling Scale)\n",
              "Melting Point               336.5 K\n",
              "Boiling Point               1031.8 K\n",
              "Density                     0.962 g/cm3\n"
          },39.098
        };
        str_atom["K"]={
            {
              "Name:            Photassium- K\n\n",

              "Origin of Name: The English word pot ash\n\n",

              "Atomic Number               19\n",
              "Electronic Configuration    [Ar] 4s1\n",
              "Group                       1\n",
              "Period                      4\n",
              "Block                       s\n",
              "Atomic Weight               39.098 g\n",
              "Atomic Radius               280 pm\n",
              "Electronegativity           0.82 (Pauling Scale)\n",
              "Melting Point               336.5 K\n",
              "Boiling Point               1031.8 K\n",
              "Density                     0.962 g/cm3\n"
          },39.098
        };
        int_atom[20]={
            {
              "Name:           Calcium- Ca\n\n",

              "Origin of Name: The Latin word calx\n\n",

              "Atomic Number               20\n",
              "Electronic Configuration    [Ar] 4s2\n",
              "Group                       2\n",
              "Period                      4\n",
              "Block                       s\n",
              "Atomic Weight               40.078 g\n",
              "Atomic Radius               231 pm\n",
              "Electronegativity           1 (Pauling Scale)\n",
              "Melting Point               1115 K\n",
              "Boiling Point               1757 K\n",
              "Density                     1.54 g/cm3\n"
          },40.078
        };
        str_atom["Ca"]={
            {
              "Name:           Calcium- Ca\n\n",

              "Origin of Name: The Latin word calx\n\n",

              "Atomic Number               20\n",
              "Electronic Configuration    [Ar] 4s2\n",
              "Group                       2\n",
              "Period                      4\n",
              "Block                       s\n",
              "Atomic Weight               40.078 g\n",
              "Atomic Radius               231 pm\n",
              "Electronegativity           1 (Pauling Scale)\n",
              "Melting Point               1115 K\n",
              "Boiling Point               1757 K\n",
              "Density                     1.54 g/cm3\n"
          },40.078
        };
        int_atom[21]={
            {
              "Name:           Scandium- Sc\n\n",

              "Origin of Name: The Latin word scandinavia\n\n",

              "Atomic Number               21\n",
              "Electronic Configuration    [Ar] 3d1 4s2 \n",
              "Group                       3\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               44.956 g\n",
              "Atomic Radius               184 pm\n",
              "Electronegativity           1.36 (Pauling Scale)\n",
              "Melting Point               1814 K\n",
              "Boiling Point               3109 K\n",
              "Density                     2.989 g/cm3\n"
          },44.959
        };
        str_atom["Sc"]={
            {
              "Name:           Scandium- Sc\n\n",

              "Origin of Name: The Latin word scandinavia\n\n",

              "Atomic Number               21\n",
              "Electronic Configuration    [Ar] 3d1 4s2 \n",
              "Group                       3\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               44.956 g\n",
              "Atomic Radius               184 pm\n",
              "Electronegativity           1.36 (Pauling Scale)\n",
              "Melting Point               1814 K\n",
              "Boiling Point               3109 K\n",
              "Density                     2.989 g/cm3\n"
          },44.959
        };
        int_atom[22]={
            {
              "Name:           Titanium- Ti\n\n",

              "Origin of Name: The Greek word titans\n\n",

              "Atomic Number               22\n",
              "Electronic Configuration    [Ar] 3d2 4s2 \n",
              "Group                       4\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               47.867 g\n",
              "Atomic Radius               176 pm\n",
              "Electronegativity           1.54 (Pauling Scale)\n",
              "Melting Point               1941 K\n",
              "Boiling Point               3560 K\n",
              "Density                     4.54 g/cm3\n"
          },47.867
        };
         str_atom["Ti"]={
            {
              "Name:           Titanium- Ti\n\n",

              "Origin of Name: The Greek word titans\n\n",

              "Atomic Number               22\n",
              "Electronic Configuration    [Ar] 3d2 4s2 \n",
              "Group                       4\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               47.867 g\n",
              "Atomic Radius               176 pm\n",
              "Electronegativity           1.54 (Pauling Scale)\n",
              "Melting Point               1941 K\n",
              "Boiling Point               3560 K\n",
              "Density                     4.54 g/cm3\n"
          },47.867
        };
         int_atom[23]={
            {
              "Name:           Vanadium- V\n\n",

              "Origin of Name: The Latin word Vanadis\n\n",

              "Atomic Number               23\n",
              "Electronic Configuration    [Ar] 3d3 4s2 \n",
              "Group                       5\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               50.942 g\n",
              "Atomic Radius               171 pm\n",
              "Electronegativity           1.63 (Pauling Scale)\n",
              "Melting Point               2183 K\n",
              "Boiling Point               3680 K\n",
              "Density                     8.11 g/cm3\n"
          },50.942
        };
         str_atom["V"]={
            {
              "Name:           Vanadium- V\n\n",

              "Origin of Name: The Latin word Vanadis\n\n",

              "Atomic Number               23\n",
              "Electronic Configuration    [Ar] 3d3 4s2 \n",
              "Group                       5\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               50.942 g\n",
              "Atomic Radius               171 pm\n",
              "Electronegativity           1.63 (Pauling Scale)\n",
              "Melting Point               2183 K\n",
              "Boiling Point               3680 K\n",
              "Density                     8.11 g/cm3\n"
          },50.942
        };
        int_atom[24]={
            {
              "Name:           Chromium- Cr\n\n",

              "Origin of Name: The Greek word chroma\n\n",

              "Atomic Number               24\n",
              "Electronic Configuration    [Ar] 3d4 4s2 \n",
              "Group                       6\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               51.9961 g\n",
              "Atomic Radius               166 pm\n",
              "Electronegativity           1.66 (Pauling Scale)\n",
              "Melting Point               2180 K\n",
              "Boiling Point               2944 K\n",
              "Density                     7.15 g/cm3\n"
          },51.9961
        };
        str_atom["Cr"]={
            {
              "Name:           Chromium- Cr\n\n",

              "Origin of Name: The Greek word chroma\n\n",

              "Atomic Number               24\n",
              "Electronic Configuration    [Ar] 3d4 4s2 \n",
              "Group                       6\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               51.9961 g\n",
              "Atomic Radius               166 pm\n",
              "Electronegativity           1.66 (Pauling Scale)\n",
              "Melting Point               2180 K\n",
              "Boiling Point               2944 K\n",
              "Density                     7.15 g/cm3\n"
          },51.9961
        };
        int_atom[25]={
            {
              "Name:           Manganese- Mn\n\n",

              "Origin of Name: The Latin word magnes\n\n",

              "Atomic Number               25\n",
              "Electronic Configuration    [Ar] 3d5 4s2 \n",
              "Group                       7\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               54.938045 g\n",
              "Atomic Radius               161 pm\n",
              "Electronegativity           1.55 (Pauling Scale)\n",
              "Melting Point               1519 K\n",
              "Boiling Point               2334 K\n",
              "Density                     7.44 g/cm3\n"
          },54.938045
        };
         str_atom["Mn"]={
            {
              "Name:           Manganese- Mn\n\n",

              "Origin of Name: The Latin word magnes\n\n",

              "Atomic Number               25\n",
              "Electronic Configuration    [Ar] 3d5 4s2 \n",
              "Group                       7\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               54.938045 g\n",
              "Atomic Radius               161 pm\n",
              "Electronegativity           1.55 (Pauling Scale)\n",
              "Melting Point               1519 K\n",
              "Boiling Point               2334 K\n",
              "Density                     7.44 g/cm3\n"
          },54.938045
        }; int_atom[26]={
            {
              "Name:           Iron- Fe\n\n",

              "Origin of Name: The Anglo-Saxon name iren \n\n",

              "Atomic Number               26\n",
              "Electronic Configuration    [Ar] 3d6 4s2 \n",
              "Group                       8\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               55.845 g\n",
              "Atomic Radius               156 pm\n",
              "Electronegativity           1.83 (Pauling Scale)\n",
              "Melting Point               1811 K\n",
              "Boiling Point               3134 K\n",
              "Density                     7.874 g/cm3\n"
          },55.845
        };  str_atom["Fe"]={
            {
               "Name:           Iron- Fe\n\n",

              "Origin of Name: The Anglo-Saxon name iren \n\n",

              "Atomic Number               26\n",
              "Electronic Configuration    [Ar] 3d6 4s2 \n",
              "Group                       8\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               55.845 g\n",
              "Atomic Radius               156 pm\n",
              "Electronegativity           1.83 (Pauling Scale)\n",
              "Melting Point               1811 K\n",
              "Boiling Point               3134 K\n",
              "Density                     7.874 g/cm3\n"
          },55.845
        }; int_atom[27]={
            {
              "Name:           Cobalt- Co\n\n",

              "Origin of Name: The Anglo-Saxon name iren \n\n",

              "Atomic Number               27\n",
              "Electronic Configuration    [Ar] 3d7 4s2 \n",
              "Group                       9\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               58.933195 g\n",
              "Atomic Radius               152 pm\n",
              "Electronegativity           1.88 (Pauling Scale)\n",
              "Melting Point               1768 K\n",
              "Boiling Point               3200 K\n",
              "Density                     8.86 g/cm3\n"
          },58.933195
        }; str_atom["Co"]={
        {
              "Name:           Cobalt- Co\n\n",

              "Origin of Name: The Anglo-Saxon name iren \n\n",

              "Atomic Number               27\n",
              "Electronic Configuration    [Ar] 3d7 4s2 \n",
              "Group                       9\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               58.933195 g\n",
              "Atomic Radius               152 pm\n",
              "Electronegativity           1.88 (Pauling Scale)\n",
              "Melting Point               1768 K\n",
              "Boiling Point               3200 K\n",
              "Density                     8.86 g/cm3\n"
          },58.933195
        };
        int_atom[28]={
            {
         "Name:           Nickel- Ni\n\n",

              "Origin of Name: The German word 'kobald'\n\n",

              "Atomic Number               28\n",
              "Electronic Configuration    [Ar] 3d8 4s2 \n",
              "Group                       10\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               58.6934 g\n",
              "Atomic Radius               149 pm\n",
              "Electronegativity           1.91 (Pauling Scale)\n",
              "Melting Point               1728 K\n",
              "Boiling Point               3186 K\n",
              "Density                     8.914 g/cm3\n"
          },58.6934
        };str_atom["Ni"]={
               {
         "Name:           Nickel- Ni\n\n",

              "Origin of Name: The German word 'kobald'\n\n",

              "Atomic Number               28\n",
              "Electronic Configuration    [Ar] 3d8 4s2 \n",
              "Group                       10\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               58.6934 g\n",
              "Atomic Radius               149 pm\n",
              "Electronegativity           1.91 (Pauling Scale)\n",
              "Melting Point               1728 K\n",
              "Boiling Point               3186 K\n",
              "Density                     8.914 g/cm3\n"
          },58.6934
        };int_atom[29]={
           {
         "Name:           Copper- Cu\n\n",

              "Origin of Name: The Latin 'Cyprium aes'\n\n",

              "Atomic Number               29\n",
              "Electronic Configuration    [Ar] 3d10 4s1 \n",
              "Group                       11\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               63.546 g\n",
              "Atomic Radius               145 pm\n",
              "Electronegativity           1.90 (Pauling Scale)\n",
              "Melting Point               1357.77 K\n",
              "Boiling Point               2835 K\n",
              "Density                     8.96 g/cm3\n"
          },63.546
        };str_atom["Cu"]={
               {
         "Name:           Copper- Cu\n\n",

              "Origin of Name: The Latin 'Cyprium aes'\n\n",

              "Atomic Number               29\n",
              "Electronic Configuration    [Ar] 3d10 4s1 \n",
              "Group                       11\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               63.546 g\n",
              "Atomic Radius               145 pm\n",
              "Electronegativity           1.90 (Pauling Scale)\n",
              "Melting Point               1357.77 K\n",
              "Boiling Point               2835 K\n",
              "Density                     8.96 g/cm3\n"
          },63.546
        };int_atom[30]={
           {
         "Name:           Zinc- Zn\n\n",

              "Origin of Name: The  German, 'zinc'\n\n",

              "Atomic Number               30\n",
              "Electronic Configuration    [Ar] 3d10 4s2 \n",
              "Group                       12\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               65.38 g\n",
              "Atomic Radius               142 pm\n",
              "Electronegativity           1.65 (Pauling Scale)\n",
              "Melting Point               692.88 K\n",
              "Boiling Point               1180 K\n",
              "Density                     7.134 g/cm3\n"
          },65.38
        };str_atom["Zn"]={
            {
              "Name:           Zinc- Zn\n\n",

              "Origin of Name: The  German, 'zinc'\n\n",

              "Atomic Number               30\n",
              "Electronic Configuration    [Ar] 3d10 4s2 \n",
              "Group                       12\n",
              "Period                      4\n",
              "Block                       d\n",
              "Atomic Weight               65.38 g\n",
              "Atomic Radius               142 pm\n",
              "Electronegativity           1.65 (Pauling Scale)\n",
              "Melting Point               692.88 K\n",
              "Boiling Point               1180 K\n",
              "Density                     7.134 g/cm3\n"
          },65.38
        }; int_atom[31]={
            {
         "Name:           Gallium- Ga\n\n",

              "Origin of Name: The  Greek, 'Gorgie'\n\n",

              "Atomic Number               31\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p1 \n",
              "Group                       13\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               69.723 g\n",
              "Atomic Radius               136 pm\n",
              "Electronegativity           1.81 (Pauling Scale)\n",
              "Melting Point               302.914 K\n",
              "Boiling Point               2477 K\n",
              "Density                     5.907 g/cm3\n"
          },69.723
        };str_atom["Ga"]={
             {
         "Name:           Gallium- Ga\n\n",

              "Origin of Name: The Greek ,'Georgie' \n\n",

              "Atomic Number               31\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p1 \n",
              "Group                       13\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               69.723 g\n",
              "Atomic Radius               136 pm\n",
              "Electronegativity           1.81 (Pauling Scale)\n",
              "Melting Point               302.914 K\n",
              "Boiling Point               2477 K\n",
              "Density                     5.907 g/cm3\n"
          },69.723
        };  int_atom[32]={
        {
         "Name:           Germanium - Ge\n\n",

              "Origin of Name: The  Latin, 'Germania'\n\n",

              "Atomic Number               32\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p2 \n",
              "Group                       14\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               72.630 g\n",
              "Atomic Radius               125 pm\n",
              "Electronegativity           2.01 (Pauling Scale)\n",
              "Melting Point               1211.40 K\n",
              "Boiling Point               3106 K\n",
              "Density                     5.323 g/cm3\n"
          },72.630
        };str_atom["Ge"]={
            {
         "Name:           Germanium - Ge\n\n",

              "Origin of Name: The  Latin, 'Germania'\n\n",

              "Atomic Number               32\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p2 \n",
              "Group                       14\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               72.630 g\n",
              "Atomic Radius               125 pm\n",
              "Electronegativity           2.01 (Pauling Scale)\n",
              "Melting Point               1211.40 K\n",
              "Boiling Point               3106 K\n",
              "Density                     5.323 g/cm3\n"
          },72.630
        };int_atom[33]={
        {
         "Name:           Arsenic- As\n\n",

              "Origin of Name: The  Latin, 'Germania'\n\n",

              "Atomic Number               33\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p3 \n",
              "Group                       15\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               74.92160 g\n",
              "Atomic Radius               114 pm\n",
              "Electronegativity           2.18 (Pauling Scale)\n",
              "Melting Point               1090 K\n",
              "Boiling Point               887 K\n",
              "Density                     5.776 g/cm3\n"
          },74.92160
        };str_atom["As"]={
            {
         "Name:           Arsenic- As\n\n",

              "Origin of Name: The  Latin, 'Germania'\n\n",

              "Atomic Number               33\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p3 \n",
              "Group                       15\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               74.92160 g\n",
              "Atomic Radius               114 pm\n",
              "Electronegativity           2.18 (Pauling Scale)\n",
              "Melting Point               1090 K\n",
              "Boiling Point               887 K\n",
              "Density                     5.776 g/cm3\n"
          },74.92160
        };int_atom[34]={
        {
         "Name:          Selenium- Se \n\n",

              "Origin of Name: The  Moon\n\n",

              "Atomic Number               34\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p4 \n",
              "Group                       16\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               78.96 g\n",
              "Atomic Radius               103 pm\n",
              "Electronegativity           2.55 (Pauling Scale)\n",
              "Melting Point               453 K\n",
              "Boiling Point               958 K\n",
              "Density                     4.809 g/cm3\n"
          },78.96
        };str_atom["Se"]={
           {
         "Name:          Selenium- Se \n\n",

              "Origin of Name: The  Moon\n\n",

              "Atomic Number               34\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p4 \n",
              "Group                       16\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               78.96 g\n",
              "Atomic Radius               103 pm\n",
              "Electronegativity           2.55 (Pauling Scale)\n",
              "Melting Point               453 K\n",
              "Boiling Point               958 K\n",
              "Density                     4.809 g/cm3\n"
          },78.96
        }; int_atom[35]={
        {
         "Name:          Bromine- Br \n\n",

              "Origin of Name: The Greek 'bromos'\n\n",

              "Atomic Number               35\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p5 \n",
              "Group                       17\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               79.904 g\n",
              "Atomic Radius               94 pm\n",
              "Electronegativity           2.95 (Pauling Scale)\n",
              "Melting Point               265.8 K\n",
              "Boiling Point               332 K\n",
              "Density                     3.12 g/cm3\n"
          },79.904
        };str_atom["Br"]={
            {
         "Name:          Bromine- Br \n\n",

              "Origin of Name: The Greek 'bromos'\n\n",

              "Atomic Number               35\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p5 \n",
              "Group                       17\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               79.904 g\n",
              "Atomic Radius               94 pm\n",
              "Electronegativity           2.95 (Pauling Scale)\n",
              "Melting Point               265.8 K\n",
              "Boiling Point               332 K\n",
              "Density                     3.12 g/cm3\n"
          },79.904
        };int_atom[36]={
        {
         "Name:          Krypton- Kr \n\n",

              "Origin of Name: The Greek 'kryptos'\n\n",

              "Atomic Number               36\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p6 \n",
              "Group                       18\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               83.798 g\n",
              "Atomic Radius               88 pm\n",
              "Electronegativity           3.00 (Pauling Scale)\n",
              "Melting Point               115.79 K\n",
              "Boiling Point               119.93 K\n",
              "Density                     0 g/cm3\n"
          },83.798
        };str_atom["Kr"]={
            {
         "Name:          Krypton- Kr \n\n",

              "Origin of Name: The Greek 'kryptos'\n\n",

              "Atomic Number               36\n",
              "Electronic Configuration    [Ar] 3d10 4s2 4p6 \n",
              "Group                       18\n",
              "Period                      4\n",
              "Block                       p\n",
              "Atomic Weight               83.798 g\n",
              "Atomic Radius               88 pm\n",
              "Electronegativity           3.00 (Pauling Scale)\n",
              "Melting Point               115.79 K\n",
              "Boiling Point               119.93 K\n",
              "Density                     0 g/cm3\n"
          },83.798
        };int_atom[37]={
        {
         "Name:         Rubidium- Rb \n\n",

              "Origin of Name: The Latin 'rubidius\n\n",

              "Atomic Number               37\n",
              "Electronic Configuration    [Kr] 5s1 \n",
              "Group                       1\n",
              "Period                      5\n",
              "Block                       s\n",
              "Atomic Weight               85.4678 g\n",
              "Atomic Radius               265 pm\n",
              "Electronegativity           0.82 (Pauling Scale)\n",
              "Melting Point               312.46 K\n",
              "Boiling Point               961 K\n",
              "Density                     1.53 g/cm3\n"
          },85.4678
        };str_atom["Rb"]={
            {
         "Name:         Rubidium- Rb \n\n",

              "Origin of Name: The Latin 'rubidius\n\n",

              "Atomic Number               37\n",
              "Electronic Configuration    [Kr] 5s1 \n",
              "Group                       1\n",
              "Period                      5\n",
              "Block                       s\n",
              "Atomic Weight               85.4678 g\n",
              "Atomic Radius               265 pm\n",
              "Electronegativity           0.82 (Pauling Scale)\n",
              "Melting Point               312.46 K\n",
              "Boiling Point               961 K\n",
              "Density                     1.53 g/cm3\n"
          },85.4678
        };int_atom[38]={
        {
         "Name:         Strontium - Sr \n\n",

              "Origin of Name: Strontian\n\n",

              "Atomic Number               38\n",
              "Electronic Configuration    [Kr] 5s2 \n",
              "Group                       2\n",
              "Period                      5\n",
              "Block                       s\n",
              "Atomic Weight               87.62 g\n",
              "Atomic Radius               219 pm\n",
              "Electronegativity           0.95 (Pauling Scale)\n",
              "Melting Point               1050 K\n",
              "Boiling Point               1655 K\n",
              "Density                     2.64 g/cm3\n"
          },87.62
        };str_atom["Sr"]={
            {
         "Name:         Strontium - Sr \n\n",

              "Origin of Name: Strontian\n\n",

              "Atomic Number               38\n",
              "Electronic Configuration    [Kr] 5s2 \n",
              "Group                       2\n",
              "Period                      5\n",
              "Block                       s\n",
              "Atomic Weight               87.62 g\n",
              "Atomic Radius               219 pm\n",
              "Electronegativity           0.95 (Pauling Scale)\n",
              "Melting Point               1050 K\n",
              "Boiling Point               1655 K\n",
              "Density                     2.64 g/cm3\n"
          },87.62
        };int_atom[39]={
             {
         "Name:          Yttrium - Y \n\n",

              "Origin of Name: 'Ytterby'\n\n",

              "Atomic Number               39\n",
              "Electronic Configuration    [Kr] 4d1 5s2 \n",
              "Group                       3\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               88.90585 g\n",
              "Atomic Radius               212 pm\n",
              "Electronegativity           1.22 (Pauling Scale)\n",
              "Melting Point               1799 K\n",
              "Boiling Point               3609 K\n",
              "Density                     4.46 g/cm3\n"
          },88.90585
        };str_atom["Y"]={
                   {
         "Name:          Yttrium - Y \n\n",

              "Origin of Name: 'Ytterby'\n\n",

              "Atomic Number               39\n",
              "Electronic Configuration    [Kr] 4d1 5s2 \n",
              "Group                       3\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               88.90585 g\n",
              "Atomic Radius               212 pm\n",
              "Electronegativity           1.22 (Pauling Scale)\n",
              "Melting Point               1799 K\n",
              "Boiling Point               3609 K\n",
              "Density                     4.46 g/cm3\n"
          },88.90585
        };int_atom[40]={
               {
         "Name:          Zirconium- Zr \n\n",

              "Origin of Name:The Persian 'zargun' \n\n",

              "Atomic Number               40\n",
              "Electronic Configuration    [Kr] 4d2 5s2 \n",
              "Group                       4\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               91.224 g\n",
              "Atomic Radius               206 pm\n",
              "Electronegativity           1.33 (Pauling Scale)\n",
              "Melting Point               2128 K\n",
              "Boiling Point               4682 K\n",
              "Density                     6.50 g/cm3\n"
          },91.224
        };str_atom["Zr"]={
                  {
         "Name:          Zirconium- Zr \n\n",

              "Origin of Name:The Persian 'zargun' \n\n",

              "Atomic Number               40\n",
              "Electronic Configuration    [Kr] 4d2 5s2 \n",
              "Group                       4\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               91.224 g\n",
              "Atomic Radius               206 pm\n",
              "Electronegativity           1.33 (Pauling Scale)\n",
              "Melting Point               2128 K\n",
              "Boiling Point               4682 K\n",
              "Density                     6.50 g/cm3\n"
          },91.224
        };int_atom[41]={
              {
         "Name:         Niobium- Nb \n\n",

              "Origin of Name: Niobe \n\n",

              "Atomic Number               41\n",
              "Electronic Configuration    [Kr] 4d4 5s1 \n",
              "Group                       5\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               92.90638 g\n",
              "Atomic Radius               198 pm\n",
              "Electronegativity           1.6 (Pauling Scale)\n",
              "Melting Point               2750 K\n",
              "Boiling Point               5017 K\n",
              "Density                     8.57 g/cm3\n"
          },92.90638
        };str_atom["Nb"]={
        {
         "Name:         Niobium- Nb \n\n",

              "Origin of Name: Niobe \n\n",

              "Atomic Number               41\n",
              "Electronic Configuration    [Kr] 4d4 5s1 \n",
              "Group                       5\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               92.90638 g\n",
              "Atomic Radius               198 pm\n",
              "Electronegativity           1.6 (Pauling Scale)\n",
              "Melting Point               2750 K\n",
              "Boiling Point               5017 K\n",
              "Density                     8.57 g/cm3\n"
          },92.90638
        };int_atom[42]={
        {
         "Name:         Molybdenum- Mo \n\n",

              "Origin of Name: The Greek 'molybdos'  \n\n",

              "Atomic Number               42\n",
              "Electronic Configuration    [Kr] 4d5 5s1 \n",
              "Group                       6\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               95.96 g\n",
              "Atomic Radius               190 pm\n",
              "Electronegativity           2.16 (Pauling Scale)\n",
              "Melting Point               2895 K\n",
              "Boiling Point               4912 K\n",
              "Density                     10.2 g/cm3\n"
          },95.96
        };str_atom["Mo"]={
            {
         "Name:         Molybdenum- Mo \n\n",

              "Origin of Name: The Greek 'molybdos'  \n\n",

              "Atomic Number               42\n",
              "Electronic Configuration    [Kr] 4d5 5s1 \n",
              "Group                       6\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               95.96 g\n",
              "Atomic Radius               190 pm\n",
              "Electronegativity           2.16 (Pauling Scale)\n",
              "Melting Point               2895 K\n",
              "Boiling Point               4912 K\n",
              "Density                     10.2 g/cm3\n"
          },95.96
        };int_atom[43]={
            {
         "Name:        Technetium- Tc \n\n",

              "Origin of Name: The Greek  'tekhnetos' \n\n",

              "Atomic Number               43\n",
              "Electronic Configuration    [Kr] 4d5 5s2 \n",
              "Group                       7\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               98 g\n",
              "Atomic Radius               183 pm\n",
              "Electronegativity           1.9 (Pauling Scale)\n",
              "Melting Point               2430 K\n",
              "Boiling Point               4538 K\n",
              "Density                     11.5 g/cm3\n"
          },98
        };str_atom["Tc"]={
        {
         "Name:        Technetium- Tc \n\n",

              "Origin of Name: The Greek  'tekhnetos' \n\n",

              "Atomic Number               43\n",
              "Electronic Configuration    [Kr] 4d5 5s2 \n",
              "Group                       7\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               98 g\n",
              "Atomic Radius               183 pm\n",
              "Electronegativity           1.9 (Pauling Scale)\n",
              "Melting Point               2430 K\n",
              "Boiling Point               4538 K\n",
              "Density                     11.5 g/cm3\n"
          },98
        };int_atom[44]={
        {
         "Name:       Ruthenium- Ru  \n\n",

              "Origin of Name: Russia \n\n",

              "Atomic Number               44\n",
              "Electronic Configuration    [Kr] 4d7 5s1 \n",
              "Group                       8\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               101.07 g\n",
              "Atomic Radius               178 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               2607 K\n",
              "Boiling Point               4423 K\n",
              "Density                     12.3 g/cm3\n"
          },101.07
        };str_atom["Ru"]={
             {
         "Name:       Ruthenium- Ru  \n\n",

              "Origin of Name: Russia \n\n",

              "Atomic Number               44\n",
              "Electronic Configuration    [Kr] 4d7 5s1 \n",
              "Group                       8\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               101.07 g\n",
              "Atomic Radius               178 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               2607 K\n",
              "Boiling Point               4423 K\n",
              "Density                     12.3 g/cm3\n"
          },101.07
        };int_atom[45]={
         {
         "Name:        Rhodium- Rh \n\n",

              "Origin of Name: The Greek 'rhodon' \n\n",

              "Atomic Number               45\n",
              "Electronic Configuration    [Kr] 4d8 5s1 \n",
              "Group                       9\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               102.90550 g\n",
              "Atomic Radius               173 pm\n",
              "Electronegativity           2.28 (Pauling Scale)\n",
              "Melting Point               2237 K\n",
              "Boiling Point               3968 K\n",
              "Density                     12.4 g/cm3\n"
          },102.90550
        };str_atom["Rh"]={
         {
         "Name:        Rhodium- Rh \n\n",

              "Origin of Name: The Greek 'rhodon' \n\n",

              "Atomic Number               45\n",
              "Electronic Configuration    [Kr] 4d8 5s1 \n",
              "Group                       9\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               102.90550 g\n",
              "Atomic Radius               173 pm\n",
              "Electronegativity           2.28 (Pauling Scale)\n",
              "Melting Point               2237 K\n",
              "Boiling Point               3968 K\n",
              "Density                     12.4 g/cm3\n"
          },102.90550
        };
           int_atom[46]={
               {
         "Name:         Palladium- Pd\n\n",

              "Origin of Name: The asteroid Pallas  \n\n",

              "Atomic Number               46\n",
              "Electronic Configuration    [Kr] 4d10 \n",
              "Group                       10\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               106.42 g\n",
              "Atomic Radius               169 pm\n",
              "Electronegativity           2.20 (Pauling Scale)\n",
              "Melting Point               1828.05 K\n",
              "Boiling Point               3236 K\n",
              "Density                     12.02 g/cm3\n"
          },106.42
        };str_atom["Pd"]={
               {
         "Name:         Palladium- Pd\n\n",

              "Origin of Name: The asteroid Pallas\n\n",

              "Atomic Number               46\n",
              "Electronic Configuration    [Kr] 4d10 \n",
              "Group                       10\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               106.42 g\n",
              "Atomic Radius               169 pm\n",
              "Electronegativity           2.20 (Pauling Scale)\n",
              "Melting Point               1828.05 K\n",
              "Boiling Point               3236 K\n",
              "Density                     12.02 g/cm3\n"
          },106.42
        }; int_atom[47]={
               {
         "Name:        Silver - Ag \n\n",

              "Origin of Name: The Anglo-Saxon name siolfur \n\n",

              "Atomic Number               47\n",
              "Electronic Configuration    [Kr] 4d10 5s1 \n",
              "Group                       11\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               107.8682 g\n",
              "Atomic Radius               165 pm\n",
              "Electronegativity           1.93 (Pauling Scale)\n",
              "Melting Point               1234.93 K\n",
              "Boiling Point               2435 K\n",
              "Density                     10.501 g/cm3\n"
          },107.8682
        };str_atom["Ag"]={
               {
         "Name:        Silver - Ag \n\n",

              "Origin of Name: The Anglo-Saxon name siolfur \n\n",

              "Atomic Number               47\n",
              "Electronic Configuration    [Kr] 4d10 5s1\n",
              "Group                       11\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               107.8682 g\n",
              "Atomic Radius               165 pm\n",
              "Electronegativity           1.93 (Pauling Scale)\n",
              "Melting Point               1234.93 K\n",
              "Boiling Point               2435 K\n",
              "Density                     10.501 g/cm3\n"
          },107.8682
        };int_atom[48]={
               {
         "Name:       Cadmium- Cd  \n\n",

              "Origin of Name: The latin word 'cadmia' \n\n",

              "Atomic Number               48\n",
              "Electronic Configuration    [Kr] 4d10 5s2 \n",
              "Group                       12\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               112.411 g\n",
              "Atomic Radius               161 pm\n",
              "Electronegativity           1.69 (Pauling Scale)\n",
              "Melting Point               594.22 K\n",
              "Boiling Point               1040 K\n",
              "Density                     8.69 g/cm3\n"
          },112.411
        };str_atom["Cd"]={
               {
         "Name:       Cadmium- Cd  \n\n",

              "Origin of Name: The latin word 'cadmia'  \n\n",

              "Atomic Number               48\n",
              "Electronic Configuration    [Kr] 4d10 5s2 \n",
              "Group                       12\n",
              "Period                      5\n",
              "Block                       d\n",
              "Atomic Weight               112.411 g\n",
              "Atomic Radius               161 pm\n",
              "Electronegativity           1.69 (Pauling Scale)\n",
              "Melting Point               594.22 K\n",
              "Boiling Point               1040 K\n",
              "Density                     8.69 g/cm3\n"
          },112.411
        };int_atom[49]={
               {
         "Name:      Indium- In  \n\n",

              "Origin of Name: The Latin 'indicium' \n\n",

              "Atomic Number               49\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p1\n",
              "Group                       13\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               114.818 g\n",
              "Atomic Radius               156 pm\n",
              "Electronegativity           1.78 (Pauling Scale)\n",
              "Melting Point               429.75 K\n",
              "Boiling Point               2345 K\n",
              "Density                     7.31 g/cm3\n"
          },114.818
        };str_atom["In"]={
               {
         "Name:      Indium- In  \n\n",

              "Origin of Name: The Latin 'indicium' \n\n",

              "Atomic Number               49\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p1\n",
              "Group                       13\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               114.818 g\n",
              "Atomic Radius               156 pm\n",
              "Electronegativity           1.78 (Pauling Scale)\n",
              "Melting Point               429.75 K\n",
              "Boiling Point               2345 K\n",
              "Density                     7.31 g/cm3\n"
          },114.818
        };int_atom[50]={
               {
         "Name:      Tin-Sn \n\n",

              "Origin of Name: The Anglo-Saxon word tin \n\n",

              "Atomic Number               50\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p2\n",
              "Group                       14\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               118.710 g\n",
              "Atomic Radius               145 pm\n",
              "Electronegativity           1.96 (Pauling Scale)\n",
              "Melting Point               505.08 K\n",
              "Boiling Point               2875 K\n",
              "Density                     7.287 g/cm3\n"
          },118.710
        };str_atom["Sn"]={
               {
         "Name:      Tin-Sn \n\n",

              "Origin of Name: The Anglo-Saxon word tin \n\n",

              "Atomic Number               50\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p2\n",
              "Group                       14\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               118.710 g\n",
              "Atomic Radius               145 pm\n",
              "Electronegativity           1.96 (Pauling Scale)\n",
              "Melting Point               505.08 K\n",
              "Boiling Point               2875 K\n",
              "Density                     7.287 g/cm3\n"
          },118.710
        };int_atom[51]={
               {
         "Name:      Antimony- Sb \n\n",

              "Origin of Name: The Greek 'anti – monos' \n\n",

              "Atomic Number               51\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p3\n",
              "Group                       15\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               112.760g\n",
              "Atomic Radius               133 pm\n",
              "Electronegativity           2.05 (Pauling Scale)\n",
              "Melting Point               903.78 K\n",
              "Boiling Point               1860 K\n",
              "Density                     6.685 g/cm3\n"
          },112.760
        };str_atom["Sb"]={
            {
         "Name:      Antimony- Sb \n\n",

              "Origin of Name: The Greek 'anti – monos' \n\n",

              "Atomic Number               51\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p3\n",
              "Group                       15\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               112.760g\n",
              "Atomic Radius               133 pm\n",
              "Electronegativity           2.05 (Pauling Scale)\n",
              "Melting Point               903.78 K\n",
              "Boiling Point               1860 K\n",
              "Density                     6.685 g/cm3\n"
          },112.760
        };int_atom[52]={
           {
         "Name:     Tellurium- Te  \n\n",

              "Origin of Name: Earth \n\n",

              "Atomic Number               52\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p4\n",
              "Group                       16\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               127.60 g\n",
              "Atomic Radius               123 pm\n",
              "Electronegativity           2.1 (Pauling Scale)\n",
              "Melting Point               722.66 K\n",
              "Boiling Point               1261 K\n",
              "Density                     6.232 g/cm3\n"
          },127.60
        };str_atom["Te"]={
        {
         "Name:     Tellurium- Te  \n\n",

              "Origin of Name: Earth \n\n",

              "Atomic Number               52\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p4\n",
              "Group                       16\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               127.60 g\n",
              "Atomic Radius               123 pm\n",
              "Electronegativity           2.1 (Pauling Scale)\n",
              "Melting Point               722.66 K\n",
              "Boiling Point               1261 K\n",
              "Density                     6.232 g/cm3\n"
          },127.60
        };  int_atom[53]={
           {
         "Name:    Iodine- I \n\n",

              "Origin of Name: The Greek 'iodes' \n\n",

              "Atomic Number               53\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p5\n",
              "Group                       17\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               126.90447 g\n",
              "Atomic Radius               115 pm\n",
              "Electronegativity           2.66 (Pauling Scale)\n",
              "Melting Point               386.85 K\n",
              "Boiling Point               457.4 K\n",
              "Density                     4.93 g/cm3\n"
          },126.90447
        };str_atom["I"]={
         {
         "Name:    Iodine- I \n\n",

              "Origin of Name: The Greek 'iodes' \n\n",

              "Atomic Number               53\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p5\n",
              "Group                       17\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               126.90447 g\n",
              "Atomic Radius               115 pm\n",
              "Electronegativity           2.66 (Pauling Scale)\n",
              "Melting Point               386.85 K\n",
              "Boiling Point               457.4 K\n",
              "Density                     4.93 g/cm3\n"
          },126.90447
        };  int_atom[54]={
        {
         "Name:    Xenon - Xe \n\n",

              "Origin of Name: The Greek 'xenos' \n\n",

              "Atomic Number               54\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p6\n",
              "Group                       18\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               131.293 g\n",
              "Atomic Radius               108 pm\n",
              "Electronegativity           2.6 (Pauling Scale)\n",
              "Melting Point               161.4 K\n",
              "Boiling Point               165.03 K\n",
              "Density                     0.00588 g/cm3\n"
          },131.293
        };str_atom["Xe"]={
        {
         "Name:    Xenon - Xe \n\n",

              "Origin of Name: The Greek 'xenos' \n\n",

              "Atomic Number               54\n",
              "Electronic Configuration    [Kr] 4d10 5s2 5p6\n",
              "Group                       18\n",
              "Period                      5\n",
              "Block                       p\n",
              "Atomic Weight               131.293 g\n",
              "Atomic Radius               108 pm\n",
              "Electronegativity           2.6 (Pauling Scale)\n",
              "Melting Point               161.4 K\n",
              "Boiling Point               165.03 K\n",
              "Density                     0.00588 g/cm3\n"
          },131.293
        };int_atom[55]={
        {
         "Name:  Caesium - Cs \n\n",

              "Origin of Name: The Latin 'caesius' \n\n",

              "Atomic Number               55\n",
              "Electronic Configuration    [Xe] 6s1\n",
              "Group                       1\n",
              "Period                      6\n",
              "Block                       s\n",
              "Atomic Weight               132.9054519 g\n",
              "Atomic Radius               298 pm\n",
              "Electronegativity           0.79 (Pauling Scale)\n",
              "Melting Point               301.59 K\n",
              "Boiling Point               944 K\n",
              "Density                     1.873 g/cm3\n"
          },132.9054519
        }; str_atom["Cs"]={
        {
         "Name:  Caesium - Cs \n\n",

              "Origin of Name: The Latin 'caesius' \n\n",

              "Atomic Number               55\n",
              "Electronic Configuration    [Xe] 6s1\n",
              "Group                       1\n",
              "Period                      6\n",
              "Block                       s\n",
              "Atomic Weight               132.9054519 g\n",
              "Atomic Radius               298 pm\n",
              "Electronegativity           0.79 (Pauling Scale)\n",
              "Melting Point               301.59 K\n",
              "Boiling Point               944 K\n",
              "Density                     1.873 g/cm3\n"
          },132.9054519
        };int_atom[56]={
        {
         "Name:  Barium- Ba\n\n",

              "Origin of Name: The Greek 'barys' \n\n",

              "Atomic Number               56\n",
              "Electronic Configuration    [Xe] 6s2\n",
              "Group                       2\n",
              "Period                      6\n",
              "Block                       s\n",
              "Atomic Weight               137.327g\n",
              "Atomic Radius               253 pm\n",
              "Electronegativity           0.89 (Pauling Scale)\n",
              "Melting Point               1000 K\n",
              "Boiling Point               2170 K\n",
              "Density                     3.594 g/cm3\n"
          },137.327
        }; str_atom["Ba"]={
        {
         "Name:  Barium- Ba\n\n",

              "Origin of Name: The Greek 'barys' \n\n",

              "Atomic Number               56\n",
              "Electronic Configuration    [Xe] 6s2\n",
              "Group                       2\n",
              "Period                      6\n",
              "Block                       s\n",
              "Atomic Weight               137.327g\n",
              "Atomic Radius               253 pm\n",
              "Electronegativity           0.89 (Pauling Scale)\n",
              "Melting Point               1000 K\n",
              "Boiling Point               2170 K\n",
              "Density                     3.594 g/cm3\n"
          },137.327
        };int_atom[57]={
        {
         "Name: Lanthanum- La \n\n",

              "Origin of Name: The Greek 'lanthanein \n\n",

              "Atomic Number               57\n",
              "Electronic Configuration    [Xe] 5d1 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               138.90547 g\n",
              "Atomic Radius               169 pm\n",
              "Electronegativity           1.10 (Pauling Scale)\n",
              "Melting Point               1193 K\n",
              "Boiling Point               3737 K\n",
              "Density                     6.145 g/cm3\n"
          },138.90547
        };str_atom["La"]={
        {
         "Name: Lanthanum- La \n\n",

              "Origin of Name: The Greek 'lanthanein \n\n",

              "Atomic Number               57\n",
              "Electronic Configuration    [Xe] 5d1 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               138.90547 g\n",
              "Atomic Radius               169 pm\n",
              "Electronegativity           1.10 (Pauling Scale)\n",
              "Melting Point               1193 K\n",
              "Boiling Point               3737 K\n",
              "Density                     6.145 g/cm3\n"
          },138.90547
        };int_atom[58]={
        {
         "Name: Cerium- Ce \n\n",

              "Origin of Name: Ceres, the Roman God of agriculture\n\n",

              "Atomic Number               58\n",
              "Electronic Configuration    [Xe]4f1 5d1 6s2\n",
              "Group                       4\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               140.90765 g\n",
              "Atomic Radius               131 pm\n",
              "Electronegativity           1.12 (Pauling Scale)\n",
              "Melting Point               1068 K\n",
              "Boiling Point               3716 K\n",
              "Density                     6.77 g/cm3\n"
          },140.90765
        }; str_atom["Ce"]={
        {
         "Name: Cerium- Ce \n\n",

              "Origin of Name: Ceres, the Roman God of agriculture\n\n",

              "Atomic Number               58\n",
              "Electronic Configuration    [Xe]4f1 5d1 6s2\n",
              "Group                       4\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               140.90765 g\n",
              "Atomic Radius               131 pm\n",
              "Electronegativity           1.12 (Pauling Scale)\n",
              "Melting Point               1068 K\n",
              "Boiling Point               3716 K\n",
              "Density                     6.77 g/cm3\n"
          },140.90765
        };int_atom[59]={
        {
         "Name: Praseodymium- Pr \n\n",

              "Origin of Name: the Greek 'prasios didymos'\n\n",

              "Atomic Number               59\n",
              "Electronic Configuration    [Xe]4f3  6s2\n",
              "Group                       5\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               140.90765 g\n",
              "Atomic Radius               247 pm\n",
              "Electronegativity           1.13 (Pauling Scale)\n",
              "Melting Point               1208 K\n",
              "Boiling Point               3793 K\n",
              "Density                     6.773 g/cm3\n"
          },140.90765
        };str_atom["Pr"]={
             {
         "Name: Praseodymium- Pr \n\n",

              "Origin of Name: the Greek 'prasios didymos'\n\n",

              "Atomic Number               59\n",
              "Electronic Configuration    [Xe]4f3  6s2\n",
              "Group                       5\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               140.90765 g\n",
              "Atomic Radius               247 pm\n",
              "Electronegativity           1.13 (Pauling Scale)\n",
              "Melting Point               1208 K\n",
              "Boiling Point               3793 K\n",
              "Density                     6.773 g/cm3\n"
          },140.90765
        };

    int_atom[60]={
            {
              "Name:            Neodymium- Nd\n\n",

              "Origin of Name: the Greek 'neos didymos' meaning new twin\n\n",

              "Atomic Number               60\n",
              "Electronic Configuration    [Xe] 4f4 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               144.242 g\n",
              "Atomic Radius               206 pm\n",
              "Electronegativity           1.14 (Pauling Scale)\n",
              "Melting Point               1297 K\n",
              "Boiling Point               3347 K\n",
              "Density                     7.007 g/cm3\n"
            },144.242
        };

    str_atom["Nd"]={
            {
              "Name:            Neodymium- Nd\n\n",

              "Origin of Name: the Greek 'neos didymos' meaning new twin\n\n",

              "Atomic Number               60\n",
              "Electronic Configuration    [Xe] 4f4 6s2\n",
              "Group                       1\n",
              "Period                      3\n",
              "Block                       s\n",
              "Atomic Weight               144.242 g\n",
              "Atomic Radius               206 pm\n",
              "Electronegativity           1.14 (Pauling Scale)\n",
              "Melting Point               1297 K\n",
              "Boiling Point               3347 K\n",
              "Density                     7.007 g/cm3\n"
            },144.242
        };

    int_atom[61]={
            {
              "Name:            Promethium- Pm\n\n",

              "Origin of Name: Prometheus of Greek mythology who stole fire from the Gods and gave it to humans\n\n",

              "Atomic Number               61\n",
              "Electronic Configuration    [Xe] 4f5 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               145 g\n",
              "Atomic Radius               205 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1315 K\n",
              "Boiling Point               3273 K\n",
              "Density                     7.26 g/cm3\n"
            },145
        };

    str_atom["Pm"]={
            {
              "Name:            Promethium- Pm\n\n",

              "Origin of Name: Prometheus of Greek mythology who stole fire from the Gods and gave it to humans\n\n",

              "Atomic Number               61\n",
              "Electronic Configuration    [Xe] 4f5 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               145 g\n",
              "Atomic Radius               205 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1315 K\n",
              "Boiling Point               3273 K\n",
              "Density                     7.26 g/cm3\n"
            },145
        };

    int_atom[62]={
            {
              "Name:            Samarium- Sm\n\n",

              "Origin of Name: Samarskite, the name of the mineral from which it was first isolated\n\n",

              "Atomic Number               62\n",
              "Electronic Configuration    [Xe] 4f6 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               150.36 g\n",
              "Atomic Radius               238 pm\n",
              "Electronegativity           1.17 (Pauling Scale)\n",
              "Melting Point               1345 K\n",
              "Boiling Point               2067 K\n",
              "Density                     7.52 g/cm3\n"
            },150.36
        };

    str_atom["Sm"]={
            {
              "Name:            Samarium- Sm\n\n",

              "Origin of Name: Samarskite, the name of the mineral from which it was first isolated\n\n",

              "Atomic Number               62\n",
              "Electronic Configuration    [Xe] 4f6 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               150.36 g\n",
              "Atomic Radius               238 pm\n",
              "Electronegativity           1.17 (Pauling Scale)\n",
              "Melting Point               1345 K\n",
              "Boiling Point               2067 K\n",
              "Density                     7.52 g/cm3\n"
            },150.36
        };

    int_atom[63]={
            {
              "Name:            Europium- Eu\n\n",

              "Origin of Name: Europe\n\n",

              "Atomic Number               63\n",
              "Electronic Configuration    [Xe] 4f7 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               151.964 g\n",
              "Atomic Radius               231 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1099 K\n",
              "Boiling Point               1802 K\n",
              "Density                     5.243 g/cm3\n"
            },151.964
        };

    str_atom["Eu"]={
            {
              "Name:            Europium- Eu\n\n",

              "Origin of Name: Europe\n\n",

              "Atomic Number               63\n",
              "Electronic Configuration    [Xe] 4f7 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               151.964 g\n",
              "Atomic Radius               231 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1099 K\n",
              "Boiling Point               1802 K\n",
              "Density                     5.243 g/cm3\n"
            },151.964
        };

    int_atom[64]={
            {
              "Name:            Gadolinium- Gd\n\n",

              "Origin of Name: Johan Gadolin, chemist, physicist and mineralogist\n\n",

              "Atomic Number               64\n",
              "Electronic Configuration    [Xe] 4f7 5d1 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               157.25 g\n",
              "Atomic Radius               233 pm\n",
              "Electronegativity           1.20 (Pauling Scale)\n",
              "Melting Point               1585 K\n",
              "Boiling Point               3546 K\n",
              "Density                     7.895 g/cm3\n"
            },157.25
        };

    str_atom["Gd"]={
            {
              "Name:            Gadolinium- Gd\n\n",

              "Origin of Name: Johan Gadolin, chemist, physicist and mineralogist\n\n",

              "Atomic Number               64\n",
              "Electronic Configuration    [Xe] 4f7 5d1 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               157.25 g\n",
              "Atomic Radius               233 pm\n",
              "Electronegativity           1.20 (Pauling Scale)\n",
              "Melting Point               1585 K\n",
              "Boiling Point               3546 K\n",
              "Density                     7.895 g/cm3\n"
            },157.25
        };

    int_atom[65]={
            {
              "Name:            Terbium- Tb\n\n",

              "Origin of Name: Ytterby\n\n",

              "Atomic Number               65\n",
              "Electronic Configuration    [Xe] 4f9 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               158.92535 g\n",
              "Atomic Radius               225 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1629 K\n",
              "Boiling Point               3503 K\n",
              "Density                     8.229 g/cm3\n"
            },158.92535
        };

    str_atom["Tb"]={
            {
              "Name:            Terbium- Tb\n\n",

              "Origin of Name: Ytterby\n\n",

              "Atomic Number               65\n",
              "Electronic Configuration    [Xe] 4f9 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               158.92535 g\n",
              "Atomic Radius               225 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1629 K\n",
              "Boiling Point               3503 K\n",
              "Density                     8.229 g/cm3\n"
            },158.92535
        };

    int_atom[66]={
            {
              "Name:            Dysprosium- Dy\n\n",

              "Origin of Name: the Greek 'dysprositos', meaning hard to get\n\n",

              "Atomic Number               66\n",
              "Electronic Configuration    [Xe] 4f10 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               162.500 g\n",
              "Atomic Radius               228 pm\n",
              "Electronegativity           1.22 (Pauling Scale)\n",
              "Melting Point               1680 K\n",
              "Boiling Point               2840 K\n",
              "Density                     8.55 g/cm3\n"
            },162.500
        };

    str_atom["Dy"]={
            {
              "Name:            Dysprosium- Dy\n\n",

              "Origin of Name: the Greek 'dysprositos', meaning hard to get\n\n",

              "Atomic Number               66\n",
              "Electronic Configuration    [Xe] 4f10 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               162.500 g\n",
              "Atomic Radius               228 pm\n",
              "Electronegativity           1.22 (Pauling Scale)\n",
              "Melting Point               1680 K\n",
              "Boiling Point               2840 K\n",
              "Density                     8.55 g/cm3\n"
            },162.500
        };

    int_atom[67]={
            {
              "Name:            Holmium- Ho\n\n",

              "Origin of Name: Stockholm, Sweden\n\n",

              "Atomic Number               67\n",
              "Electronic Configuration    [Xe] 4f11 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               164.93032 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.23 (Pauling Scale)\n",
              "Melting Point               1734 K\n",
              "Boiling Point               2993 K\n",
              "Density                     8.795 g/cm3\n"
            },160.93032
        };

    str_atom["Ho"]={
            {
              "Name:            Holmium- Ho\n\n",

              "Origin of Name: Stockholm, Sweden\n\n",

              "Atomic Number               67\n",
              "Electronic Configuration    [Xe] 4f11 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               164.93032 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.23 (Pauling Scale)\n",
              "Melting Point               1734 K\n",
              "Boiling Point               2993 K\n",
              "Density                     8.795 g/cm3\n"
            },160.93032
        };

    int_atom[68]={
            {
              "Name:            Erbium- Er\n\n",

              "Origin of Name: Ytterby, Sweden\n\n",

              "Atomic Number               68\n",
              "Electronic Configuration    [Xe] 4f12 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               167.259 g\n",
              "Atomic Radius               226 pm\n",
              "Electronegativity           1.24 (Pauling Scale)\n",
              "Melting Point               1802 K\n",
              "Boiling Point               3141 K\n",
              "Density                     9.066 g/cm3\n"
            },167.259
        };

    str_atom["Er"]={
            {
              "Name:            Erbium- Er\n\n",

              "Origin of Name: Ytterby, Sweden\n\n",

              "Atomic Number               68\n",
              "Electronic Configuration    [Xe] 4f12 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               167.259 g\n",
              "Atomic Radius               226 pm\n",
              "Electronegativity           1.24 (Pauling Scale)\n",
              "Melting Point               1802 K\n",
              "Boiling Point               3141 K\n",
              "Density                     9.066 g/cm3\n"
            },167.259
        };

    int_atom[69]={
            {
              "Name:            Thulium- Tm\n\n",

              "Origin of Name: Thule, the ancient name for Scandinavia\n\n",

              "Atomic Number               69\n",
              "Electronic Configuration    [Xe] 4f13 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               168.93421 g\n",
              "Atomic Radius               222 pm\n",
              "Electronegativity           1.25 (Pauling Scale)\n",
              "Melting Point               1818 K\n",
              "Boiling Point               2223 K\n",
              "Density                     9.321 g/cm3\n"
            },168.93421
        };

    str_atom["Tm"]={
            {
              "Name:            Thulium- Tm\n\n",

              "Origin of Name: Thule, the ancient name for Scandinavia\n\n",

              "Atomic Number               69\n",
              "Electronic Configuration    [Xe] 4f13 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               168.93421 g\n",
              "Atomic Radius               222 pm\n",
              "Electronegativity           1.25 (Pauling Scale)\n",
              "Melting Point               1818 K\n",
              "Boiling Point               2223 K\n",
              "Density                     9.321 g/cm3\n"
            },168.93421
        };

    int_atom[70]={
            {
              "Name:            Ytterbium- Yb\n\n",

              "Origin of Name: Ytterby, Sweden\n\n",

              "Atomic Number               70\n",
              "Electronic Configuration    [Xe] 4f14 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               173.054 g\n",
              "Atomic Radius               222 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1097 K\n",
              "Boiling Point               1469 K\n",
              "Density                     6.965 g/cm3\n"
            },173.054
        };

    str_atom["Yb"]={
            {
              "Name:            Ytterbium- Yb\n\n",

              "Origin of Name: Ytterby, Sweden\n\n",

              "Atomic Number               70\n",
              "Electronic Configuration    [Xe] 4f14 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               173.054 g\n",
              "Atomic Radius               222 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               1097 K\n",
              "Boiling Point               1469 K\n",
              "Density                     6.965 g/cm3\n"
            },173.054
        };

    int_atom[71]={
            {
              "Name:            Lutetium- Lu\n\n",

              "Origin of Name: Paris, France\n\n",

              "Atomic Number               71\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               174.9668 g\n",
              "Atomic Radius               217 pm\n",
              "Electronegativity           1.27 (Pauling Scale)\n",
              "Melting Point               1925 K\n",
              "Boiling Point               3675 K\n",
              "Density                     9.84 g/cm3\n"
            },174.9668
        };

    str_atom["Lu"]={
            {
              "Name:            Lutetium- Lu\n\n",

              "Origin of Name: Paris, France\n\n",

              "Atomic Number               71\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2\n",
              "Group                       3\n",
              "Period                      6\n",
              "Block                       f\n",
              "Atomic Weight               174.9668 g\n",
              "Atomic Radius               217 pm\n",
              "Electronegativity           1.27 (Pauling Scale)\n",
              "Melting Point               1925 K\n",
              "Boiling Point               3675 K\n",
              "Density                     9.84 g/cm3\n"
            },174.9668
        };

    int_atom[72]={
            {
              "Name:            Hafnium- Hf\n\n",

              "Origin of Name: Copenhagen, Denmark\n\n",

              "Atomic Number               72\n",
              "Electronic Configuration    [Xe] 4f14 5d2 6s2\n",
              "Group                       4\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               178.49 g\n",
              "Atomic Radius               208 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               2506 K\n",
              "Boiling Point               4876 K\n",
              "Density                     13.31 g/cm3\n"
            },178.49
        };

    str_atom["Hf"]={
            {
              "Name:            Hafnium- Hf\n\n",

              "Origin of Name: Copenhagen, Denmark\n\n",

              "Atomic Number               72\n",
              "Electronic Configuration    [Xe] 4f14 5d2 6s2\n",
              "Group                       4\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               178.49 g\n",
              "Atomic Radius               208 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               2506 K\n",
              "Boiling Point               4876 K\n",
              "Density                     13.31 g/cm3\n"
            },178.49
        };

    int_atom[73]={
            {
              "Name:            Tantalum- Ta\n\n",

              "Origin of Name: King Tantalus, father of Niobe from Greek mythology\n\n",

              "Atomic Number               73\n",
              "Electronic Configuration    [Xe] 4f14 5d3 6s2\n",
              "Group                       5\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               180.94788 g\n",
              "Atomic Radius               200 pm\n",
              "Electronegativity           1.5 (Pauling Scale)\n",
              "Melting Point               3290 K\n",
              "Boiling Point               5731 K\n",
              "Density                     16.654 g/cm3\n"
            },180.94788
        };

    str_atom["Ta"]={
            {
              "Name:            Tantalum- Ta\n\n",

              "Origin of Name: King Tantalus, father of Niobe from Greek mythology\n\n",

              "Atomic Number               73\n",
              "Electronic Configuration    [Xe] 4f14 5d3 6s2\n",
              "Group                       5\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               180.94788 g\n",
              "Atomic Radius               200 pm\n",
              "Electronegativity           1.5 (Pauling Scale)\n",
              "Melting Point               3290 K\n",
              "Boiling Point               5731 K\n",
              "Density                     16.654 g/cm3\n"
            },180.94788
        };

    int_atom[74]={
            {
              "Name:            Tungsten- W\n\n",

              "Origin of Name: the Swedish 'tung sten' meaning heavy stone\n\n",

              "Atomic Number               74\n",
              "Electronic Configuration    [Xe] 4f14 5d4 6s2\n",
              "Group                       6\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               183.84 g\n",
              "Atomic Radius               193 pm\n",
              "Electronegativity           2.36 (Pauling Scale)\n",
              "Melting Point               3695 K\n",
              "Boiling Point               5828 K\n",
              "Density                     19.25 g/cm3\n"
            },183.84
        };

    str_atom["W"]={
            {
              "Name:            Tungsten- W\n\n",

              "Origin of Name: the Swedish 'tung sten' meaning heavy stone\n\n",

              "Atomic Number               74\n",
              "Electronic Configuration    [Xe] 4f14 5d4 6s2\n",
              "Group                       6\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               183.84 g\n",
              "Atomic Radius               193 pm\n",
              "Electronegativity           2.36 (Pauling Scale)\n",
              "Melting Point               3695 K\n",
              "Boiling Point               5828 K\n",
              "Density                     19.25 g/cm3\n"
            },183.84
        };

    int_atom[75]={
            {
              "Name:            Rhenium- Re\n\n",

              "Origin of Name: Rhine, a river\n\n",

              "Atomic Number               75\n",
              "Electronic Configuration    [Xe] 4f14 5d5 6s2\n",
              "Group                       7\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               186.207 g\n",
              "Atomic Radius               188 pm\n",
              "Electronegativity           1.9 (Pauling Scale)\n",
              "Melting Point               3459 K\n",
              "Boiling Point               5869 K\n",
              "Density                     21.02 g/cm3\n"
            },186.207
        };

    str_atom["Re"]={
            {
              "Name:            Rhenium- Re\n\n",

              "Origin of Name: Rhine, a river\n\n",

              "Atomic Number               75\n",
              "Electronic Configuration    [Xe] 4f14 5d5 6s2\n",
              "Group                       7\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               186.207 g\n",
              "Atomic Radius               188 pm\n",
              "Electronegativity           1.9 (Pauling Scale)\n",
              "Melting Point               3459 K\n",
              "Boiling Point               5869 K\n",
              "Density                     21.02 g/cm3\n"
            },186.207
        };

    int_atom[76]={
            {
              "Name:            Osmium- Os\n\n",

              "Origin of Name: the Greek 'osme', meaning smell\n\n",

              "Atomic Number               76\n",
              "Electronic Configuration    [Xe] 4f14 5d6 6s2\n",
              "Group                       8\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               190.23 g\n",
              "Atomic Radius               185 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               3306 K\n",
              "Boiling Point               5285 K\n",
              "Density                     22.61 g/cm3\n"
            },190.23
        };

    str_atom["Os"]={
            {
              "Name:            Osmium- Os\n\n",

              "Origin of Name: the Greek 'osme', meaning smell\n\n",

              "Atomic Number               76\n",
              "Electronic Configuration    [Xe] 4f14 5d6 6s2\n",
              "Group                       8\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               190.23 g\n",
              "Atomic Radius               185 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               3306 K\n",
              "Boiling Point               5285 K\n",
              "Density                     22.61 g/cm3\n"
            },190.23
        };

    int_atom[77]={
            {
              "Name:            Iridium- Ir\n\n",

              "Origin of Name: Iris, the Greek goddess of the rainbow\n\n",

              "Atomic Number               77\n",
              "Electronic Configuration    [Xe] 4f14 5d7 6s2\n",
              "Group                       9\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               192.217 g\n",
              "Atomic Radius               180 pm\n",
              "Electronegativity           2.20 (Pauling Scale)\n",
              "Melting Point               2719 K\n",
              "Boiling Point               4701 K\n",
              "Density                     22.56 g/cm3\n"
            },192.217
        };

    str_atom["Ir"]={
            {
              "Name:            Iridium- Ir\n\n",

              "Origin of Name: Iris, the Greek goddess of the rainbow\n\n",

              "Atomic Number               77\n",
              "Electronic Configuration    [Xe] 4f14 5d7 6s2\n",
              "Group                       9\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               192.217 g\n",
              "Atomic Radius               180 pm\n",
              "Electronegativity           2.20 (Pauling Scale)\n",
              "Melting Point               2719 K\n",
              "Boiling Point               4701 K\n",
              "Density                     22.56 g/cm3\n"
            },192.217
        };

    int_atom[78]={
            {
              "Name:            Platinum- Pt\n\n",

              "Origin of Name: the Spanish 'platina', meaning little silver\n\n",

              "Atomic Number               78\n",
              "Electronic Configuration    [Xe] 4f14 5d9 6s1\n",
              "Group                       10\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               195.084 g\n",
              "Atomic Radius               177 pm\n",
              "Electronegativity           2.28 (Pauling Scale)\n",
              "Melting Point               2041.4 K\n",
              "Boiling Point               4098 K\n",
              "Density                     21.46 g/cm3\n"
            },195.084
        };

    str_atom["Pt"]={
            {
              "Name:            Platinum- Pt\n\n",

              "Origin of Name: the Spanish 'platina', meaning little silver\n\n",

              "Atomic Number               78\n",
              "Electronic Configuration    [Xe] 4f14 5d9 6s1\n",
              "Group                       10\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               195.084 g\n",
              "Atomic Radius               177 pm\n",
              "Electronegativity           2.28 (Pauling Scale)\n",
              "Melting Point               2041.4 K\n",
              "Boiling Point               4098 K\n",
              "Density                     21.46 g/cm3\n"
            },195.084
        };

    int_atom[79]={
            {
              "Name:            Gold- Au\n\n",

              "Origin of Name: the Anglo-Saxon word gold\n\n",

              "Atomic Number               79\n",
              "Electronic Configuration    [Xe] 4f14 5d10 6s1\n",
              "Group                       11\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               196.966569 g\n",
              "Atomic Radius               174 pm\n",
              "Electronegativity           2.54 (Pauling Scale)\n",
              "Melting Point               1337.33 K\n",
              "Boiling Point               3129 K\n",
              "Density                     19.282 g/cm3\n"
            },196.966569
        };

    str_atom["Au"]={
            {
              "Name:            Gold- Au\n\n",

              "Origin of Name: the Anglo-Saxon word gold\n\n",

              "Atomic Number               79\n",
              "Electronic Configuration    [Xe] 4f14 5d10 6s1\n",
              "Group                       11\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               196.966569 g\n",
              "Atomic Radius               174 pm\n",
              "Electronegativity           2.54 (Pauling Scale)\n",
              "Melting Point               1337.33 K\n",
              "Boiling Point               3129 K\n",
              "Density                     19.282 g/cm3\n"
            },196.966569
        };

    int_atom[80]={
            {
              "Name:            Mercury- Hg\n\n",

              "Origin of Name: Mercury, the first planet in the Solar System\n\n",

              "Atomic Number               80\n",
              "Electronic Configuration    [Xe] 4f14 5d10 6s2\n",
              "Group                       12\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               200.592 g\n",
              "Atomic Radius               171 pm\n",
              "Electronegativity           2.00 (Pauling Scale)\n",
              "Melting Point               234.43 K\n",
              "Boiling Point               629.88 K\n",
              "Density                     13.5336 g/cm3\n"
            },200.592
        };

    str_atom["Hg"]={
            {
              "Name:            Mercury- Hg\n\n",

              "Origin of Name: Mercury, the first planet in the Solar System\n\n",

              "Atomic Number               80\n",
              "Electronic Configuration    [Xe] 4f14 5d10 6s2\n",
              "Group                       12\n",
              "Period                      6\n",
              "Block                       d\n",
              "Atomic Weight               200.592 g\n",
              "Atomic Radius               171 pm\n",
              "Electronegativity           2.00 (Pauling Scale)\n",
              "Melting Point               234.43 K\n",
              "Boiling Point               629.88 K\n",
              "Density                     13.5336 g/cm3\n"
            },200.592
        };

    int_atom[81]={
            {
              "Name:            Thallium- Tl\n\n",

              "Origin of Name: the Greek 'thallos', meaning a green twig\n\n",

              "Atomic Number               81\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p1\n",
              "Group                       13\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               204.38 g\n",
              "Atomic Radius               156 pm\n",
              "Electronegativity           1.62 (Pauling Scale)\n",
              "Melting Point               577 K\n",
              "Boiling Point               1746 K\n",
              "Density                     11.85 g/cm3\n"
            },204.38
        };

    str_atom["Tl"]={
            {
              "Name:            Thallium- Tl\n\n",

              "Origin of Name: the Greek 'thallos', meaning a green twig\n\n",

              "Atomic Number               81\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p1\n",
              "Group                       13\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               204.38 g\n",
              "Atomic Radius               156 pm\n",
              "Electronegativity           1.62 (Pauling Scale)\n",
              "Melting Point               577 K\n",
              "Boiling Point               1746 K\n",
              "Density                     11.85 g/cm3\n"
            },204.38
        };

    int_atom[82]={
            {
              "Name:            Lead- Pb\n\n",

              "Origin of Name: the Anglo-Saxon lead\n\n",

              "Atomic Number               82\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p2\n",
              "Group                       14\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               207.2 g\n",
              "Atomic Radius               154 pm\n",
              "Electronegativity           2.33 (Pauling Scale)\n",
              "Melting Point               600.61 K\n",
              "Boiling Point               2022 K\n",
              "Density                     11.342 g/cm3\n"
            },207.2
        };

    str_atom["Pb"]={
            {
              "Name:            Lead- Pb\n\n",

              "Origin of Name: the Anglo-Saxon lead\n\n",

              "Atomic Number               82\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p2\n",
              "Group                       14\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               207.2 g\n",
              "Atomic Radius               154 pm\n",
              "Electronegativity           2.33 (Pauling Scale)\n",
              "Melting Point               600.61 K\n",
              "Boiling Point               2022 K\n",
              "Density                     11.342 g/cm3\n"
            },207.2
        };

    int_atom[83]={
            {
              "Name:            Bismuth- Bi\n\n",

              "Origin of Name: the German 'Bisemutum' a corruption of 'Weisse Masse' meaning white mass\n\n",

              "Atomic Number               83\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p3\n",
              "Group                       15\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               208.98040 g\n",
              "Atomic Radius               143 pm\n",
              "Electronegativity           2.02 (Pauling Scale)\n",
              "Melting Point               544.7 K\n",
              "Boiling Point               1837 K\n",
              "Density                     9.807 g/cm3\n"
            },208.98040
        };

    str_atom["Bi"]={
            {
              "Name:            Bismuth- Bi\n\n",

              "Origin of Name: the German 'Bisemutum' a corruption of 'Weisse Masse' meaning white mass\n\n",

              "Atomic Number               83\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p3\n",
              "Group                       15\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               208.98040 g\n",
              "Atomic Radius               143 pm\n",
              "Electronegativity           2.02 (Pauling Scale)\n",
              "Melting Point               544.7 K\n",
              "Boiling Point               1837 K\n",
              "Density                     9.807 g/cm3\n"
            },208.98040
        };

    int_atom[84]={
            {
              "Name:            Polonium- Po\n\n",

              "Origin of Name: Poland, the native country of Marie Curie, who first isolated the element\n\n",

              "Atomic Number               84\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p4\n",
              "Group                       16\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               209 g\n",
              "Atomic Radius               135 pm\n",
              "Electronegativity           2.0 (Pauling Scale)\n",
              "Melting Point               527 K\n",
              "Boiling Point               1235 K\n",
              "Density                     9.32 g/cm3\n"
            },209
        };

    str_atom["Po"]={
            {
              "Name:            Polonium- Po\n\n",

              "Origin of Name: Poland, the native country of Marie Curie, who first isolated the element\n\n",

              "Atomic Number               84\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p4\n",
              "Group                       16\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               209 g\n",
              "Atomic Radius               135 pm\n",
              "Electronegativity           2.0 (Pauling Scale)\n",
              "Melting Point               527 K\n",
              "Boiling Point               1235 K\n",
              "Density                     9.32 g/cm3\n"
            },209
        };

    int_atom[85]={
            {
              "Name:            Astatine- At\n\n",

              "Origin of Name: the Greek 'astatos', meaning unstable\n\n",

              "Atomic Number               85\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p5\n",
              "Group                       17\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               210 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               575 K\n",
              "Boiling Point               610 K\n",
              "Density                     7 g/cm3\n"
            },210
        };

    str_atom["At"]={
            {
              "Name:            Astatine- At\n\n",

              "Origin of Name: the Greek 'astatos', meaning unstable\n\n",

              "Atomic Number               85\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p5\n",
              "Group                       17\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               210 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           2.2 (Pauling Scale)\n",
              "Melting Point               575 K\n",
              "Boiling Point               610 K\n",
              "Density                     7 g/cm3\n"
            },210
        };


    int_atom[86]={
            {
              "Name:            Radon- Rn\n\n",

              "Origin of Name: From radium, as it was first detected as an emission from radium during radioactive decay\n\n",

              "Atomic Number               86\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p6\n",
              "Group                       18\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               222 g\n",
              "Atomic Radius               120 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               202 K\n",
              "Boiling Point               211.3 K\n",
              "Density                     0.00973 g/cm3\n"
            },222
        };

    str_atom["Rn"]={
            {
              "Name:            Radon- Rn\n\n",

              "Origin of Name: From radium, as it was first detected as an emission from radium during radioactive decay\n\n",

              "Atomic Number               86\n",
              "Electronic Configuration    [Xe] 4f14 5d1 6s2 6p6\n",
              "Group                       18\n",
              "Period                      6\n",
              "Block                       p\n",
              "Atomic Weight               222 g\n",
              "Atomic Radius               120 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               202 K\n",
              "Boiling Point               211.3 K\n",
              "Density                     0.00973 g/cm3\n"
            },222
        };

    int_atom[87]={
            {
              "Name:            Francium- Fr\n\n",

              "Origin of Name: France, where it was first discovered\n\n",

              "Atomic Number               87\n",
              "Electronic Configuration    [Rn] 7s1\n",
              "Group                       1\n",
              "Period                      7\n",
              "Block                       s\n",
              "Atomic Weight               223 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0.7 (Pauling Scale)\n",
              "Melting Point               300 K\n",
              "Boiling Point               950 K\n",
              "Density                     1.87 g/cm3\n"
            },223
        };

    str_atom["Fr"]={
            {
              "Name:            Francium- Fr\n\n",

              "Origin of Name: France, where it was first discovered\n\n",

              "Atomic Number               87\n",
              "Electronic Configuration    [Rn] 7s1\n",
              "Group                       1\n",
              "Period                      7\n",
              "Block                       s\n",
              "Atomic Weight               223 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0.7 (Pauling Scale)\n",
              "Melting Point               300 K\n",
              "Boiling Point               950 K\n",
              "Density                     1.87 g/cm3\n"
            },223
        };

    int_atom[88]={
            {
              "Name:            Radium- Ra\n\n",

              "Origin of Name: the Latin 'radius', meaning ray\n\n",

              "Atomic Number               88\n",
              "Electronic Configuration    [Rn] 7s2\n",
              "Group                       2\n",
              "Period                      7\n",
              "Block                       s\n",
              "Atomic Weight               226 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0.9 (Pauling Scale)\n",
              "Melting Point               973 K\n",
              "Boiling Point               2010 K\n",
              "Density                     5.5 g/cm3\n"
            },226
        };

    str_atom["Ra"]={
            {
              "Name:            Radium- Ra\n\n",

              "Origin of Name: the Latin 'radius', meaning ray\n\n",

              "Atomic Number               88\n",
              "Electronic Configuration    [Rn] 7s2\n",
              "Group                       2\n",
              "Period                      7\n",
              "Block                       s\n",
              "Atomic Weight               226 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0.9 (Pauling Scale)\n",
              "Melting Point               973 K\n",
              "Boiling Point               2010 K\n",
              "Density                     5.5 g/cm3\n"
            },226
        };

    int_atom[89]={
            {
              "Name:            Actinium- Ac\n\n",

              "Origin of Name: the Greek 'actinos', meaning a ray\n\n",

              "Atomic Number               89\n",
              "Electronic Configuration    [Rn] 6d1 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               227 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.1 (Pauling Scale)\n",
              "Melting Point               1323 K\n",
              "Boiling Point               3471 K\n",
              "Density                     10.07 g/cm3\n"
            },227
        };

    str_atom["Ac"]={
            {
              "Name:            Actinium- Ac\n\n",

              "Origin of Name: the Greek 'actinos', meaning a ray\n\n",

              "Atomic Number               89\n",
              "Electronic Configuration    [Rn] 6d1 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               227 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.1 (Pauling Scale)\n",
              "Melting Point               1323 K\n",
              "Boiling Point               3471 K\n",
              "Density                     10.07 g/cm3\n"
            },227
        };

    int_atom[90]={
            {
              "Name:            Thorium- Th\n\n",

              "Origin of Name: Thor, the Scandinavian god of thunder\n\n",

              "Atomic Number               90\n",
              "Electronic Configuration    [Rn] 6d2 7s2\n",
              "Group                       4\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               232.03806 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               2115 K\n",
              "Boiling Point               5061 K\n",
              "Density                     11.72 g/cm3\n"
            },232.03806
        };

    str_atom["Th"]={
            {
              "Name:            Thorium- Th\n\n",

              "Origin of Name: Thor, the Scandinavian god of thunder\n\n",

              "Atomic Number               90\n",
              "Electronic Configuration    [Rn] 6d2 7s2\n",
              "Group                       4\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               232.03806 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               2115 K\n",
              "Boiling Point               5061 K\n",
              "Density                     11.72 g/cm3\n"
            },232.03806
        };

    int_atom[91]={
            {
              "Name:            Protactinium- Pa\n\n",

              "Origin of Name: the Greek 'protos', as a prefix to the element actinium\n\n",

              "Atomic Number               91\n",
              "Electronic Configuration    [Rn] 5f2 6d1 7s2\n",
              "Group                       5\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               231.03588 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.5 (Pauling Scale)\n",
              "Melting Point               1841 K\n",
              "Boiling Point               4300 K\n",
              "Density                     15.37 g/cm3\n"
            },231.03588
        };

    str_atom["Pa"]={
            {
              "Name:            Protactinium- Pa\n\n",

              "Origin of Name: the Greek 'protos', as a prefix to the element actinium\n\n",

              "Atomic Number               91\n",
              "Electronic Configuration    [Rn] 5f2 6d1 7s2\n",
              "Group                       5\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               231.03588 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.5 (Pauling Scale)\n",
              "Melting Point               1841 K\n",
              "Boiling Point               4300 K\n",
              "Density                     15.37 g/cm3\n"
            },231.03588
        };

    int_atom[92]={
            {
              "Name:            Uranium- U\n\n",

              "Origin of Name: Uranus, the seventh planet in the Solar System\n\n",

              "Atomic Number               92\n",
              "Electronic Configuration    [Rn] 5f3 6d1 7s2\n",
              "Group                       6\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               238.02891 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.38 (Pauling Scale)\n",
              "Melting Point               1405.3 K\n",
              "Boiling Point               4404 K\n",
              "Density                     18.95 g/cm3\n"
            },238.02891
        };

    str_atom["U"]={
            {
              "Name:            Uranium- U\n\n",

              "Origin of Name: Uranus, the seventh planet in the Solar System\n\n",

              "Atomic Number               92\n",
              "Electronic Configuration    [Rn] 5f3 6d1 7s2\n",
              "Group                       6\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               238.02891 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.38 (Pauling Scale)\n",
              "Melting Point               1405.3 K\n",
              "Boiling Point               4404 K\n",
              "Density                     18.95 g/cm3\n"
            },238.02891
        };

    int_atom[93]={
            {
              "Name:            Neptunium- Np\n\n",

              "Origin of Name: Neptune, the eighth planet in the Solar System\n\n",

              "Atomic Number               93\n",
              "Electronic Configuration    [Rn] 5f4 6d1 7s2\n",
              "Group                       7\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               237 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.36 (Pauling Scale)\n",
              "Melting Point               917 K\n",
              "Boiling Point               4273 K\n",
              "Density                     20.45 g/cm3\n"
            },237
        };

    str_atom["Np"]={
            {
              "Name:            Neptunium- Np\n\n",

              "Origin of Name: Neptune, the eighth planet in the Solar System\n\n",

              "Atomic Number               93\n",
              "Electronic Configuration    [Rn] 5f4 6d1 7s2\n",
              "Group                       7\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               237 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.36 (Pauling Scale)\n",
              "Melting Point               917 K\n",
              "Boiling Point               4273 K\n",
              "Density                     20.45 g/cm3\n"
            },237
        };

    int_atom[94]={
            {
              "Name:            Plutonium- Pu\n\n",

              "Origin of Name: Pluto, a dwarf planet in the Solar System\n\n",

              "Atomic Number               94\n",
              "Electronic Configuration    [Rn] 5f6 7s2\n",
              "Group                       8\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               244 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.28 (Pauling Scale)\n",
              "Melting Point               912.5 K\n",
              "Boiling Point               3501 K\n",
              "Density                     19.84 g/cm3\n"
            },244
        };

    str_atom["Pu"]={
            {
              "Name:            Plutonium- Pu\n\n",

              "Origin of Name: Pluto, a dwarf planet in the Solar System\n\n",

              "Atomic Number               94\n",
              "Electronic Configuration    [Rn] 5f6 7s2\n",
              "Group                       8\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               244 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.28 (Pauling Scale)\n",
              "Melting Point               912.5 K\n",
              "Boiling Point               3501 K\n",
              "Density                     19.84 g/cm3\n"
            },244
        };

    int_atom[95]={
            {
              "Name:            Americium- Am\n\n",

              "Origin of Name: Americas, the continent where the element was first synthesized\n\n",

              "Atomic Number               95\n",
              "Electronic Configuration    [Rn] 5f7 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               243 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1449 K\n",
              "Boiling Point               2880 K\n",
              "Density                     13.69 g/cm3\n"
            },243
        };

    str_atom["Am"]={
            {
              "Name:            Americium- Am\n\n",

              "Origin of Name: Americas, the continent where the element was first synthesized\n\n",

              "Atomic Number               95\n",
              "Electronic Configuration    [Rn] 5f7 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               243 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1449 K\n",
              "Boiling Point               2880 K\n",
              "Density                     13.69 g/cm3\n"
            },243
        };

    int_atom[96]={
            {
              "Name:            Curium- Cm\n\n",

              "Origin of Name: Pierre Curie, a physicist, and Marie Curie, a physicist and chemist\n\n",

              "Atomic Number               96\n",
              "Electronic Configuration    [Rn] 5f7 6d1 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               247 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1613 K\n",
              "Boiling Point               3383 K\n",
              "Density                     13.51 g/cm3\n"
            },247
        };

    str_atom["Cm"]={
            {
              "Name:            Curium- Cm\n\n",

              "Origin of Name: Pierre Curie, a physicist, and Marie Curie, a physicist and chemist\n\n",

              "Atomic Number               96\n",
              "Electronic Configuration    [Rn] 5f7 6d1 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               247 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1613 K\n",
              "Boiling Point               3383 K\n",
              "Density                     13.51 g/cm3\n"
            },247
        };

    int_atom[97]={
            {
              "Name:            Berkelium- Bk\n\n",

              "Origin of Name: Berkeley, California, USA, where the element was first synthesized\n\n",

              "Atomic Number               97\n",
              "Electronic Configuration    [Rn] 5f9 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               247 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1259 K\n",
              "Boiling Point               2900 K\n",
              "Density                     14.79 g/cm3\n"
            },247
        };

    str_atom["Bk"]={
            {
              "Name:            Berkelium- Bk\n\n",

              "Origin of Name: Berkeley, California, USA, where the element was first synthesized\n\n",

              "Atomic Number               97\n",
              "Electronic Configuration    [Rn] 5f9 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               247 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1259 K\n",
              "Boiling Point               2900 K\n",
              "Density                     14.79 g/cm3\n"
            },247
        };

    int_atom[98]={
            {
              "Name:            Californium- Cf\n\n",

              "Origin of Name: State of California, USA, where the element was first synthesized\n\n",

              "Atomic Number               98\n",
              "Electronic Configuration    [Rn] 5f10 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               251 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1173 K\n",
              "Boiling Point               1743 K\n",
              "Density                     15.1 g/cm3\n"
            },251
        };

    str_atom["Cf"]={
            {
              "Name:            Californium- Cf\n\n",

              "Origin of Name: State of California, USA, where the element was first synthesized\n\n",

              "Atomic Number               98\n",
              "Electronic Configuration    [Rn] 5f10 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               251 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1173 K\n",
              "Boiling Point               1743 K\n",
              "Density                     15.1 g/cm3\n"
            },251
        };

    int_atom[99]={
            {
              "Name:            Einsteinium- Es\n\n",

              "Origin of Name: Albert Einstein, physicist\n\n",

              "Atomic Number               99\n",
              "Electronic Configuration    [Rn] 5f11 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               252 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1133 K\n",
              "Boiling Point               1269 K\n",
              "Density                     8.84 g/cm3\n"
            },252
        };

    str_atom["Es"]={
            {
              "Name:            Einsteinium- Es\n\n",

              "Origin of Name: Albert Einstein, physicist\n\n",

              "Atomic Number               99\n",
              "Electronic Configuration    [Rn] 5f11 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               252 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1133 K\n",
              "Boiling Point               1269 K\n",
              "Density                     8.84 g/cm3\n"
            },252
        };

    int_atom[100]={
            {
              "Name:            Fermium- Fm\n\n",

              "Origin of Name: Enrico Fermi, physicist\n\n",

              "Atomic Number               100\n",
              "Electronic Configuration    [Rn] 5f12 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               257 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1125 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },257
        };

    str_atom["Fm"]={
            {
              "Name:            Fermium- Fm\n\n",

              "Origin of Name: Enrico Fermi, physicist\n\n",

              "Atomic Number               100\n",
              "Electronic Configuration    [Rn] 5f12 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               257 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1125 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },257
        };

    int_atom[101]={
            {
              "Name:            Mendelevium- Md\n\n",

              "Origin of Name: Dmitri Mendeleyev, chemist and inventor\n\n",

              "Atomic Number               101\n",
              "Electronic Configuration    [Rn] 5f13 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               258 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1100 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },258
        };

    str_atom["Md"]={
            {
              "Name:            Mendelevium- Md\n\n",

              "Origin of Name: Dmitri Mendeleyev, chemist and inventor\n\n",

              "Atomic Number               101\n",
              "Electronic Configuration    [Rn] 5f13 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               258 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1100 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },258
        };

    int_atom[102]={
            {
              "Name:            Nobelium- No\n\n",

              "Origin of Name: Alfred Nobel, chemist, engineer, innovator, and armaments manufacturer\n\n",

              "Atomic Number               102\n",
              "Electronic Configuration    [Rn] 5f14 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               259 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1100 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },259
        };

    str_atom["No"]={
            {
              "Name:            Nobelium- No\n\n",

              "Origin of Name: Alfred Nobel, chemist, engineer, innovator, and armaments manufacturer\n\n",

              "Atomic Number               102\n",
              "Electronic Configuration    [Rn] 5f14 7s2\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               259 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1100 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },259
        };

    int_atom[103]={
            {
              "Name:            Lawrencium- Lr\n\n",

              "Origin of Name: Ernest O. Lawrence, physicist\n\n",

              "Atomic Number               103\n",
              "Electronic Configuration    [Rn] 5f14 7s2 7p1\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               262 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1900 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },262
        };

    str_atom["Lr"]={
            {
              "Name:            Lawrencium- Lr\n\n",

              "Origin of Name: Ernest O. Lawrence, physicist\n\n",

              "Atomic Number               103\n",
              "Electronic Configuration    [Rn] 5f14 7s2 7p1\n",
              "Group                       3\n",
              "Period                      7\n",
              "Block                       f\n",
              "Atomic Weight               262 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               1900 K\n",
              "Boiling Point               0 K\n",
              "Density                     0 g/cm3\n"
            },262
        };

    int_atom[104]={
            {
              "Name:            Rutherfordium- Rf\n\n",

              "Origin of Name: Ernest Rutherford, chemist and physicist\n\n",

              "Atomic Number               104\n",
              "Electronic Configuration    [Rn] 5f14 6d2 7s2\n",
              "Group                       4\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               267 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               2400 K\n",
              "Boiling Point               5800 K\n",
              "Density                     23.2 g/cm3\n"
            },267
        };

    str_atom["Rf"]={
            {
              "Name:            Rutherfordium- Rf\n\n",

              "Origin of Name: Ernest Rutherford, chemist and physicist\n\n",

              "Atomic Number               104\n",
              "Electronic Configuration    [Rn] 5f14 6d2 7s2\n",
              "Group                       4\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               267 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               2400 K\n",
              "Boiling Point               5800 K\n",
              "Density                     23.2 g/cm3\n"
            },267
        };

    int_atom[105]={
            {
              "Name:            Dubnium- Db\n\n",

              "Origin of Name: Dubna, Russia\n\n",

              "Atomic Number               105\n",
              "Electronic Configuration    [Rn] 5f14 6d3 7s2\n",
              "Group                       5\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               268 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     29.3 g/cm3\n"
            },268
        };

    str_atom["Db"]={
            {
              "Name:            Dubnium- Db\n\n",

              "Origin of Name: Dubna, Russia\n\n",

              "Atomic Number               105\n",
              "Electronic Configuration    [Rn] 5f14 6d3 7s2\n",
              "Group                       5\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               268 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           1.3 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     29.3 g/cm3\n"
            },268
        };


    int_atom[106]={
            {
              "Name:            Seaborgium- Sg\n\n",

              "Origin of Name: Glenn T. Seaborg, scientist\n\n",

              "Atomic Number               106\n",
              "Electronic Configuration    [Rn] 5f14 6d4 7s2\n",
              "Group                       6\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               269 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     35.0 g/cm3\n"
            },269
        };

    str_atom["Sg"]={
            {
              "Name:            Seaborgium- Sg\n\n",

              "Origin of Name: Glenn T. Seaborg, scientist\n\n",

              "Atomic Number               106\n",
              "Electronic Configuration    [Rn] 5f14 6d4 7s2\n",
              "Group                       6\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               269 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     35.0 g/cm3\n"
            },269
        };


    int_atom[107]={
            {
              "Name:            Bohrium- Bh\n\n",

              "Origin of Name: Hesse, Germany, where the element was first synthesized\n\n",

              "Atomic Number               107\n",
              "Electronic Configuration    [Rn] 5f14 6d5 7s2\n",
              "Group                       7\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               270 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     37.1 g/cm3\n"
            },270
        };

    str_atom["Bh"]={
            {
              "Name:            Bohrium- Bh\n\n",

              "Origin of Name: Hesse, Germany, where the element was first synthesized\n\n",

              "Atomic Number               107\n",
              "Electronic Configuration    [Rn] 5f14 6d5 7s2\n",
              "Group                       7\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               270 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     37.1 g/cm3\n"
            },270
        };


    int_atom[108]={
            {
              "Name:            Hassium- Hs\n\n",

              "Origin of Name: Lise Meitner, physicist\n\n",

              "Atomic Number               108\n",
              "Electronic Configuration    [Rn] 5f14 6d6 7s2\n",
              "Group                       8\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               269 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     40.7 g/cm3\n"
            },269
        };

    str_atom["Hs"]={
            {
              "Name:            Hassium- Hs\n\n",

              "Origin of Name: Lise Meitner, physicist\n\n",

              "Atomic Number               108\n",
              "Electronic Configuration    [Rn] 5f14 6d6 7s2\n",
              "Group                       8\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               269 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     40.7 g/cm3\n"
            },269
        };


    int_atom[109]={
            {
              "Name:            Meitnerium- Mt\n\n",

              "Origin of Name: Darmstadt, Germany, where the element was first synthesized\n\n",

              "Atomic Number               109\n",
              "Electronic Configuration    [Rn] 5f14 6d7 7s2\n",
              "Group                       9\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               278 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     37.4 g/cm3\n"
            },278
        };

    str_atom["Mt"]={
            {
              "Name:            Meitnerium- Mt\n\n",

              "Origin of Name: Darmstadt, Germany, where the element was first synthesized\n\n",

              "Atomic Number               109\n",
              "Electronic Configuration    [Rn] 5f14 6d7 7s2\n",
              "Group                       9\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               278 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     37.4 g/cm3\n"
            },278
        };


    int_atom[110]={
            {
              "Name:            Darmstadtium- Ds\n\n",

              "Origin of Name: Wilhelm Conrad R�ntgen, physicist\n\n",

              "Atomic Number               110\n",
              "Electronic Configuration    [Rn] 5f14 6d8 7s2\n",
              "Group                       10\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               281 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     34.8 g/cm3\n"
            },281
        };

    str_atom["Ds"]={
            {
              "Name:            Darmstadtium- Ds\n\n",

              "Origin of Name: Wilhelm Conrad R�ntgen, physicist\n\n",

              "Atomic Number               110\n",
              "Electronic Configuration    [Rn] 5f14 6d8 7s2\n",
              "Group                       10\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               281 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     34.8 g/cm3\n"
            },281
        };


    int_atom[111]={
            {
              "Name:            Roentgenium- Rg\n\n",

              "Origin of Name: Nicolaus Copernicus, astronomer\n\n",

              "Atomic Number               111\n",
              "Electronic Configuration    [Rn] 5f14 6d9 7s2\n",
              "Group                       11\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               281 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     28.7 g/cm3\n"
            },281
        };

    str_atom["Rg"]={
            {
              "Name:            Roentgenium- Rg\n\n",

              "Origin of Name: Nicolaus Copernicus, astronomer\n\n",

              "Atomic Number               111\n",
              "Electronic Configuration    [Rn] 5f14 6d9 7s2\n",
              "Group                       11\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               281 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               0 K\n",
              "Density                     28.7 g/cm3\n"
            },281
        };


    int_atom[112]={
            {
              "Name:            Copernicium- Cn\n\n",

              "Origin of Name: IUPAC systematic element name\n\n",

              "Atomic Number               112\n",
              "Electronic Configuration    [Rn] 5f14 6d10 7s2\n",
              "Group                       12\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               285 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               357 K\n",
              "Density                     23.7 g/cm3\n"
            },285
        };

    str_atom["Cn"]={
            {
              "Name:            Copernicium- Cn\n\n",

              "Origin of Name: IUPAC systematic element name\n\n",

              "Atomic Number               112\n",
              "Electronic Configuration    [Rn] 5f14 6d10 7s2\n",
              "Group                       12\n",
              "Period                      7\n",
              "Block                       d\n",
              "Atomic Weight               285 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               0 K\n",
              "Boiling Point               357 K\n",
              "Density                     23.7 g/cm3\n"
            },285
        };

    int_atom[113]={
            {
              "Name:            Ununtrium- Uut\n\n",

              "Origin of Name: Georgy Flyorov, physicist\n\n",

              "Atomic Number               113\n",
              "Electronic Configuration    [Rn] 5f14 6d10 7s2 7p1\n",
              "Group                       13\n",
              "Period                      7\n",
              "Block                       p\n",
              "Atomic Weight               286 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               700 K\n",
              "Boiling Point               1400 K\n",
              "Density                     16 g/cm3\n"
            },286
        };

    str_atom["Uut"]={
            {
              "Name:            Ununtrium- Uut\n\n",

              "Origin of Name: Georgy Flyorov, physicist\n\n",

              "Atomic Number               113\n",
              "Electronic Configuration    [Rn] 5f14 6d10 7s2 7p1\n",
              "Group                       13\n",
              "Period                      7\n",
              "Block                       p\n",
              "Atomic Weight               286 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               700 K\n",
              "Boiling Point               1400 K\n",
              "Density                     16 g/cm3\n"
            },286
        };


    int_atom[114]={
            {
              "Name:            Flerovium- Fl\n\n",

              "Origin of Name: IUPAC systematic element name\n\n",

              "Atomic Number               114\n",
              "Electronic Configuration    [Rn] 5f14 6d10 7s2 7p2\n",
              "Group                       14\n",
              "Period                      7\n",
              "Block                       p\n",
              "Atomic Weight               289 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               340 K\n",
              "Boiling Point               420 K\n",
              "Density                     14 g/cm3\n"
            },289
        };

    str_atom["Fl"]={
            {
              "Name:            Flerovium- Fl\n\n",

              "Origin of Name: IUPAC systematic element name\n\n",

              "Atomic Number               114\n",
              "Electronic Configuration    [Rn] 5f14 6d10 7s2 7p2\n",
              "Group                       14\n",
              "Period                      7\n",
              "Block                       p\n",
              "Atomic Weight               289 g\n",
              "Atomic Radius               0 pm\n",
              "Electronegativity           0 (Pauling Scale)\n",
              "Melting Point               340 K\n",
              "Boiling Point               420 K\n",
              "Density                     14 g/cm3\n"
            },289
        };
}
