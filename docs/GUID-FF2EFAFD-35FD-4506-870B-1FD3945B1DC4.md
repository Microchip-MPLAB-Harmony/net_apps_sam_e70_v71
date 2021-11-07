# TCP/IP WolfSSL MQTT Application

The wolfMQTT application demonstrates a simple MQTT application using the 3rd party wolfMQTT library.

The application uses the console to implement a simple set of commands to start a MQTT connection to a selected broker.

The connection parameters can be adjusted using various MQTT related commands.

This demonstration uses the NET\_PRES layer which supports encrypted communication through an external service provider for TLS support \(usually wolfSSL\).

**TCP/IP TCP WolfSSL Client MHC Configuration**

The following Project Graph diagram shows the Harmony components included in the TCP Client demonstration application.

-   MHC is launched by selecting **Tools \> Embedded \> MPLAB® Harmony 3 Configurator** from the MPLAB X IDE and after successful database migration , TCP/IP demo project is ready to be configured and regenerated.

    ![tcpip_same70_v71_project](GUID-C92C7C5E-B6C4-44C7-8CC3-4A3E76484D21-low.png)

-   **TCP/IP Root Layer Project Graph**

    The root layer project shows that USART1 peripheral is selected to do read and write operation for TCP/IP commands.

    This is the basic configuration with SYS\_CONSOLE, SYS\_DEBUG and SYS\_COMMAND modules. These modules are required for TCP/IP command execution.

    ![tcpip_same70_v71_project](GUID-7A3B8E65-4070-4D3D-A96F-06F36F76E806-low.png)

    **NOTE:-****FreeRTOS** component is required for RTOS application. For bare-metal \(non-RTOS\) **FreeRTOS** component should not be selected.

    The below snapshot provides the details of the wolfssl\_crypto, wolfSSL and presentation layer configuration.

    ![tcpip_same70_v71_project](GUID-4922A348-F1C5-4FEC-B478-9C64FF2CE644-low.png)

    The configuration options for the wolfMQTT are the standard ones supported by wolfMQTT \(see wolfMQTT site\). Note that the project has already selected the 3rd party wolfMQTT and wolfSSL libraries \(for supporting encrypted connections\).

    The NET\_PRES layer is also needed because the Harmony wolfMQTT NET glue layer uses the NET\_PRES to handle the connections to the broker.

    Use the github repositories for wolfMQTT and wolfSSL.

    To configure the wolfMQTT and the wolfMWQTT NET glue layer, select the "wolfMQTT Library" module:

    ![tcpip_same70_v71_project](GUID-48CEF35D-B9B2-4F91-A43C-2461163EF0F4-low.png)

    The configuration options for the wolfMQTT NET glue allow the application to:

    -   force TLS mode

    -   enable IPv6 operation

    -   set the maximum length of the MQTT broker

    -   enable the NET glue debug and debug strings

    -   set the allocation functions

    -   set the MQTT TX and RX buffer sizes

    -   generate the custom MQTT application template:

    -   the files app\_mqtt\_task.c, app\_mqtt\_task.h and app\_mqtt\_commands.c will be added to the project

-   **TCP/IP Required Application**

    TCP/IP demo use these application module components for this demo.

    **Announce** module to discover the Microchip devices within a local network.

    **DHCP Client** module to discover the IPv4 address from the nearest DHCP Server.

    **DNS Client** provides DNS resolution capabilities to the stack. During these components selection, the required transport and network modules are also selected.

    ![tcpip_wolfssl_tcp_client_project](GUID-62637283-EFD0-4921-B5DD-4C8B573E71FE-low.png)

-   **TCPIP Driver Layer**

    **Internal ethernet driver\(gmac\)** is enabled with the external **LAN8740 PHY driver** library for SAME70 demonstartion.

    ![tcpip_same70_v71_project](GUID-48399DC2-EE8A-44B7-A8EF-411D75C8A3D2-low.png)

    For **SAM V71** demonstration , **LAN8061 PHY driver** ia selcted along with GMAC **Internal ethernet driver**.

    ![tcpip_same70_v71_project](GUID-A9A5B923-0152-4FED-83C4-B21E2268B15F-low.png)

    The MIIM Driver supports asynchronous read/write and scan operations for accessing the external PHY registers and notification when MIIM operations have completed.


**TCP/IP TCP WolfSSL Client Hardware Configuration**

This section describes the hardware configuration for ATSAM E70/V71 Xplained Ultra Evaluation Kit and one can be used for the respective application demonstration.

1.  This section describes the required default hardware configuration use SAM E70 Xplained Ultra Evaluation Kit

    -   Ensure ERASE jumper is Open.

    -   Open the J805 Jumper

    -   Refer to the SAM E70/V71 Ethernet Starter Kit [User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/SAME70_Xplained_Ultra_Evaluation_User's%20Guide_DS70005389B.pdf)

        ![required_hardware](GUID-224B1E69-E08E-4BFF-8AFF-5FFFEB5313AC-low.png)

    -   Insert the LAN8740 PHY daughter board on the ETHERNET PHY MODULE header.

    -   Connect the micro USB cable from the computer to the DEBUG USB connector on the SAM E70 Xplained Ultra Evaluation Kit

    -   Establish a connection between the router/switch with the SAM E70 Xplained Ultra Evaluation Kit through the RJ45 connector

        ![required_hardware](GUID-E2774052-6F1A-4E61-9171-CA59A3003A8F-low.png)

2.  This section describes the required default hardware configuration use SAM V71 Xplained Ultra Evaluation Kit

    -   No hardware related configuration or jumper setting changes are necessary

    -   Ensure ERASE jumper is Open

    -   Refer to the SAM E70/V71 Ethernet Starter Kit [User Guide](http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42408-SAMV71-Xplained-Ultra_User-Guide.pdf)

        ![required_hardware](GUID-876C08BC-3626-40D3-909D-569AAA9BE60A-low.png)

    -   Connect the micro USB cable from the computer to the DEBUG USB connector on the SAM V71 Xplained Ultra Evaluation Kit

    -   Establish a connection between the router/switch with the SAM V71 Xplained Ultra Evaluation Kit through the RJ45 connector

        ![required_hardware](GUID-886153FC-A621-4C06-803D-6094B48B6132-low.png)


**TCP/IP WolfSSL MQTT Running Application**

This table list the name and location of the MPLAB X IDE project folder for the demonstration.

|Project Name|Target Device|Target Development Board|Description|
|------------|-------------|------------------------|-----------|
|sam\_e70\_xult.X|ATSAME70Q21B|SAME70 Xplained Ultra + LAN8740 PHY Daughter board|Demonstrates the wolfMQTT on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Bare Metal \( non-RTOS\).|
|sam\_e70\_xult\_freertos.X|ATSAME70Q21B|SAME70 Xplained Ultra + LAN8740 PHY Daughter board|Demonstrates the wolfMQTT on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Freertos.|

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

3.  Execution : The wolfMQTT demo is interactive, using a set of special MQTT commands that have been added to this demo.

    Pressing "mqtt help" at the command prompt displays the list of the available commands/options:

4.  Most of the commands are self explanatory.

    All settings come with default values.

    A brief description of the most important settings/commands follows:

    ![tcpip_wolfmqtt_server_project](GUID-BD1C9BB5-F5F3-4307-950A-00C91C0CFC91-low.png)


-   "mqtt broker": sets the MQTT broker to connect to. The default value is "iot.eclipse.org"

-   "mqtt port": sets the MQTT port to use. Default is 1883

-   "mqtt qos": setd the QoS. Default is MQTT\_QOS\_0.

-   "mqtt topi": sets the MQTT topic. Default is "MQTT\_NET\_Client topic"

-   "mqtt tls": sets the force TLS flag. Default is 0.

-   "mqtt user": sets the user name. Default is "MQTT\_NET\_User"

-   "mqtt txbuf": sets the size of the TX buffer for the connection. Default is 1024

-   "mqtt rxbuf": sets the size of the RX buffer for the connection. Default is 1024


**Note:** The connection to the broker is normally done using the port number: 1883 for plain connections, 8883 for encrypted ones.

1.  Wolf MQTT Connection:

    Using the "force TLS" will force an encrypted connection regardless of the port number.

    The wolfMQTT demo is based on the examples provided by wolfMQTT.

    To allow a simple usage of the wolfMQTT library, a wolfMQTT NET Glue layer has been added to the Harmony port,

    The NET glue layer takes care of all the connections to the broker, supporting both encrypted and plain connections.

    This way the application does not have to be concerned with the communication mechanisms and can use directly the wolfMQTT API on a Harmony platform without the need to add other supporting code.

    The configuration parameters for the wolfmqtt demonstration are defined in the app\_mqtt\_task.h file that's part of the project.

    The configuration parameters for the NET glue layer can be configured with MHC \(see MHC Configuration\).

    The demo starts with all parameters having default values \(see above\).

    If needed, parameters can be adjusted as the application requires.

    Then a connection to the broker can be started using the command: "mqtt start".

    A successful connection should render the following output:

    The "mqtt stop" command can be used to request the ongoing MQTT transaction to be aborted.

    The "mqtt stat" can be used to display the current state of the MQTT connection cycle.

    ![tcpip_wolfmqtt_server_project](GUID-1571EF5B-451A-40C2-9042-46B4470C78C5-low.png)


**Parent topic:**[MPLAB® Harmony 3 TCP/IP Application for SAM E70/V71 Family](GUID-1B418433-257B-421A-B251-3443D46108F8.md)

