# include <stdio.h>

int main() {
    int Maths,Physics,Chemistry,Biology,English,Hindi;
    printf("Maths:");
    scanf("%d",&Maths);
    printf("Physics:");
    scanf("%d",&Physics);
    printf("Chemistry:"),
    scanf("%d",&Chemistry);
    printf("Biology:");
    scanf("%d",&Biology);
    printf("English:");
    scanf("%d",&English);
    printf("Hindi:");
    scanf("%d",&Hindi);

    if (Maths>90) {printf("Math:A++");}
    else if(Maths>80 && Maths<91) {printf("\nMath:A+");}

    else if(Maths>70 && Maths<81) {printf("\nMaths:A");}

    else if(Maths>60 && Maths<71) {printf("\nMaths:B");}

    else if(Maths>50 && Maths<61) {printf("\nMaths:C");}

    else if(Maths>40 && Maths<51) {printf("\nMaths:D");}

    else if (Maths<41) {printf("\nMaths:Fail");}

     if (Physics>90) {printf("\nPhysics:A++");}
    else if(Physics>80 && Physics<91) {printf("\nPhysics:A+");}

    else if(Physics>70 && Physics<81) {printf("\nPhysics:A");}

    else if(Physics>60 && Physics<71) {printf("\nPhysics:B");}

    else if(Physics>50 && Physics<61) {printf("\nPhysics:C");}

    else if(Physics>40 && Physics<51) {printf("\nPhysics:D");}

    else if (Physics<41) {printf("\nPhysics:Fail");}
    
    if (Chemistry>90) {printf("\nChemistry:A++");}
    else if(Chemistry>80 && Chemistry<91) {printf("\nChemistry:A+");}

    else if(Chemistry>70 && Chemistry<81) {printf("\nChemistry:A");}

    else if(Chemistry>60 && Chemistry<71) {printf("\nChemistry:B");}

    else if(Chemistry>50 && Chemistry<61) {printf("\nChemistry:C");}

    else if(Chemistry>40 && Chemistry<51) {printf("\nChemistry:D");}

    else if (Chemistry<41) {printf("\nChemistry:Fail");}

    if (Biology>90) {printf("\nBiology:A++");}
   else if(Biology>80 && Biology<91) {printf("\nBiology:A+");}

    else if(Biology>70 && Biology<81) {printf("\nBiology:A");}

    else if(Biology>60 && Biology<71) {printf("\nBiology:B");}

    else if(Biology>50 && Biology<61) {printf("\nBiology:C");}

    else if(Biology>40 && Biology<51) {printf("\nBiology:D");}

    else if (Biology<41) {printf("\nBiology:Fail");}

    if (English>90) {printf("\nEnglish:A++");}
    else if(English>80 && English<91) {printf("\nEnglish:A+");}

    else if(English>70 && English<81) {printf("\nEnglish:A");}

    else if(English>60 && English<71) {printf("\nEnglish:B");}

    else if(English>50 && English<61) {printf("\nEnglish:C");}

    else if(English>40 && English<51) {printf("\nEnglish:D");}

    else if (English<41) {printf("\nEnglish:Fail");}

    if (Hindi>90) {printf("\nHindi:A++");}
     else if(Hindi>80 && Hindi<91) {printf("\nHindi:A+");}

    else if(Hindi>70 && Hindi<81) {printf("\nHindi:A");}

    else if(Hindi>60 && Hindi<71) {printf("\nHindi:B");}

    else if(Hindi>50 && Hindi<61) {printf("\nHindi:C");}

    else if(Hindi>40 && Hindi<51) {printf("\nHindi:D");}

    else if (Hindi<41) {printf("\nHindi:Fail");}

return 0;
}