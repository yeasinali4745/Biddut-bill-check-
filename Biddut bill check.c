#include<stdio.h>

int allVat() {
    int demandChaege=42;
    int miterRent=10;
    int vat=4;
    int totalCharge=demandChaege+miterRent+vat;
    return totalCharge;

}

void lifeLine(int unit) {
    int tx=allVat();
    float totalRent=unit*4.63 + tx;
    printf("Total amount:%.0f",totalRent);

}
void first(int unit) {
    int tx=allVat();
    int extraUnit=unit-50;
    int firstRent=50*4.63;
    int extraRent=extraUnit*5.26;
    int totalRent=firstRent+extraRent +tx;
    printf("Total amount:%d",totalRent);

}
void second(int unit) {
    int tx=allVat();
    int extraUnit=unit-75;
    int firstRent=50*4.63;
    int secondRent=25*5.26;
    int extraRent=extraUnit*7.2;
    int totalRent=firstRent + secondRent + extraRent + tx;
    printf("Total amount:%d",totalRent);

}
void third(int unit) {

    int tx=allVat();
    float firstRent=50*4.63;
    float secondRent=25*5.26;
    float thirdRent=125*7.2;
    int extraUnit=unit-200;
    float extraRent=extraUnit*7.59;
    float totalRent=firstRent+secondRent+thirdRent+extraRent+tx;
    printf("Total amount=%.0f",totalRent);
}

void forth(int unit) {
    int tx=allVat();
    float firstRent=50*4.63;
    float secondRent=25*5.26;
    float thirdRent=125*7.2;
    float forthRent=100*7.59;
    int extraUnit=unit-300;
    float extraRent=extraUnit*8.02;
    float totalRent = firstRent+secondRent+thirdRent+ forthRent+extraRent+tx;
    printf("Total amount=%.0f",totalRent);
}

void five(int unit) {
    int tx=allVat();
    float firstRent=50*4.63;
    float secondRent=25*5.26;
    float thirdRent=125*7.2;
    float forthRent=100*7.59;
    float fiveRent=100*8.02;
    int extraUnit=unit-400;
    float extraRent=extraUnit*12.67;
    float totalRent=firstRent+secondRent+thirdRent+forthRent+fiveRent+extraRent+tx;
    printf("Total amount=%.0f",totalRent);
}



void hightUnit(int unit) {

    int tx=allVat();
    float firstRent=50*4.63;
    float secondRent=25*5.26;
    float thirdRent=125*7.2;
    float forthRent=100*7.59;
    float fiveRent=100*8.02;
    float sixRent=200*12.67;
    int extraUnit=unit-600;
    float extraRent=extraUnit*14.61;
    float totalRent=firstRent+secondRent+thirdRent+forthRent+fiveRent+sixRent+extraRent+tx;
    printf("Total amount=%.0f",totalRent);

}

int main()
{
    int unit;
    printf("Enter your unit:");
    scanf("%d",&unit);
    if(unit>0 && unit<=50) {
        lifeLine(unit);
    }
    else if(unit>=51 && unit<=75) {
        first(unit);
    }
    else if(unit>=76 && unit<=200) {
        second(unit);
    }
    else if(unit>=201 && unit<=300) {
        third(unit);
    }
    else if(unit>=301 && unit<=400) {
        forth(unit);
    }
    else if(unit>=401 && unit<=600) {
        five(unit);
    }
    else {
        hightUnit(unit);

    }
    return 0;
}

