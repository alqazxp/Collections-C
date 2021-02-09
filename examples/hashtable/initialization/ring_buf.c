/* An example of creating a hash table that works with string keys. */

#include <cc_hashtable.h>
#include "cc_ring_buffer.h"

#include <assert.h>

int main(int argc, char **argv)
{
    int* p = (int*)malloc(sizeof(int));
    *p = 22;
    CC_RbufConf config;
    enum cc_stat c_state;

    CC_Rbuf* rbuf = NULL;
    cc_rbuf_conf_init(&config);
    config.capacity = 1024;
    c_state = cc_rbuf_conf_new(&config, &rbuf);
    assert(c_state == CC_OK);
    cc_rbuf_enqueue(rbuf, (uint64_t)p);
    uint64_t p2 = 0;
    cc_rbuf_dequeue(rbuf, &p2);

    int* p3 = (int*)(p2);

    return 0;
}
