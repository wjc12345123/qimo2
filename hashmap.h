//
// Created by 86136 on 2023/1/27.
//
#ifndef _FILE_MANAGEMENT_SYSTEM_HASHMAP_H
#define _FILE_MANAGEMENT_SYSTEM_HASHMAP_H

#include <stdint.h>

#define DEFAULT_HASHMAP_SIZE 31

typedef struct HashNode {
    char *key;

    intptr_t value;

    struct HashNode *next; // ��key��ͬʱ��ָ�򼯺��е���һ���ڵ�

} HashNode;


typedef struct HashMap {
    int size; // hash map���ظ�node������

    HashNode **hashArr; // ��keyֵ���ظ���node��key�ظ���node������HashNode->next

} HashMap;

int myHash(char *x);

HashMap *CreateHashMap(int n);

HashMap *DefaultHashMap();

int InsertHashMap(HashMap *hashMap, char *key, intptr_t value);

intptr_t GetHashMap(HashMap *hashMap, char *key);

void DeleteHashMap(HashMap *hashMap);

int RemoveHashMap(HashMap *hashMap, char *key);

void PrintHashMap(HashMap *hashMap);

void hashMapTest(void);


#endif //_FILE_MANAGEMENT_SYSTEM_HASHMAP_H
