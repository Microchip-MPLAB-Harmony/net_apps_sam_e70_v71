---
parent: Harmony 3 TCP/IP Application for SAM E70/V71 Family
title: TCP/IP Berkeley UDP Relay
has_children: true
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TCP/IP Berkeley UDP Relay

The Berkeley UDP Relay configuration demonstrates the use of multiple sockets for both sending and receiving. There are three different sub-functions of this application: 

* UDP Relay, which accepts UDP packets on one socket, and sends the packets out on a different socket 
* UDP Relay Client, which generates UDP traffic that is compatible with the UDP Relay Server 
* UDP Relay Server, which receives and checks traffic for a packet count and reports is any packets are dropped 



## Development kits
The following table provides links to the documentation to the TCP/IP Berkeley UDP Relay Application on SAM E70/V71 family on both bare-metal(non-RTOS) and FreeRTOS.


| Development Kit |
|:---------|
|[SAM E70/V71 Starter Kit MHC Configuration](docs/readme_mhc_configuration.md) |
|[SAM E70/V71 Starter Kit Hardware Configuration](docs/readme_hardware_configuration.md) |
|[SAM E70/V71 Starter Kit Run Application](docs/readme_run_application.md) |
