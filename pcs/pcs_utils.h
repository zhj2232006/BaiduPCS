#ifndef _PCS_UTILS_H
#define _PCS_UTILS_H

#include <stdarg.h>

#include "pcs_defs.h"
#include "pcs_slist.h"

/*���ص�ǰ�������Ƿ��Ǵ��ģʽ*/
PCS_API PcsBool pcs_isLittleEndian();
/*���ص�ǰ�������Ƿ���С��ģʽ*/
PCS_API PcsBool pcs_isBigEndian();

/*ԭ����һ���ַ���������ֵ��Ҫ����pcs_free()*/
PCS_API char* pcs_utils_strdup(const char* str);
/* �� src ��ӵ� dst ��ߣ��Զ��ؽ� dst��
 * ���� �½����� �ַ���ָ�롣
 * free_dst ����Ϊ TRUE����ʾ�����µ��ַ������ͷŵ� dst ���ڴ�ռ䡣
 */
PCS_API char* pcs_utils_strcat(char* dst, const char* src, int src_len, int free_dst);
/*pcs_utils_sprintf��ʸ��ģʽ*/
PCS_API char* pcs_utils_vsprintf(const char* fmt, va_list ap);
/*����ַ������ڴ棬�����ظ��ڴ档*/
PCS_API char* pcs_utils_sprintf(const char* fmt, ...);
/*��ʽ��sizeΪ���׶�дģʽ*/
PCS_API char* pcs_utils_readable_size(double size/*in bytes*/, char* buf, int buf_size, char* sp);
PCS_API char* pcs_utils_readable_left_time(int64_t second, char* buf, int buf_size, char* sp);
/*��ȡpath�ĸ�Ŀ¼*/
PCS_API char* pcs_utils_basedir(const char* path);
/*��ȡpath���ļ�������*/
PCS_API char* pcs_utils_filename(const char* path);
/*���Դ�Сд�Ƚ������ַ����� str1 < str2ʱ���ظ�����str1 == str2ʱ����0��str1 > str2ʱ����������*/
PCS_API int pcs_utils_strcmpi(const char* str1, const char* str2);
/*�ж����ַ����Ƿ���ȡ���ȷ���PcsTrue�����򷵻�PcsFalse��ֻ�Ƚ�lenָ���ĳ��ȡ�*/
PCS_API PcsBool pcs_utils_streq(const char* str1, const char* str2, int len);

/*�����ֽڵ�MD5ֵ*/
PCS_API const unsigned char* pcs_md5_bytes_raw(const unsigned char* bytes, int len);

/*�����ֽڵ�MD5ֵ*/
PCS_API const char* pcs_md5_bytes(const unsigned char* bytes, int len);

/**
* �ַ���md5
*/
PCS_API const char* pcs_md5_string(const char* str);
/**
* �ַ���md5������16�ֽڵ�MD5ֵ
*/
PCS_API const unsigned char* pcs_md5_string_raw(const char* str);
/**
* �ļ� md5
*/
PCS_API const char* pcs_md5_file_s(const char* file_name);

/*��32λ�������Ӹ�λ����λ˳����䵽buf��4���ֽ��С�
* ����0xF1E2D3C4 ���� buf[0] = 0xF1, buf[1] = 0xE2, buf[2] = 0xD3, buf[3] = 0xC4.buf���������޸Ķ�
*/
void int2Buffer(int v, char* buf);

/*int2Buffer�������*/
int readInt(const char* buf);

/*
* ��ȡ���ַ� callback({...}) �е� {...} ����
*/
char* extract_json_from_callback(char* callback);

PCS_API int pcs_strlen(const char* s);

PCS_API const char* pcs_time2str(time_t time);

/* ��ͬ javascript �е� '(new Date()).getTime()'�� */
PCS_API int64_t pcs_jstime();

PCS_API char* pcs_js_timestr();

#endif
