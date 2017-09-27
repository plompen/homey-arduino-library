#ifndef _HOMEY_ETH_H_
#define _HOMEY_ETH_H_

	#include <Ethernet.h>
	#include <EthernetUdp.h>
	#define CLIENT_TYPE EthernetClient
	#define TCP_SERVER_TYPE EthernetServer
	#define UDP_SERVER_TYPE EthernetUDP
	#define MAXCALLBACKS 10
	#include <Homey.h>

#endif
