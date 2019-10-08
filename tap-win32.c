#include "qemu-common.h"
#include "net.h"
#include "sysemu.h"

/* This is dummy becauase tap-win32.c is impossible to compile due to DDK errors */

int tap_win32_init(VLANState *vlan, const char *ifname)
{
	
	return -1;
}