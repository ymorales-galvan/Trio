#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE iHERE
void rearrange(int& red, int& green, int& blue);

int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA


        // <-- ADD YOUR FUNCTION CALL HERE
        rearrange(red, green, blue);

        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA
}



// <-- ADD YOUR FUNCTION DEFINITON HERE
void rearrange(int& red, int& green, int& blue)
{
        int first = red;
        int  second = green;
        int  third = blue; 

        if(red > green && green > blue)
        {
                first = red; 
                second = green;
                third = blue; 
        }
        else if(red > green && green <blue)
        {
               if(red>blue)
               {
                first = red; 
                second = blue;
                third = green;
               }
               else
               {
                       first = blue;
                       second = red;
                       third = green;
               }
        }

        else if(red > blue && blue <green)
        {
                if(red>green)
                { 
                first = red;
                second = green;
                third = blue;
                }
                else
                {
                        first = green;
                        second = red;
                        third =blue;
                }
        }
        else if(red> blue && blue>green)
        {
                first = blue;
                second = red;
                third = green;
        }
        else if(red<green && green >blue)
        {
                first = green;
                second=blue;
                third = red;
        }
        else if(red<green && green<blue)
        {
                first = blue;
                second= green;
                third = red;
        }
        else if(red<blue && blue<green)
        {
                first = green;
                second = blue;
                third = red;
        }
         red = first;
         green = second; 
         blue = third;

        
}

