---
grand_parent:  Harmony 3 TCP/IP Application for SAM E70/V71 Family
parent: TCP/IP Berkeley UDP Relay
title: Running Application
nav_order: 3
has_children: false
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TCP/IP Berkeley UDP Relay Running Application

## MPLAB X IDE Project
This table list the name and location of the MPLAB X IDE project folder for the demonstration.

|Project Name|  Target Device|  Target Development Board | Description  |
|:-------------:|:---------:|:---------:|:---------:|
|sam_e70_xult.X | ATSAME70Q21B | SAME70 Xplained Ultra + LAN8740 PHY Daughter board | Demonstrates the Berkeley UDP Relay on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Bare Metal ( non-RTOS).  |
|sam_e70_xult_freertos.X | ATSAME70Q21B | SAME70 Xplained Ultra + LAN8740 PHY Daughter board | Demonstrates the Berkeley UDP Relay on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This implementation is based on Freertos.  |
|sam_v71_xult.X | ATSAMV71Q21B | SAMV71 Xplained Ultra | Demonstrates the Berkeley UDP Relay on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Bare Metal (non-RTOS).  |
|sam_v71_xult_freertos.X | ATSAMV71Q21B | SAME70 Xplained Ultra | Demonstrates the Berkeley UDP Relay on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Freertos.  |


The following Project Graph diagram shows the Harmony components included in the FreeRTOS TCP/IP Berkeley UDP Relay demonstration application.

## Demonstration Commands

There are several different commands available in the demonstration from the console port:

### General Application Commands:

- current - Displays the current configuration

- start - Starts the packet relay service

- stop - Stops the packet relay service

### Relay Service Configuration:

* relayhost < host name > - Sets the host to which packets are to be relayed

* relayport < port number > - Sets the port to which packets are to be relayed

* ipv4port < port number > - Sets the IPv4 port that the relay server will listen to for packets to relay

* ipv6port < port number > - Sets the IPv6 port that the relay server will listen to for packets to relay

### Relay Client Configuration and Commands:

- relayclienthost <host name> - Sets the host to which packets are to be sent

- relayclientiter <number> - The number of packets to generate

- relayclientstart - Starts the relay client. This command must be used after the general application start. After a start is called, and the first packet is received by either the relay or the relay server, periodic updates will be sent to the console with information about the number of packets and bytes received.


## Running the demonstration

1. Configure the Development Board as given **[Configure Hardware](readme_hardware_configuration.md)**.

2. Make the demonstration setup as shown [NOTE](../../../readme.md).

3. Build and download the demonstration project on the target board.

4. If the board has a UART connection:

    1. A virtual COM port will be detected on the computer, when the USB cable is connected to USB-UART connector.

    2. Open a standard terminal application on the computer (like Hyper-terminal or Tera Term) and configure the virtual COM port.

    3. Set the serial baud rate to 115200 baud in the terminal application.

    4. See that the initialization prints on the serial port terminal.

    5. When the DHCP client is enabled in the demonstration, wait for the DHCP server to assign an IP address for the development board. This will be printed on the serial port terminal.

5. Alternatively:

    1. When the DHCP client is enabled in the demonstration, wait for the DHCP server to assign an IP address for the development board.

    2. Use the Announce service or ping to get the IP address of the board.


6. Test and Output with IPv4:

* To test the UDP packet relay with IPv4, send the following commands,

    * relayclienthost < ip address of the relay client >
    
    * relayclientiter < number of packets to relay >
    
    * relayhost < ip address of the host to which packets are to be relayed >
    
    * relayport < port number to which packets are to be relayed >    
    
    * ipv4port < port number to which the relay server listens to, for packets to relay >
    
    * current
    
    * start
    
    * relayclientstart

* Output - The above steps will relay the UDP packet from the host address set using the **relayclienthost** command to the destination address set by the command **relayhost**.

    The relay packet will be received at the port set by command **relayport**.
