int mystrlen( char *s ){
    int len = 0;
    while(*s){
        s++;
        len++;
    }
    return len;
}

char * mystrcpy( char *dest, char *source){
    int i = 0;
    while(*source){
        dest[i] = *source;
        i++;
        source++;
    }
    return dest;
}

char *mystrncat(char *dest, char *source, int n)
{
    int len = mystrlen(dest);
    int i;

    for(i = 0; i < n && source[i]; i++) {
        dest[len + i] = source[i];
    }

    return dest;
}

int mystrcmp( char *s1, char *s2 ){
    while(*s1 && *s2){
        if(*s1 < *s2) return -1;
        if(*s1 < *s2) return  1;
        s1++;
        s2++;
    }
    if (*s1) return 1;
    if (*s2) return -1;
    return 0;
}

char * mystrchr( char *s, char c ){
    while(*s){
        if(*s == c) return s;
        s++;
    }
    if(!c) return s; // when it's 0
    return 0;
}

