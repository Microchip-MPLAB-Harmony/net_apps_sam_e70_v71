# TCP/IP Berkeley UDP Relay

The Berkeley UDP Relay configuration demonstrates the use of multiple sockets for both sending and receiving. There are three different sub-functions of this application:

-   UDP Relay, which accepts UDP packets on one socket, and sends the packets out on a different socket

-   UDP Relay Client, which generates UDP traffic that is compatible with the UDP Relay Server

-   UDP Relay Server, which receives and checks traffic for a packet count and reports is any packets are dropped


**TCP/IP Berkeley UDP Relay MHC Configuration**

The following Project Graph diagram shows the Harmony components included in the TCP Client demonstration application.

-   MHC is launched by selecting **Tools \> Embedded \> MPLAB® Harmony 3 Configurator** from the MPLAB X IDE and after successful database migration , TCP/IP demo project is ready to be configured and regenerated.

    ![tcpip_same70_v71_project](../../docs/GUID-C92C7C5E-B6C4-44C7-8CC3-4A3E76484D21-low.png)

-   **TCP/IP Root Layer Project Graph**

    The root layer project shows that USART1 peripheral is selected to do read and write operation for TCP/IP commands.

    This is the basic configuration with SYS\_CONSOLE, SYS\_DEBUG and SYS\_COMMAND modules. These modules are required for TCP/IP command execution.

    ![tcpip_same70_v71_project](../../docs/GUID-ECCB303C-5096-4F8B-B21A-66FFFE991BFD-low.png)

    **FreeRTOS** component is required for RTOS application. For bare-metal \(non-RTOS\) **FreeRTOS** component should not be selected.

    **NOTE** - The above diagram contains **FreeRTOS** component and that is required for RTOS application. For bare-metal\(non-RTOS\) **FreeRTOS** component shouldn't be selected.

    ![tcpip_same70_v71_project](../../docs/GUID-2B48C2D8-03D6-4BA9-B8DF-057F1A3B74C1-low.png)

-   **TCP/IP Required Application**

    TCP/IP demo use these application module components for this demo. **Announce** module to discover the Microchip devices within a local network.

    **DHCP Client** module to discover the IPv4 address from the nearest DHCP Server.

    **DNS Client** provides DNS resolution capabilities to the stack.

    **Berkeley API** module provides the Berkeley\_Socket\_Distribution \(BSD\) wrapper to the native Microchip TCP/IP Stack APIs. During this component selection, the required transport and network modules are also selected.

    ![tcpip_same70_v71_project](../../docs/GUID-61755451-D441-419E-BEA7-C45E078E0B0A-low.png)

-   **TCPIP Driver Layer**

    **Internal ethernet driver\(gmac\)** is enabled with the external **LAN8740 PHY driver** library for SAME70 demonstartion.

    ![tcpip_same70_v71_project](../../docs/GUID-48399DC2-EE8A-44B7-A8EF-411D75C8A3D2-low.png)

    For **SAM V71** demonstration , **LAN8061 PHY driver** ia selcted along with GMAC **Internal ethernet driver**.

    ![tcpip_same70_v71_project](../../docs/GUID-A9A5B923-0152-4FED-83C4-B21E2268B15F-low.png)

    The MIIM Driver supports asynchronous read/write and scan operations for accessing the external PHY registers and notification when MIIM operations have completed.


**TCP/IP Berkeley UDP Relay Hardware Configuration**

This is the section describes the hardware configuration for ATSAM E70/V71 Xplained Ultra Evaluation Kit and one can be used for the respective application demonstration.

1.  This section describes the required default hardware configuration use SAM E70 Xplained Ultra Evaluation Kit

    -   Ensure ERASE jumper is Open.

    -   Open the J805 Jumper

    -   Refer to the SAM E70/V71 Ethernet Starter Kit [User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/SAME70_Xplained_Ultra_Evaluation_User's%20Guide_DS70005389B.pdf)

        ![required_hardware](../../docs/GUID-224B1E69-E08E-4BFF-8AFF-5FFFEB5313AC-low.png)

    -   Insert the LAN8740 PHY daughter board on the ETHERNET PHY MODULE header.

    -   Connect the micro USB cable from the computer to the DEBUG USB connector on the SAM E70 Xplained Ultra Evaluation Kit

    -   Establish a connection between the router/switch with the SAM E70 Xplained Ultra Evaluation Kit through the RJ45 connector

        ![rqeuired_hardware](../../docs/GUID-E2774052-6F1A-4E61-9171-CA59A3003A8F-low.png)

2.  This section describes the required default hardware configuration use SAM V71 Xplained Ultra Evaluation Kit

    -   No hardware related configuration or jumper setting changes are necessary

    -   Ensure ERASE jumper is Open

    -   Refer to the SAM E70/V71 Ethernet Starter Kit [User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42408-SAMV71-Xplained-Ultra_User-Guide.pdf)

        ![required_hardware](../../docs/GUID-876C08BC-3626-40D3-909D-569AAA9BE60A-low.png)

    -   Connect the micro USB cable from the computer to the DEBUG USB connector on the SAM V71 Xplained Ultra Evaluation Kit

    -   Establish a connection between the router/switch with the SAM V71 Xplained Ultra Evaluation Kit through the RJ45 connector

        ![required_hardware](../../docs/GUID-886153FC-A621-4C06-803D-6094B48B6132-low.png)


**TCP/IP Berkeley UDP Relay Running Application**

This table list the name and location of the MPLAB X IDE project folder for the demonstration.

|Project Name|Target Device|Target Development Board|Description|
|------------|-------------|------------------------|-----------|
|sam\_e70\_xult.X|ATSAME70Q21B|SAME70 Xplained Ultra + LAN8740 PHY Daughter board|Demonstrates the Berkeley UDP Relay on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Bare Metal \( non-RTOS\).|
|sam\_e70\_xult\_freertos.X|ATSAME70Q21B|SAME70 Xplained Ultra + LAN8740 PHY Daughter board|Demonstrates the Berkeley UDP Relay on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Freertos.|
|sam\_v71\_xult.X|ATSAMV71Q21B|SAMV71 Xplained Ultra|Demonstrates the Berkeley UDP Relay on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Bare Metal \(non-RTOS\).|
|sam\_v71\_xult\_freertos.X|ATSAMV71Q21B|SAME70 Xplained Ultra|Demonstrates the Berkeley UDP Relay on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Freertos.|

The following Project Graph diagram shows the Harmony components included in the FreeRTOS TCP/IP Berkeley UDP Relay demonstration application.

There are several different commands available in the demonstration from the console port:

-   current - Displays the current configuration

-   start - Starts the packet relay service

-   stop - Stops the packet relay service


-   relayhost < host name \> - Sets the host to which packets are to be relayed

-   relayport < port number \> - Sets the port to which packets are to be relayed

-   ipv4port < port number \> - Sets the IPv4 port that the relay server will listen to for packets to relay

-   ipv6port < port number \> - Sets the IPv6 port that the relay server will listen to for packets to relay


-   relayclienthost < host name \> - Sets the host to which packets are to be sent

-   relayclientiter < number \> - The number of packets to generate

-   relayclientstart - Starts the relay client. This command must be used after the general application start. After a start is called, and the first packet is received by either the relay or the relay server, periodic updates will be sent to the console with information about the number of packets and bytes received.


**Running Demonstration Steps**

1.  Build and download the demonstration project on the target board.

2.  If the board has a UART connection:

    1.  A virtual COM port will be detected on the computer, when the USB cable is connected to USB-UART connector.

    2.  Open a standard terminal application on the computer \(like Hyper-terminal or Tera Term\) and configure the virtual COM port.

    3.  Set the serial baud rate to 115200 baud in the terminal application.

    4.  See that the initialization prints on the serial port terminal.

    5.  When the DHCP client is enabled in the demonstration, wait for the DHCP server to assign an IP address for the development board. This will be printed on the serial port terminal.

        -   Alternatively: Use the Announce service or ping to get the IP address of the board.

        -   Run **tcpip\_discoverer.jar** to discover the IPv4 and IPv6 address for the board.

3.  Execution:


-   To test the UDP packet relay with IPv4, send the following commands,

    -   relayclienthost < ip address of the relay client \>

    -   relayclientiter < number of packets to relay \>

    -   relayhost < ip address of the host to which packets are to be relayed \>

    -   relayport < port number to which packets are to be relayed \>

    -   ipv4port < port number to which the relay server listens to, for packets to relay \>

    -   current

    -   start

    -   relayclientstart

-   Output - The above steps will relay the UDP packet from the host address set using the **relayclienthost** command to the destination address set by the command **relayhost**.

    The relay packet will be received at the port set by command **relayport**.


**Parent topic:**[MPLAB® Harmony 3 TCP/IP Application for SAM E70/V71 Family](../../docs/GUID-1B418433-257B-421A-B251-3443D46108F8.md)

