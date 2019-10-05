#include<stdio.h>
#include<malloc.h>

/*
    abccce
    4
    rat
    artuino
    cce
    abty
    ouput: cce

    train
    3
    main
    nail
    rain
    output: rain
*/

int main()
{
    int t;
    int freqCount[26]={0},maxMatch=0,refIndex;
    char strref[100];
    scanf("%s",strref);
    for(int i=0;strref[i];i++)
        freqCount[strref[i]-'a']++;
    scanf("%d",&t);
    char words[t][100];
    int index=0;
    while(index<t)
    {
        scanf("%s",words[index]);
        int wordIndex=0,count=0;
        while(words[index][wordIndex]){
                if(freqCount[words[index][wordIndex]-'a'])
                    count++;
            wordIndex++;
        }
        if(count>maxMatch){
            maxMatch = count;
            refIndex = index;
        }
        index++;
    }
    printf("%s",words[refIndex]);
}
