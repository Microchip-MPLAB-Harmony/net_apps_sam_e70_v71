---
grand_parent:  Harmony 3 TCP/IP Application for SAM E70/V71 Family
parent: TCP/IP SNMP SDMMC FATFS Application
title: MHC Configuration
nav_order: 1
has_children: false
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TCP/IP SNMP SDMMC FATFS MHC Configuration

The following Project Graph diagram shows the Harmony components included in the application demonstration.

* MHC is launched by selecting **Tools > Embedded > MPLAB® Harmony 3 Configurator** from the MPLAB X IDE and after successful database migration , TCP/IP demo project is ready to be configured and regenerated.

    ![tcpip_same70_v71_project](images/database_migration_successful.png)

* **TCP/IP Root Layer Project Graph**

    HSMCI ( High Speed Multimedia Card Interface ) peripheral supports Multimedia card communication. SD multimedia memory card ( SDMMC ) driver provides abstraction to communicate with SD/eMMC card through the HSMCI peripheral library interface. The TCP/IP application use FAT file system with SDMMC driver to read/write to an SD card. 

    ![tcpip_same70_v71_project](images/tcpip_sdmmc_required_root.png)

    Wolfssl crypto module enabled with MD5,SHA authentication  and AES encryption/decryption privacy protocol are enabled. Wolfssl library configured with open secured socket.
	
	![tcpip_same70_v71_project](images/wolfssl_demo_required_configuration.png)

	**FreeRTOS** component is required for RTOS application. For bare-metal (non-RTOS) **FreeRTOS** component should not be selected.

	The FAT file system is selected for this application to read and write from the SDHC( sdcard ) module. This is the below snapshot for the FAT FS configuration.

    ![tcpip_same70_v71_project](images/fatfs_configuration.png)

* **TCP/IP required application**
    
	TCP/IP demo use these application module components for this demo.
    
    **Announce** module to discover the Microchip devices within a local network.
    
    **DHCP Client** module to discover the IPv4 address from the nearest DHCP Server. 
    
    **HTTPNET** module is selected to run the web_server for the port number **443**. 
    
    **SNMP** and **SNMPv3** are an application layer protocols that facilitates the exchange of management information among network devices.     

    ![tcpip_same70_v71_project](images/tcpip_snmp_demo_app.png)

    **Maximum SNMP Message Size** can be increased and the value should be multiple of 32 bytes for larger GET-Bulk response.

* **TCPIP driver layer**

    **Internal ethernet driver(gmac)** is enabled with the external **LAN8740 PHY driver** library for SAME70 demonstartion. 

    ![tcpip_same70_v71_project](images/tcpip_driver_component.png)

    For **SAM V71** demonstration , **LAN8061 PHY driver** ia selcted along with GMAC **Internal ethernet driver**.

    ![tcpip_same70_v71_project](images/tcpip_driver_component_v71.png)

    The MIIM Driver supports asynchronous read/write and scan operations for accessing the external PHY registers and notification when MIIM operations have completed.
