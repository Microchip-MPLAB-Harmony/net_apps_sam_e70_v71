---
grand_parent:  Harmony 3 TCP/IP Application for SAM E70/V71 Family
parent: TCP/IP Web Server NVM MPFS Application
title: MHC Configuration
nav_order: 1
has_children: false
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TCP/IP Web Server NVM MPFS MHC Configuration

The following Project Graph diagram shows the Harmony components included in the application demonstration.

* MHC is launched by selecting **Tools > Embedded > MPLAB® Harmony 3 Configurator** from the MPLAB X IDE and after successful database migration , TCP/IP demo project is ready to be configured and regenerated.

    ![tcpip_same70_v71_project](images/database_migration_successful.png)

* **TCP/IP Root Layer Project Graph**

  The root layer project shows that UART2 peripheral is selected to do read and write operation for TCP/IP commands.

  This is the basic configuration with SYS_CONSOLE, SYS_DEBUG and SYS_COMMAND modules. These modules are required for TCP/IP command execution.

  ![tcpip_same70_v71_project](images/tcpip_nvm_required_root_without_wolfssl.png)

  The file system component is required to select MPFS module. This is the below snapshot for the FS configuration.

  ![tcpip_same70_v71_project](images/FileSystem_mpfs_configuration.png)
  
  **FreeRTOS** component is required for RTOS application. For bare-metal (non-RTOS) **FreeRTOS** component should not be selected.
  
  TCP sockets calculate the ISN using the wolfSSL crypto library. 

* **TCP/IP Required Application**

    TCP/IP demo use these application module components for this demo.
    
    **Announce** module to discover the Microchip devices within a local network.
    
    **DHCP Client** module to discover the IPv4 address from the nearest DHCP Server.
    
    **HTTP** module is selected to run the web_server for the port number **80**.

    ![tcpip_same70_v71_project](images/tcpip_app_module_selected_with_http.png)

    By default **Enable MPFS upload via HTTP** is selected. This is helpful When external EEPROM or serial Flash is used for storage, the option to upload the newly created image to the board is available.
    
    
* **TCPIP Driver Layer**

  **Internal ethernet driver(gmac)** is enabled with the external **LAN8740 PHY driver** library for SAME70 demonstartion. 

  ![tcpip_same70_v71_project](images/tcpip_driver_component.png)

  For **SAM V71** demonstration , **LAN8061 PHY driver** ia selcted along with GMAC **Internal ethernet driver**.

  ![tcpip_same70_v71_project](images/tcpip_driver_component_v71.png)

  The MIIM Driver supports asynchronous read/write and scan operations for accessing the external PHY registers and notification when MIIM operations have completed.
