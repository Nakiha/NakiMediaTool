#include <stddef.h>

#include "shared/hello.h"

#include "libavutil/log.h"

int main()
{
    print();

    av_log_set_level(AV_LOG_DEBUG);
    av_log(NULL, AV_LOG_DEBUG, "%s", "HELLO FFMPEG\n");

    return 0;
}