#include <stdio.h>
#include <stdlib.h>

int main() 
{
	system("su -c \"grep -A 1 ssid= /data/misc/wifi/wpa_supplicant.conf \"");
	system("exit");
	return 0;
}
