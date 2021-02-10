/* An example of creating a hash table that works with string keys. */

#include <cc_hashtable.h>
#include "cc_ring_buffer.h"

#include "../../utest.h"

#include <assert.h>

UTEST_STATE();

CC_RbufConf config;
enum cc_stat c_state;
CC_Rbuf* rbuf = NULL;
uint64_t loop = 1;

int main(int argc, const char* const argv[]) 
{
    cc_rbuf_conf_init(&config);
    config.capacity = 4;
    
    return utest_main(argc, argv);
}

UTEST(enqueue, overfullqueue)
{
    c_state = cc_rbuf_conf_new(&config, &rbuf);
    assert(c_state == CC_OK);
    for (loop = 1; loop <= 10; ++loop)
    {
        cc_rbuf_enqueue(rbuf, loop);
    }
    for (loop = 0; loop < 4; ++loop)
    {
        uint64_t v = cc_rbuf_peek2(rbuf, (int)(loop));
        ASSERT_EQ(v, loop + 7);
    }

    cc_rbuf_destroy(rbuf);
}

UTEST(enqueue, notfull)
{
    c_state = cc_rbuf_conf_new(&config, &rbuf);
    assert(c_state == CC_OK);
    for (loop = 1; loop <= 3; ++loop)
    {
        cc_rbuf_enqueue(rbuf, loop);
    }
    for (loop = 0; loop < 3; ++loop)
    {
        uint64_t v = cc_rbuf_peek2(rbuf, (int)(loop));
        ASSERT_EQ(v, loop + 1);
    }

    cc_rbuf_destroy(rbuf);
}

UTEST(enqueue, fullqueue)
{
    c_state = cc_rbuf_conf_new(&config, &rbuf);
    assert(c_state == CC_OK);
    for (loop = 1; loop <= 4; ++loop)
    {
        cc_rbuf_enqueue(rbuf, loop);
    }
    for (loop = 0; loop < 4; ++loop)
    {
        uint64_t v = cc_rbuf_peek2(rbuf, (int)(loop));
        ASSERT_EQ(v, loop + 1);
    }

    cc_rbuf_destroy(rbuf);
}
