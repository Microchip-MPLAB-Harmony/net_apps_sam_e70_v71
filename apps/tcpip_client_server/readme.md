# TCP/IP TCP and UDP Client Server

The TCP/IP TCP & UDP Client Server configuration demonstrates creating a network client and a network server that uses both TCP and UDP socket APIs respectivly.

**TCP/IP TCP and UDP Client Server MHC Configuration**

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

    TCP sockets calculate the ISN using the wolfSSL crypto library.

-   **TCP/IP Required Application**

    TCP/IP demo use these application module components for this demo. **Announce** module to discover the Microchip devices within a local network.

    **DHCP Client** module to discover the IPv4 address from the nearest DHCP Server.

    **DNS Client** provides DNS resolution capabilities to the stack.

    **Berkeley API** module provides the Berkeley\_Socket\_Distribution \(BSD\) wrapper to the native Microchip TCP/IP Stack APIs. During this component selection, the required transport and network modules are also selected.

    ![tcpip_same70_v71_project](../../docs/GUID-62637283-EFD0-4921-B5DD-4C8B573E71FE-low.png)

-   **TCPIP Driver Layer**

    **Internal ethernet driver\(gmac\)** is enabled with the external **LAN8740 PHY driver** library for SAME70 demonstartion.

    ![tcpip_same70_v71_project](../../docs/GUID-48399DC2-EE8A-44B7-A8EF-411D75C8A3D2-low.png)

    For **SAM V71** demonstration , **LAN8061 PHY driver** ia selcted along with GMAC **Internal ethernet driver**.

    ![tcpip_same70_v71_project](../../docs/GUID-A9A5B923-0152-4FED-83C4-B21E2268B15F-low.png)

    The MIIM Driver supports asynchronous read/write and scan operations for accessing the external PHY registers and notification when MIIM operations have completed.


**TCP/IP TCP and UDP Client Server Hardware Configuration**

This section describes the hardware configuration for ATSAM E70/V71 Xplained Ultra Evaluation Kit and one can be used for the respective application demonstration.

1.  This section describes the required default hardware configuration use SAM E70 Xplained Ultra Evaluation Kit

    -   Ensure ERASE jumper is Open.

    -   Open the J805 Jumper

    -   Refer to the SAM E70/V71 Ethernet Starter Kit [User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/SAME70_Xplained_Ultra_Evaluation_User's%20Guide_DS70005389B.pdf)

        ![required_hardware](../../docs/GUID-224B1E69-E08E-4BFF-8AFF-5FFFEB5313AC-low.png)

    -   Insert the LAN8740 PHY daughter board on the ETHERNET PHY MODULE header.

    -   Connect the micro USB cable from the computer to the DEBUG USB connector on the SAM E70 Xplained Ultra Evaluation Kit

    -   Establish a connection between the router/switch with the SAM E70 Xplained Ultra Evaluation Kit through the RJ45 connector

        ![required_hardware](../../docs/GUID-E2774052-6F1A-4E61-9171-CA59A3003A8F-low.png)

2.  This section describes the required default hardware configuration use SAM V71 Xplained Ultra Evaluation Kit

    -   No hardware related configuration or jumper setting changes are necessary

    -   Ensure ERASE jumper is Open

    -   Refer to the SAM E70/V71 Ethernet Starter Kit [User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42408-SAMV71-Xplained-Ultra_User-Guide.pdf)

        ![required_hardware](../../docs/GUID-876C08BC-3626-40D3-909D-569AAA9BE60A-low.png)

    -   Connect the micro USB cable from the computer to the DEBUG USB connector on the SAM V71 Xplained Ultra Evaluation Kit

    -   Establish a connection between the router/switch with the SAM V71 Xplained Ultra Evaluation Kit through the RJ45 connector

        ![required_hardware](../../docs/GUID-886153FC-A621-4C06-803D-6094B48B6132-low.png)


**TCP/IP TCP and UDP Client Server Running Application**

The Client Server configuration use combination of both TCP and UDP sockets for both client and server communication.

This table list the name and location of the MPLAB X IDE project folder for the demonstration.

|Project Name|Target Device|Target Development Board|Description|
|------------|-------------|------------------------|-----------|

\|sam\_e70\_xult\_freertos.X \| ATSAME70Q21B \| SAME70 Xplained Ultra + LAN8740 PHY Daughter board \| Demonstrates the TCP/IP TCP Client Server on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on FreeRTOS. \|

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

3.  Execution :

    1.  Once the demonstration starts executing, we can observe the current IP settings at the Tera Term terminal port.

    2.  Using "help" will display the available commands that can be used for this demo.

    3.  The application can create 4 separate connections, each one running in its own thread:

        -   A TCP client connection

        -   A TCP server connection

        -   A UDP client connection

        -   A UDP server connection

    4.  Each connection has its own set of commands.

        -   They can open or close the sockets, send messages to the socket they are connected to, they can display the received messages, etc.

        -   Using your preferred networking tools on the PC side \( netcat, Packet Sender, Hercules, python scripts, etc., etc. \) create sockets that talk to the ones opened by the client server application.

        -   This way you can exchange data with any/all of the communication threads that the demonstration creates.

    5.  After the successful broad bring up, the console output becomes

        ![tcpip_client_server_project](../../docs/GUID-9304888B-767B-42C8-9F67-2261BBA85FCB-low.png)

    6.  For TCP Client test, input the following command from the serial port: **openurl < url \>** - The < url \> argument must be a fully formed URL; for instance, http://www.microchip.com/.

        For this above URL , the DNS module will make a DNS query. Then it will open a connection to the requested URL and perform a simple HTTP GET command. The response received from the server will be printed on the terminal application through the serial port.

        The expected output -

        ![tcpip_client_server_project](../../docs/GUID-6649DFA6-FBD6-4B3C-B39C-CCF0C9C2B658-low.png)

    7.  For TCP Server test, the TCP Client application is required to run on the computer \(SocketTest, Packet Sender etc\). In this demonstration, we use the program, SocketTest \(http://sockettest.sourceforge.net/\). This demonstration is tested with **SocketTest v3.0**.

        -   Open the **SocketTest** software and set the configuration as shown in the following figure.

            ![tcpip_tcp_client_server_project](../../docs/GUID-3849863E-B78B-4D14-86F1-1F4DB149FD92-low.png)

        -   Press the Connect button on the **SocketTest** software after setting the configuration. The serial terminal indicates that the connection has been established.

        -   Type any message in the message box of the **SocketTest** program, and press the Send button. The Server running on the development board will echo back the message to the **SocketTest** program.

            ![tcpip_tcp_client_server_project](../../docs/GUID-756557C3-6969-4D22-B8EC-FE483685B9C2-low.png)

    8.  Simillarly UDP Client and Server test also performed using **SocketTest** tool.


**Parent topic:**[MPLAB® Harmony 3 TCP/IP Application for SAM E70/V71 Family](../../docs/GUID-1B418433-257B-421A-B251-3443D46108F8.md)
