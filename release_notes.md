![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLAB® Harmony 3 Release Notes

## Network Application Examples for SAME70 and SAMV71 Family, v3.9.1

### New Features
- None

### Improvements and Bug Fixes
- Documentation updates

### Known Issues
- Same as previous release (v3.9.0)

### Development Tools
- Same as previous release (v3.9.0)

### Development Kit Support
- Same as previous release (v3.9.0)

## Net Release Notes
- Same as previous release (v3.9.0)

---

## Network Application Examples for SAME70 and SAMV71 Family, v3.9.0

### New Features
- All applications with TCP/IP Configurator Plugin.
- Support for MAC RX/TX Checksum offload feature


### Improvements and Bug Fixes
- IPERF throughput improvement.
- Fix for GMAC driver critical section access issue.
- ETHPHY driver write function.
- Fix for bind operation in berkeley module.
- Fix for 'IntegerSymbol not found' MCC failure.
- Updated demo documentation.

### Known Issues
- Build warnings for third_party/wolfMQTT/mqtt_socket.c in wolfMQTT demo. Workaround is to uncheck 'Make warnings into errors' in xc32 options.


### Development Tools

- [MPLAB® X IDE, v6.15](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB® XC32 C/C++ Compiler, v4.35](https://www.microchip.com/mplab/compilers) or later
- [MPLAB® Code Configurator(MCC) Plugin, v5.3.7](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator) or later
- [MPLAB® Harmony v3 net repository, v3.11.0](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.11.0)
- [MPLAB® Harmony v3 net\_apps\_sam\_e70\_v71 demo apps repository, v3.9.0](https://github.com/Microchip-MPLAB-Harmony/net_apps_sam_e70_v71/tree/v3.9.0)

### Development Kit Support

This release supports applications for the following development kit.

| Development Kits |
| --- |
| [SAM E70 Xplained Ultra Evaluation Kit](https://www.microchip.com/en-us/development-tool/DM320113) |
| [SAM V71 Xplained Ultra Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATSAMV71-XULT) |


## Net Release Notes

- See the [Net 3.11.0 Release Notes](https://github.com/Microchip-MPLAB-Harmony/net/tree/v3.11.0)

---

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

- [MPLAB� X IDE v6.00](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB� XC32 C/C++ Compiler v4.00](https://www.microchip.com/mplab/compilers) or later
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

- [MPLAB� X IDE v5.45](https://www.microchip.com/mplab/mplab-x-ide) or later
- [MPLAB� XC32 C/C++ Compiler v2.50](https://www.microchip.com/mplab/compilers) or later
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


