#ifndef __ASSOCTAB_H__
#define __ASSOCTAB_H__

#include "string.h"

struct node {
    node *next;
    char *key;
    int val;

    node(const char *str):next(NULL) {
        key = new char[strlen(str) + 1];
        strcpy (key, str);
    };

    ~node() {
        delete[]key;
    }

    node(const node & st):next(NULL) {
        if(st.key == NULL) {
            key = NULL;
        }
        else {
            key = new char[strlen(st.key) + 1];
            strcpy(key, st.key);
        }
        val = st.val;
    };
private:
    node & operator= (const node &); //zabezpiecznie przed operatorem przypisania
};


class assocTab {

private:
    node *head;
    void insert(const char *key, int value);
    void clear();
    node *find(const char *key) const;
    void swap(assocTab & tab);
public:
    assocTab();
    ~assocTab();
    assocTab (const assocTab & l);
    assocTab& operator= (const assocTab & tab);
    int &operator[] (const char * str);
};

#endif /* __ASSOCTAB_H__ */
