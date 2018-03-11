#ifndef _PCS_MEM_H
#define _PCS_MEM_H

/* �Զ���malloc,free���������ڼ���ڴ�й©�� */
#ifdef WIN32
    #include <malloc.h>
#else
    #include <alloca.h>
#endif
#include "pcs_defs.h"

typedef void(*pcs_mem_leak_print_fun)(void* ptr, const char* filename, int line);

/* ԭʼ�� malloc() ���� */
PCS_API void* pcs_mem_malloc_raw(size_t size);
/* ԭʼ�� free() ���� */
PCS_API void pcs_mem_free_raw(void* ptr);

/* ����й©���� malloc() ���� */
PCS_API void* pcs_mem_malloc(size_t size, const char* filename, int line);
/* ����й©���� malloc() ���� */
PCS_API void* pcs_mem_malloc_arg1(size_t sz);
/* ����й©���� free() ���� */
PCS_API void pcs_mem_free(void* p);
/* ��ӡй©���ڴ� */
PCS_API void pcs_mem_print_leak();

PCS_API void pcs_mem_set_print_func(pcs_mem_leak_print_fun print);


#if defined(DEBUG) || defined(_DEBUG)

    #define pcs_print_leak()            pcs_mem_print_leak()
    #define pcs_malloc(size)            pcs_mem_malloc(size, __FILE__, __LINE__)
    #define pcs_free(ptr)               pcs_mem_free(ptr)

#else
    #include <stdlib.h>
    #define pcs_print_leak()            while(0)
    #define pcs_malloc(size)            malloc(size)
    #define pcs_free(ptr)               free(ptr)
#endif

#endif
