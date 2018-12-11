#include "assoctab.h"


void assocTab::insert(const char *key, int value) {
    node *nnew = new node(key);
    nnew->next = head;
    head = nnew;
    nnew->val = value;
}

void assocTab::clear() {
    while(head) {
        node *temp = head->next;
        delete head;
        head = temp;
    }
}

assocTab::assocTab() {
    head = NULL;
}

assocTab::~assocTab() {
    clear();
}

node *assocTab::find(const char *key) const {
    node * temp = head;
    while(temp) {
        if(!strcmp(temp->key, key)) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void assocTab::swap(assocTab & tab) {
    node *temp = head;
    head = tab.head;
    tab.head = temp;
}

assocTab& assocTab::operator= (const assocTab & tab) {
    if(&tab == this) {
        return *this;
    }
    assocTab temp(tab);
    swap(temp);
    return *this;
}

int& assocTab::operator[] (const char * str) {
    node *temp = find(str);
    if(!temp) {
        insert(str, 0);
        temp = head;
    }
    return temp->val;
}


assocTab::assocTab (const assocTab & tab) {
    node *src, **dst;
    head = NULL;
    src = tab.head;
    dst = &head;
    try {
        while(src) {
            *dst = new node(*src);
            src = src->next;
            dst = &((*dst)->next);
        }
    }
    catch (...) {
        clear();
        throw;
    }
}

node *secoundAssocTab::find(const char *key) const {
    node * temp = head;
    while(temp) {
        if(!strcasecmp(temp->key, key)) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
