---
parent: Harmony 3 TCP/IP Application for SAM E70/V71 Family
title: TCP/IP WolfSSL TCP Server
has_children: true
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TCP/IP WolfSSL TCP Server

This configuration demonstrates creating a simple Internet Web server, that operates with clear text (TCP Port 80), and with encrypted text (TCP Port 443). If IPv6 is enabled than the demonstration also serves both types of connections on IPv6. The Web server only serves one page with the text 'Nothing Here' to all Web clients. 

This demonstration uses the NET_PRES layer for encrypted communication through an external service provider for TLS support.

## Development kits
The following table provides links to the documentation to the TCP/IP WolfSSL TCP server application on SAM E70 family on both bare metal and FreeRTOS.


| Development Kit |
|:---------|
|[SAM E70 Starter Kit MHC Configuration](docs/readme_mhc_configuration.md) |
|[SAM E70 Starter Kit Hardware Configuration](docs/readme_hardware_configuration.md) |
|[SAM E70 Starter Kit Run Application](docs/readme_run_application.md) |
