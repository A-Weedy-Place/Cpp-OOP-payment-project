#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// Signatures
int menu();
void decimalToAll();
string decimalToBinary(int);
string decimalToOctal(int);
string decimalToHexa(int);
void binaryToAll();
int binaryToDecimal(string);
void octalToAll();
int octalToDecimal(string);
void hexaToAll();
int hexaToDecimal(string);
void display(int, string, string, string);
void reverseStr(string&);
//main
int main(){
jump:
    int choice = menu();
    if (choice==1)
        decimalToAll();
    else if(choice==2)
        binaryToAll();
    else if(choice==3)
        octalToAll();
    else if(choice==4)
        hexaToAll();
    else{
        cout<<"Wrong Input!!!"
        <<"\nenter 1-4 only \n";
        goto jump;
    }
}
//function Definations
int menu(){
    int choice;
    cout<<"Press 1 to enter decimal no ;\n"
        <<"Press 2 to enter binary no ;\n"
        <<"Press 3 to enter octal no ;\n"
        <<"Press 4 to enter hexadecimal no .\n"
        <<"-----------------------------------\n"
        <<"Enter Choice : ";
    cin>>choice;
    return choice;
}
void decimalToAll(){
    int decimal;
    string binary, octal, hexa;
    cout<<"Enter The Decimal NO : ";
    cin>>decimal;
    
    binary = decimalToBinary(decimal);
    octal = decimalToOctal(decimal);
    hexa = decimalToHexa(decimal);
    display(decimal, binary, octal, hexa);
}
void binaryToAll(){
    int decimal;
    string binary, octal, hexa;
    cout<<"Enter The Binary NO : ";
    cin>>binary;
    decimal = binaryToDecimal(binary);
    octal = decimalToOctal(decimal);
    hexa = decimalToHexa(decimal);
    display(decimal, binary, octal, hexa);
}
void octalToAll(){
    int decimal;
    string binary, octal, hexa;
    cout<<"Enter The Octal NO : ";
    cin>>octal;
    decimal = octalToDecimal(octal);
    binary = decimalToBinary(decimal);
    hexa = decimalToHexa(decimal);
    display(decimal, binary, octal, hexa);
}
void hexaToAll(){
    int decimal;
    string binary, octal, hexa;
    cout<<"Enter The HexaDecimal NO : ";
    cin>>hexa;
    decimal = hexaToDecimal(hexa);
    binary = decimalToBinary(decimal);
    octal = decimalToOctal(decimal);
    display(decimal, binary, octal, hexa);
}
void reverseStr(string& str){
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
string decimalToBinary(int d){
    int r;
    string binary = "";
    for(int i=d; i>=1; i/=2){
        r = i % 2;
        binary += to_string(r);
    }
    reverseStr(binary);
    return binary;
}
string decimalToOctal(int d){
    int r;
    string octal = "";
    for(int i=d; i>=1; i/=8){
        r = i % 8;
        octal += to_string(r);
    }
    reverseStr(octal);
    return octal;
}

string decimalToHexa(int decimal){
    int rem;
    string hexa = "";
    for(int i=decimal; i>=1; i/=16){
        rem = i % 16;
        if(rem<=9)
        hexa += to_string(rem);
        else if(rem==10)
        hexa += "A";
        else if(rem==11)
        hexa += "B";
        else if(rem==12)
        hexa += "C";
        else if(rem==13)
        hexa += "D";
        else if(rem==14)
        hexa += "E";
        else if(rem==15)
        hexa += "F";
    }
    reverseStr(hexa);
    return hexa;
}
int binaryToDecimal(string binary){
    reverseStr(binary);
    int bit, decimal=0, len = binary.length();
    for(int i=0; i<len; i++){
        bit = (int)binary[i] - 48;
        decimal += bit * pow(2,i);
    }
    return decimal;
}
int octalToDecimal(string octal){
    reverseStr(octal);
    int bit = 0, decimal=0, len = octal.length();
    for(int i=0; i<len; i++){
        bit = (int)octal[i] - 48;
        cout<<bit;
        decimal += (bit * pow(8,i));
    }
    return decimal;
}
int hexaToDecimal(string hexa){
    reverseStr(hexa);
    int bit = 0, decimal=0, len = hexa.length();
    for(int i=0; i<len; i++){
        if(hexa[i]=='A')
        bit = 10;
        else if(hexa[i]=='B')
        bit = 11;
        else if(hexa[i]=='C')
        bit = 12;
        else if(hexa[i]=='D')
        bit = 13;
        else if(hexa[i]=='E')
        bit = 14;
        else if(hexa[i]=='F')
        bit = 15;
        else
        bit = (int)hexa[i] - 48;
        cout<<bit;
        decimal += (bit * pow(16,i));
    }
    return decimal;
}
void display(int decimal, string binary, string octal, string hexa){
    cout<<"___________Output___________\n"
        <<"Decimal = "<<decimal<<endl
        <<"Binary = "<<binary<<endl
        <<"Octal = "<<octal<<endl
        <<"HexaDecimal = "<<hexa<<endl;
}