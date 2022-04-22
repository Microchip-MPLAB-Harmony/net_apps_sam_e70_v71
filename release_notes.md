---
title: Release notes
nav_order: 99
---

![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLABÂ® Harmony 3 Release Notes

## Harmony 3 Network application examples for  SAME70 and SAMV71 family  v3.8.0

### New Features
New features added in this release are as follows:

- Applications migrated from MHC to MCC
- Migration of select applications to the Net Plugin (beta)


### KNOWN ISSUES

The current known issues are as follows:
* wolfMQTT demos need to have the file third_party/wolfMQTT/mqtt_socket.c built without xc32 option 'Make warnings into errors'
    - That is because it uses the obsolete #include <sys/errno.h>
* HTTP_NET FreeRTOS demos need a heap size of 200K when using the XC32 v4.0.0 compiler.



### Development Tools

- [MPLAB® X IDE v6.00](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB® XC32 C/C++ Compiler v4.00](https://www.microchip.com/mplab/compilers) or later
- [Harmony net repository, 3.8.0](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.8.0)
- [Harmony net_apps_sam_e70_v71 demo apps repositories, 3.8.0](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71/tree/v3.8.0)
- MPLAB Code Configurator (MCC), 5.1.2
- MCC Harmony Core, 1.1.0


#### Development Kit Support

This release supports applications for the following development kits

| Development Kits |
| --- |
| [SAM E70 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAME70-XULT) |
| [SAM V71 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAMV71-XULT) |


## Full release notes

- See the full [Net 3.8.0 Release notes](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.8.0)

## Harmony 3 Network application examples for SAME70 and SAMV71 family  v3.7.0

### New Features
New features added in this release are as follows:

- Applications migrated from the net repository to this new application repository for SAM70 and SAMV71 development boards


### Development Tools

- [MPLAB® X IDE v5.45](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB® XC32 C/C++ Compiler v2.50](https://www.microchip.com/mplab/compilers) or later
- [IAR Embedded Workbench for ARM - version 8.50.1](https://www.iar.com/iar-embedded-workbench/) or later 
- [Harmony net repository, 3.7.0](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.7.0)
- [Harmony net_apps_sam_e70_v71 demo apps repositories, 3.7.0](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71/tree/v3.7.0)


#### Development Kit Support

This release supports applications for the following development kits

| Development Kits |
| --- |
| [SAM E70 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAME70-XULT) |
| [SAM V71 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAMV71-XULT) |


## Full release notes

- See the full [Net 3.7.0 Release notes](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.7.0)


