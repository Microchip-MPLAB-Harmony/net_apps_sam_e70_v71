# TCP/IP IPERF Application

IPERF is a standard networking tool that helps to measure networking bandwidth and performance.

The iperf demo creates an application that can be used for running iperf and measuring the network performance.

**TCP/IP IPERF Application MHC Configuration**

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

    TCP/IP demo use these application module components for this demo.

    **Announce** module to discover the Microchip devices within a local network.

    **DHCP Client** module to discover the IPv4 address from the nearest DHCP Server.

    **IPERF** module is used to run the network benchmark program.

    The default sizes of the Iperf RX and TX buffers are set to 4KB. The performance of a socket is highly dependent on the size of its buffers. So it's a good idea to use as large as possible buffers for the sockets that need high throughput. Bigger buffers will help obtain higher performance numbers.

    The other iperf parameters could be left with their default values.

    For a description of the parameters see the **Iperf Module** of the TCIP Library document.

    ![tcpip_same70_v71_project](../../docs/GUID-AD9443F4-FF66-47D7-95AE-647C7061C79D-low.png)

-   **TCPIP Driver Layer**

    **Internal ethernet driver\(gmac\)** is enabled with the external **LAN8740 PHY driver** library for SAME70 demonstartion.

    ![tcpip_same70_v71_project](../../docs/GUID-48399DC2-EE8A-44B7-A8EF-411D75C8A3D2-low.png)

    For **SAM V71** demonstration , **LAN8061 PHY driver** ia selcted along with GMAC **Internal ethernet driver**.

    ![tcpip_same70_v71_project](../../docs/GUID-A9A5B923-0152-4FED-83C4-B21E2268B15F-low.png)

    The MIIM Driver supports asynchronous read/write and scan operations for accessing the external PHY registers and notification when MIIM operations have completed.


**TCP/IP IPERF Application Hardware Configuration**

This is the section describes the hardware configuration for ATSAM E70/V71 Xplained Ultra Evaluation Kit and one can be used for the respective application demonstration.

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


**TCP/IP IPERF Running Application**

This table list the name and location of the MPLAB X IDE project folder for the demonstration.

|Project Name|Target Device|Target Development Board|Description|
|------------|-------------|------------------------|-----------|
|sam\_e70\_xult.X|ATSAME70Q21B|SAME70 Xplained Ultra + LAN8740 PHY Daughter board|Demonstrates the IPERF application on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Bare Metal \( non-RTOS\).|
|sam\_e70\_xult\_freertos.X|ATSAME70Q21B|SAME70 Xplained Ultra + LAN8740 PHY Daughter board|Demonstrates the IPERF application on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Freertos.|
|sam\_v71\_xult.X|ATSAMV71Q21B|SAMV71 Xplained Ultra|Demonstrates the IPERF application on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Bare Metal \(non-RTOS\).|
|sam\_v71\_xult\_freertos.X|ATSAMV71Q21B|SAME70 Xplained Ultra|Demonstrates the IPERF application on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Freertos.|

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

    1.  When the DHCP client is enabled in the demonstration, wait for the DHCP server to assign an IP address for the development board.

    2.  Use the Announce service or ping to get the IP address of the board.

4.  Test and Output:

    -   The iperf demo is interactive, using a set of special iperf commands that are supported by the standard set of TCP/IP commands.

    -   Pressing "help iperf" at the command prompt displays the list of the available iperf commands/options:

        ![tcpip_iperf_project](../../docs/GUID-02955488-1650-45A8-B46B-3CB43FEEAE0B-low.png)

    A brief description of the most important settings/commands follows:

    -   "iperf": starts the iperf session. Use "iperf -s" for a server connection or "iperf -c address" for a client connection

        -   Look at the Iperf Module for examples of iperf benchmarks

    -   "iperfk" kills an ongoing iperf test. This is mainly useful for killing a iperf server waiting for connections. But the command could be also used to abort client test.

    -   "iperfi -a address" allows to set the interface to use for iperf when the test is run on a multi-interface host. When multiple iperf instabces are used, the extra parameter "-i" could be used to specify the iperf index to which the command refers to.

    -   "iperfs" command could be used to set the socket TX or RX buffer size dynamically. For example:

        -   "iperfs -tx 2048"

    **Note:**

    -   The iperf demo uses very few TCP/IP modules, to minimize the stack overhead and to obtain good throughput numbers.

        -   However ICMP server, NBNS and Announce modules are enabled to assist in the discovery of the board on the network.

        -   DHCP client is also enabled for acquiring a valid IP address within the network.

        -   Some of these modules could be further disabled if they are not used in the specific network environment of the application.

    -   The data throughput could vary dependent on the iperf socket settings and the network conditions.

        -   Larger TX and RX buffers will increase the corresponding throughput.

        -   Various devices on the network on the link between the board and the machine running the iperf application \(switches, routers, etc.\) could also affect the throughput.

        -   User can eliminate these effects by connecting the board running the iperf demo directly to the machine running the test on the PC side \(Linux, Windows, etc.\)


**Parent topic:**[MPLAB® Harmony 3 TCP/IP Application for SAM E70/V71 Family](../../docs/GUID-1B418433-257B-421A-B251-3443D46108F8.md)

