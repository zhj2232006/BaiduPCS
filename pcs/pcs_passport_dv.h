#ifndef PCS_PASSPORT_DV_H_
#define PCS_PASSPORT_DV_H_

#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ���� dv
 *   pdv       - ���ڽ��ղ����� dv����Ҫ free(*pdv)
 *   starttime - ��¼ҳ��򿪵�ʱ��
 */
int passport_build_dv(char **pdv, int64_t starttime, const char *username);

int passport_print_dv(const char *dv);

#ifdef __cplusplus
}
#endif

#endif /* PCS_PASSPORT_DV_H_ */
