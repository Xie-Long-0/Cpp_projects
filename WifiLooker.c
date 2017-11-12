#include <stdio.h>
#include <stdlib.h>

int main() 
{
#ifdef _ANDROID_
	system("su -c \"grep -A 1 ssid= /data/misc/wifi/wpa_supplicant.conf \"");
#endif
	system("exit");
	return 0;
}
