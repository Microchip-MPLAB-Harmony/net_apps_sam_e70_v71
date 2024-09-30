![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Harmony 3 Net library application examples for SAM E70/V71 family

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 Net library application examples for SAM E70/V71 family

- [Release Notes](./release_notes.md)
- [Microchip Software License Agreement](Microchip_SLA001.md)

# Contents Summary

| Folder     | Description                                               |
| ---        | ---                                                       |
| apps       | Contains Net library example applications        |
| docs       | Contains documentation in html format for offline viewing (to be used only after cloning this repository onto a local machine). Use [onlinedocs site](https://onlinedocs.microchip.com/g/GUID-AD96457E-5398-4FB1-BC7B-BB5287CAD8E7-en-US-1/index.html?output=oxygen) of this repository for viewing it online. |

## Code Examples

The following applications are provided to demonstrate the typical or interesting usage models of the Net libraries.

| Name | Description |
| ---- | ----------- |
| [berkeley_tcp_client](./docs/GUID-4277FB92-F576-488C-90B6-DA45473EADA7.html) | This example application shows a TCP Client demo using BSD API |
| [berkeley_tcp_server](./docs/GUID-60C87CDF-02EC-4B5E-894A-55787A225672.html) | This example application shows a TCP Server demo using BSD API |
| [berkeley_udp_client](./docs/GUID-EEF53CB2-E099-4E4B-9CB6-AF2756B180FB.html) | This example application shows a UDP Client demo using BSD API |
| [berkeley_udp_relay](./docs/GUID-C6BFC2D6-3624-446B-8362-FBF6D9B31747.html) | This example application shows a UDP Relay demo using BSD API |
| [berkeley_udp_server](./docs/GUID-0A0F6303-D515-480E-A92E-3F977D2B3874.html)  | This example application shows a UDP Server demo using BSD API |
| [iperf_demo](./docs/GUID-0BB22BA8-96A3-483B-BFB5-05880C32C220.html) | This example application shows running iperf and measuring the network performance |
| [snmpv3_nvm_mpfs](./docs/GUID-BA982D44-33D8-42B3-B3EA-2F77668ADC2A.html) | This example application shows a SNMP & Web Server with Microchip Proprietary File System (MPFS) in the Non-Volatile Memory (NVM)  |
| [snmpv3_sdcard_fatfs](./docs/GUID-2D574F52-B487-4339-8788-291189B93527.html) | This example application shows a SNMP & Web Server with FAT FS file system on the external SD card |
| [tcpip_client_server](./docs/GUID-E2811E1E-1CF2-425B-B890-CE0C370F2B82.html) | This example application shows a multi-threaded example with TCP and UDP server and client threads |
| [tcpip_tcp_client](./docs/GUID-8CA7886F-8C77-47FF-B785-DE2E9EB63938.html) | This example application shows a TCP Client demo using Harmony native API |
| [tcpip_tcp_client_server](./docs/GUID-61E9F2AD-ED2F-4645-91F4-B694307D02E6.html) | This example application shows a TCP Client and Server demo using Harmony native API |
| [tcpip_tcp_demo_at24mac](./docs/GUID-DF866D55-CAF1-4948-88F0-E03127A871AE.html) | This example application shows a TCP Client and Server demo with AT24MAC402 Serial EEPROM using Harmony native API |
| [tcpip_tcp_server](./docs/GUID-D5B98B05-A841-4C2B-B873-89154ECC504E.html)  | This example application shows a TCP Server demo using Harmony native API |
| [tcpip_udp_client](./docs/GUID-6785C3DF-EBF6-4C59-8270-5B9C1AB250FF.html) | This example application shows a UDP Client demo using Harmony native API |
| [tcpip_udp_client_server](./docs/GUID-AD9094FC-026D-4E85-99B0-1E38CC72040F.html) | This example application shows a UDP Client and Server demo using Harmony native API|
| [tcpip_udp_server](./docs/GUID-3928FD5F-E10D-4EDD-A5D7-5A61D735B362.html) | This example application shows a UDP Server demo using Harmony native API |
| [web_ftp_server_mpfs_fatfs](./docs/GUID-DB6DCC32-5BD0-48B7-BC90-234F7F5D4391.html)| This example application shows a Web server using NVM MPFS and FTP server using SDCARD FATFS|
| [web_net_server_nvm_mpfs](./docs/GUID-22D642CF-BEBC-4185-8F79-FAC726048557.html) | This example application shows a Web server with Microchip Proprietary File System (MPFS) in the Non-Volatile Memory (NVM) |
| [web_net_server_sdcard_fatfs](./docs/GUID-55333844-7DE6-4DAF-BBD6-4D89A838F7A4.html) | This example application shows a Web server with FAT FS file system on the external SD card |
| [wolfmqtt_demo](./docs/GUID-FF2EFAFD-35FD-4506-870B-1FD3945B1DC4.html) | This example application demonstrates a simple MQTT application using the 3rd party wolfMQTT library |
| [wolfssl_tcp_client](./docs/GUID-AE51F024-95BA-4BC2-9DF2-965F56C74224.html) | This example application shows a connection to a Web server using TLS to encrypt the connection with wolfSSL |
| [wolfssl_tcp_server](./docs/GUID-BB0724FA-3059-446A-A90F-D0BF11F232CB.html) | This example application shows Web server demo accepting encrypted TLS connections using wolfSSL |
____


[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71/blob/master/Microchip_SLA001.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71.svg)](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71.svg)]()

____

[![Developer Help](https://img.shields.io/badge/Youtube-Developer%20Help-red.svg)](https://www.youtube.com/MicrochipDeveloperHelp)
[![Developer Help](https://img.shields.io/badge/XWiki-Developer%20Help-torquiose.svg)](https://developerhelp.microchip.com/xwiki/bin/view/software-tools/harmony/)
[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71.svg?style=social)]()


