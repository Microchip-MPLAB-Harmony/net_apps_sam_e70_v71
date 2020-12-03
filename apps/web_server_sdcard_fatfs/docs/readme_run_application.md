---
grand_parent:  Harmony 3 TCP/IP Application for SAM E70/V71 Family
parent: TCP/IP Web Server SDMMC Application
title: Running Application
nav_order: 3
has_children: false
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TCP/IP Web Server SDMMC Running Application
This Web Net Server application uses the SD card as a memory media and reads the web pages stored according to the configured mount path. Web Server reads the external SD card content using FAT FS API.

## MPLAB X IDE Project
This table list the name and location of the MPLAB X IDE project folder for the demonstration.

|Project Name|  Target Device|  Target Development Board | Description  |
|:-------------:|:---------:|:---------:|:---------:|
|sam_e70_xult.X | ATSAME70Q21B | SAME70 Xplained Ultra + LAN8740 PHY Daughter board  |Demonstrates the web server SDCARD FAT FS on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This is a Bare Metal (non-RTOS) implementation.   |
|sam_e70_xult_freertos.X | ATSAME70Q21B | SAME70 Xplained Ultra + LAN8740 PHY Daughter board  |Demonstrates the web server SDCARD FAT FS on development board with ATSAME70Q21B device and LAN8740 PHY daughter board. This is a FreeRTOS implementation.   |
|sam_v71_xult.X | ATSAMV71Q21B | SAMV71 Xplained Ultra | Demonstrates the web server SDCARD FAT FS on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Bare Metal (non-RTOS).  |
|sam_v71_xult_freertos.X | ATSAMV71Q21B | SAMV71 Xplained Ultra | Demonstrates the web server SDCARD FAT FS on development board with ATSAMV71Q21B device and KSZ8061 PHY daughter board. This implementation is based on Freertos.  |


## Running The Demonstration

1. Ensure a microSD/SD card is formatted and loaded with the web pages provided within the < install-dir >/net/apps/web_net_server_sdcard_fatfs/firmware/src/web_pages directory.

2. Configure the Development Board as given  **[Configure Hardware](readme_hardware_configuration.md)**.

2. Make the demonstration setup as shown [Network Setup](../../readme.md).

3. Build and download the demonstration project on the target board.

4. If the board has a UART connection:

    1. A virtual COM port will be detected on the computer, when the USB cable is connected to USB-UART connector.

    2. Open a standard terminal application on the computer (like Hyper-terminal or Tera Term) and configure the virtual COM port.

    3. Set the serial baud rate to 115200 baud in the terminal application.

    4. See that the initialization prints on the serial port terminal.

    5. When the DHCP client is enabled in the demonstration, wait for the DHCP server to assign an IP address for the development board. This will be printed on the serial port terminal.

		* Alternatively: Use the Announce service or ping to get the IP address of the board.

        * Run **tcpip_discoverer.jar** to discover the IPv4 and IPv6 address for the board.

6. HTTP Server Output -

    An HTTP server is hosted by the demonstration application. Open_a web browser and direct it to the board running the HTTP server by typing the URL in the address bar (for example, https://mchpboard_c), and then pressing Enter. 

    The demonstration application features following: 

    Real-time Hardware Control and Dynamic Variables - On the Overview page the LEDs can be clicked to toggle the LEDs on the Microchip hardware development board. The SWITCHes on the Microchip hardware development board can be pressed to toggle the Buttons on the web page. The dynamic variables can be updated in real-time on the HTTP server. 

    **Note:**  For the LED and SWITCH functionality portion of the demonstration, configure the GPIOs connected to LEDs and Switches on Microchip hardware development board, through the Pin Configuration manager in MPLAB® Harmony Configurator (MHC).  

    1. **Form Processing** - Input can be handled from the client by using the GET and POST methods (this functionality controls the on-board LEDs and is operational only on the Explorer 16 Development Board)

    2. **Authentication** - Shows an example of the commonly used restricted access feature 
    
    3. **Cookies** - Shows an example of storing small text strings on the client side 

    4. **File Uploads** - Shows an example of a file upload using the POST method. The HTTP server can_accept_a user-defined MPFS/MPFS2 image file for web pages. 
    
    5. **Send E-mail** - Shows simple SMTP POST methods 

    6. **Dynamic DNS** - Exercises Dynamic DNS capabilities 
    
    7. **Network Configuration** - The MAC address, host name, and IP address of the evaluation kit can be viewed in the Network Configuration page and some configurations can be updated 
    
    8. **MPFS Upload** - A new set of web pages can be uploaded to the web server using this feature, which is accessed through http://mchpboard_c/mpfsupload 

        ![tcpip_web_sdcard_server_project](images/sdcard_fs_run_welcome_screen.png)
