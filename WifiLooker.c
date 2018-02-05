#include <stdio.h>
#include <stdlib.h>

int main() 
{
#ifdef __ANDROID__
	system("su -c \"grep -A 1 ssid= /data/misc/wifi/wpa_supplicant.conf \"");
#elif __linux__
	system("sudo grep -h -E \"ssid=|psk=\" /etc/NetworkManager/system-connections/* ");
#else
	printf("Unsupport OS!\n");
#endif
	system("exit");
	return 0;
}
