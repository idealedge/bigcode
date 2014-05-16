/* Dirty fix to ensure that VPI infaces work with some of the most recent
   versions of libpcap (1.5.x), including the version included in Ubuntu 14.04
   repos, while we wait for a bigcode fix or the Ubuntu repos to be updated (the
   most recent version of libpcap has been patched */

#ifndef __LIBPCAP_VERSION_H__

/* Uncomment if using libpcap 1.5.x */
/* #define LIBPCAP_USE_FIX */

#define __LIBPCAP_VERSION_H__

#endif
