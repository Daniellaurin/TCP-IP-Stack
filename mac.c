#include <linux/if_ether.h>

struct eht_hdr {
  unsigned char dmac[6];
  unsigned char smac[6];
  uint16_t ethertype;
  unsigned char payload[];
} _attribute_((packed));

if (tun_read)