/* Spoj Problem Solution: TOANDFRO *
 *
 *  Copyright (C) 2000-2014  Amit Kumar <dtu.amit@gmail.com> <www.iamit.in>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 */
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int main()
{
    int col,len,k,j,m;
    char a[200];

    while(1) {
        cin >> col;
        if(col == 0)
            break;
        scanf("%s", a);
        len = strlen(a);
        k = 1;

        //Plaintext Function Start
        for(int i=0;i<col;i++){
            j = i;
            while(j < len) {
                m = (j + (2*col) - k);
                printf("%c", a[j]);
                if( m < len)
                    printf("%c",a[m]);
                j = j + (2*col); }
            k = k + 2;
        }
        printf("\n");
        //Plaintext Function End
    }
return 0;
}
