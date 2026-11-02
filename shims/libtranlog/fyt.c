//
// SPDX-FileCopyrightText: MillenniumOSS
// SPDX-License-Identifier: Apache-2.0
//
#define LOG_TAG "libtranlog"
#include <log/log.h>
#include <stdint.h>
#include <string.h>
#include <pthread.h>

void tranlog_write(const char *tag, unsigned int module, unsigned int level,
                   const char *buf, int len) {
}

int __tranlog_print(const char *tag, unsigned int module, unsigned int level,
                    const char *fmt, ...) {
    return 0;
}

void __tranlog_dump(const char *tag, unsigned int module, unsigned int level,
                    const char *fmt, ...) {
    if (tag && strncmp(tag, "all", 3) == 0)
        ALOGE("[__tranlog_dump] tag must not set all !!!!!\n");
}

int __tranlog_server_print(const char *tag, unsigned int module, unsigned int level,
                           const void *payload, int len) {
    return 0;
}

int _tranlog_dump_trigger(const char *tag, unsigned int module, unsigned int level) {
    return 0;
}

unsigned int is_tid_enabled(int tid) {
    return 0;
}

unsigned int is_tid_enabled_64(int64_t tid) {
    return 0;
}

void *listen_tid_state(void (*callback)(void)) {
    if (!callback) {
        ALOGE("athena callback was null");
        return NULL;
    }
    return NULL;
}

int wait_tid_thread_end(pthread_t *tid) {
    return 0;
}

void *listen_config_state(void (*callback)(void)) {
    if (!callback) {
        ALOGE("athena callback was null");
        return NULL;
    }
    return NULL;
}

int wait_config_thread_end(pthread_t *tid) {
    return 0;
}

void tranlog_setnv_s32(const char *section, const char *key, int val) {
}

int tranlog_getnv_s32(const char *section, const char *key, int defval) {
    return defval;
}

void tranlog_setnv_s64(const char *section, const char *key, int64_t val) {
}

int64_t tranlog_getnv_s64(const char *section, const char *key, int64_t defval) {
    return defval;
}

void tranlog_setnv_float(const char *section, const char *key, float val) {
}

float tranlog_getnv_float(const char *section, const char *key, float defval) {
    return defval;
}

void tranlog_setnv_string(const char *section, const char *key, const char *val) {
}

int tranlog_getnv_string(const char *section, const char *key,
                         char *out, unsigned int outlen, const char *defval) {
    if (out && outlen && defval)
        strncpy(out, defval, outlen - 1);
    return 0;
}

void *alloc_msg(void) {
    return NULL;
}

void free_msg(void *handle) {
}

void msg_put_int(void *handle, const char *key, unsigned int val) {
}

void msg_put_long(void *handle, const char *key, long val) {
}

void msg_put_ll(void *handle, const char *key, long long val) {
}

void msg_put_string(void *handle, const char *key, const char *val) {
}

void submit_msg(void *handle, unsigned int module, int reserved) {
}

void submit_msg_wrapper(void *handle, unsigned int module,
                        uint64_t timestamp, const char *tag) {
}

void submit_msg_12(void *handle, unsigned int module,
                   uint64_t timestamp, const char *tag) {
}

void *getConfig(const char *id) {
    return NULL;
}
 
unsigned int getEnabled(const char *content) {
    return 0xffffffff;
}
 
void *getString(const char *content, long key) {
    return NULL;
}
 
void *getStringArray(const char *content, long key, unsigned int *out_count) {
    if (out_count)
        *out_count = 0;
    return NULL;
}
 
int getInt(const char *content, long key) {
    return 0;
}
 
void isReady(void) {
}

void *startListener(void (*callback)(void)) {
    if (callback == NULL) {
        ALOGE("athena callback was null");
        return NULL;
    }
    return NULL;
}
