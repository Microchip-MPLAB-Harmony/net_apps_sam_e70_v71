/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                            (0)
#define SYS_TIME_MAX_TIMERS                         (5)
#define SYS_TIME_HW_COUNTER_WIDTH                   (16)
#define SYS_TIME_HW_COUNTER_PERIOD                  (65535U)
#define SYS_TIME_HW_COUNTER_HALF_PERIOD             (SYS_TIME_HW_COUNTER_PERIOD>>1)
#define SYS_TIME_CPU_CLOCK_FREQUENCY                (300000000)
#define SYS_TIME_COMPARE_UPDATE_EXECUTION_CYCLES    (900)

#define SYS_CONSOLE_INDEX_0                       0





#define SYS_CMD_ENABLE
#define SYS_CMD_DEVICE_MAX_INSTANCES       SYS_CONSOLE_DEVICE_MAX_INSTANCES
#define SYS_CMD_PRINT_BUFFER_SIZE          2560U
#define SYS_CMD_BUFFER_DMA_READY

/* Command System Service RTOS Configurations*/
#define SYS_CMD_RTOS_STACK_SIZE                2560
#define SYS_CMD_RTOS_TASK_PRIORITY             1


#define SYS_DEBUG_ENABLE
#define SYS_DEBUG_GLOBAL_ERROR_LEVEL       SYS_ERROR_DEBUG
#define SYS_DEBUG_BUFFER_DMA_READY
#define SYS_DEBUG_USE_CONSOLE



/* File System Service Configuration */

#define SYS_FS_MEDIA_NUMBER               (1U)
#define SYS_FS_VOLUME_NUMBER              (1U)

#define SYS_FS_AUTOMOUNT_ENABLE           false
#define SYS_FS_MAX_FILES                  (25U)
#define SYS_FS_MAX_FILE_SYSTEM_TYPE       (1U)
#define SYS_FS_MEDIA_MAX_BLOCK_SIZE       (512U)
#define SYS_FS_MEDIA_MANAGER_BUFFER_SIZE  (2048U)
#define SYS_FS_USE_LFN                    (1)
#define SYS_FS_FILE_NAME_LEN              (255U)
#define SYS_FS_CWD_STRING_LEN             (1024)

/* File System RTOS Configurations*/
#define SYS_FS_STACK_SIZE                 1024
#define SYS_FS_PRIORITY                   1

#define SYS_FS_FAT_VERSION                "v0.15"
#define SYS_FS_FAT_READONLY               false
#define SYS_FS_FAT_CODE_PAGE              437
#define SYS_FS_FAT_MAX_SS                 SYS_FS_MEDIA_MAX_BLOCK_SIZE
#define SYS_FS_FAT_ALIGNED_BUFFER_LEN     512






#define SYS_CONSOLE_DEVICE_MAX_INSTANCES   			(1U)
#define SYS_CONSOLE_UART_MAX_INSTANCES 	   			(1U)
#define SYS_CONSOLE_USB_CDC_MAX_INSTANCES 	   		(0U)
#define SYS_CONSOLE_PRINT_BUFFER_SIZE        		(200U)




// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/* SDMMC Driver Global Configuration Options */
#define DRV_SDMMC_INSTANCES_NUMBER                       (1U)

/*** MIIM Driver Configuration ***/
#define DRV_MIIM_ETH_MODULE_ID_0                GMAC_BASE_ADDRESS
#define DRV_MIIM_DRIVER_INDEX_0                 0
#define DRV_MIIM_INSTANCES_NUMBER           1
#define DRV_MIIM_INSTANCE_OPERATIONS        4
#define DRV_MIIM_INSTANCE_CLIENTS           2
#define DRV_MIIM_CLIENT_OP_PROTECTION   false
#define DRV_MIIM_COMMANDS   false
#define DRV_MIIM_DRIVER_OBJECT              DRV_MIIM_OBJECT_BASE_Default            

/* MIIM RTOS Configurations*/
#define DRV_MIIM_RTOS_STACK_SIZE                1024
#define DRV_MIIM_RTOS_TASK_PRIORITY             1



/*** SDMMC Driver Instance 0 Configuration ***/
#define DRV_SDMMC_INDEX_0                                0
#define DRV_SDMMC_IDX0_CLIENTS_NUMBER                    1
#define DRV_SDMMC_IDX0_QUEUE_SIZE                        1
#define DRV_SDMMC_IDX0_PROTOCOL_SUPPORT                  DRV_SDMMC_PROTOCOL_SD
#define DRV_SDMMC_IDX0_CONFIG_SPEED_MODE                 DRV_SDMMC_SPEED_MODE_DEFAULT
#define DRV_SDMMC_IDX0_CONFIG_BUS_WIDTH                  DRV_SDMMC_BUS_WIDTH_4_BIT
#define DRV_SDMMC_IDX0_CARD_DETECTION_METHOD             DRV_SDMMC_CD_METHOD_POLLING

/* SDMMC Driver Instance 0 RTOS Configurations*/
#define DRV_SDMMC_STACK_SIZE_IDX0                         1024
#define DRV_SDMMC_PRIORITY_IDX0                           1
#define DRV_SDMMC_RTOS_DELAY_IDX0                         2U




// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************


/*** SNMP Configuration ***/
#define TCPIP_STACK_USE_SNMP_SERVER
#define TCPIP_SNMP_TASK_PROCESS_RATE 				200
#define TCPIP_SNMP_MOUNT_POINT						"/mnt/mchpSite1/"
#define TCPIP_SNMP_BIB_FILE_NAME 					"snmp.bib"
#define TCPIP_SNMP_OID_MAX_LEN						18
#define TCPIP_SNMP_MAX_MSG_SIZE 					480
#define TCPIP_SNMP_MAX_NON_REC_ID_OID 				3
#define TCPIP_SNMP_COMMUNITY_MAX_LEN 				16
#define TCPIP_SNMP_MAX_COMMUNITY_SUPPORT 			3
#define TCPIP_SNMP_NOTIFY_COMMUNITY_LEN 			16
#define TCPIP_SNMP_TRAP_COMMUNITY_MAX_LEN_MEM_USE 	16
#define TCPIP_SNMP_TRAP_TABLE_SIZE 					2
#define TCPIP_SNMP_USE_TRAP_SUPPORT   				true

#define TCPIP_SNMP_STACK_USE_V2_TRAP   				true
/***The maximum size of TRAP community string length***/
#define TCPIP_SNMP_TRAP_COMMUNITY_MAX_LEN       	(TCPIP_SNMP_TRAP_COMMUNITY_MAX_LEN_MEM_USE+1)

/*** SNMP Stack Configuration Index 0 ***/
#define TCPIP_SNMP_STACK_READCOMMUNITY_NAME_IDX0 	"harmony" 
#define TCPIP_SNMP_STACK_WRITECOMMUNITY_NAME_IDX0 	"unicorn" 

/*** SNMP Stack Configuration Index 1 ***/
#define TCPIP_SNMP_STACK_READCOMMUNITY_NAME_IDX1 	"read" 
#define TCPIP_SNMP_STACK_WRITECOMMUNITY_NAME_IDX1 	"write" 

/*** SNMP Stack Configuration Index 2 ***/
#define TCPIP_SNMP_STACK_READCOMMUNITY_NAME_IDX2		0
#define TCPIP_SNMP_STACK_WRITECOMMUNITY_NAME_IDX2 	"harmony" 




/*** DNS Client Configuration ***/
#define TCPIP_STACK_USE_DNS
#define TCPIP_DNS_CLIENT_SERVER_TMO					60
#define TCPIP_DNS_CLIENT_TASK_PROCESS_RATE			200
#define TCPIP_DNS_CLIENT_CACHE_ENTRIES				5
#define TCPIP_DNS_CLIENT_CACHE_ENTRY_TMO			0
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV4_ADDRESS		5
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV6_ADDRESS		1
#define TCPIP_DNS_CLIENT_ADDRESS_TYPE			    IP_ADDRESS_TYPE_IPV4
#define TCPIP_DNS_CLIENT_CACHE_DEFAULT_TTL_VAL		1200
#define TCPIP_DNS_CLIENT_LOOKUP_RETRY_TMO			2
#define TCPIP_DNS_CLIENT_MAX_HOSTNAME_LEN			64
#define TCPIP_DNS_CLIENT_MAX_SELECT_INTERFACES		4
#define TCPIP_DNS_CLIENT_DELETE_OLD_ENTRIES			true
#define TCPIP_DNS_CLIENT_CONSOLE_CMD               	true
#define TCPIP_DNS_CLIENT_USER_NOTIFICATION   false



/*** ICMPv4 Server Configuration ***/
#define TCPIP_STACK_USE_ICMP_SERVER
#define TCPIP_ICMP_ECHO_ALLOW_BROADCASTS    false



/*** NBNS Configuration ***/
#define TCPIP_STACK_USE_NBNS
#define TCPIP_NBNS_TASK_TICK_RATE   110



/*** HTTP NET Configuration ***/
#define TCPIP_STACK_USE_HTTP_NET_SERVER
#define TCPIP_HTTP_NET_MAX_HEADER_LEN		    		15
#define TCPIP_HTTP_NET_CACHE_LEN		        		"600"
#define TCPIP_HTTP_NET_TIMEOUT		            		45
#define TCPIP_HTTP_NET_MAX_CONNECTIONS		    		4
#define TCPIP_HTTP_NET_DEFAULT_FILE		        		"index.htm"
#define TCPIP_HTTP_NET_FILENAME_MAX_LEN			        25
#define TCPIP_HTTP_NET_WEB_DIR		        		    "/mnt/mchpSite1/"
#define TCPIP_HTTP_NET_USE_POST
#define TCPIP_HTTP_NET_USE_COOKIES
#define TCPIP_HTTP_NET_USE_AUTHENTICATION
#define TCPIP_HTTP_NET_MAX_DATA_LEN		        		100
#define TCPIP_HTTP_NET_SKT_TX_BUFF_SIZE		    		1024
#define TCPIP_HTTP_NET_SKT_RX_BUFF_SIZE		    		1024
#define TCPIP_HTTP_NET_LISTEN_PORT		    		    443
#define TCPIP_HTTP_NET_CONFIG_FLAGS                       \
                                                        TCPIP_HTTP_NET_MODULE_FLAG_SECURE_DEFAULT |\
                                                        TCPIP_HTTP_NET_MODULE_FLAG_DEFAULT
#define TCPIP_HTTP_NET_TASK_RATE					    33
#define TCPIP_HTTP_NET_RESPONSE_BUFFER_SIZE				300
#define TCPIP_HTTP_NET_COOKIE_BUFFER_SIZE				200
#define TCPIP_HTTP_NET_FIND_PEEK_BUFF_SIZE				512
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFER_SIZE         512
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFERS_NUMBER      4
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFER_RETRIES      10
#define TCPIP_HTTP_NET_CHUNKS_NUMBER                    10
#define TCPIP_HTTP_NET_CHUNK_RETRIES                    10
#define TCPIP_HTTP_NET_MAX_RECURSE_LEVEL				3
#define TCPIP_HTTP_NET_DYNVAR_PROCESS           		1
#define TCPIP_HTTP_NET_DYNVAR_DESCRIPTORS_NUMBER		10
#define TCPIP_HTTP_NET_DYNVAR_MAX_LEN					50
#define TCPIP_HTTP_NET_DYNVAR_ARG_MAX_NUMBER			4
#define TCPIP_HTTP_NET_DYNVAR_PROCESS_RETRIES			10
#define TCPIP_HTTP_NET_SSI_PROCESS           			1
#define TCPIP_HTTP_NET_SSI_ATTRIBUTES_MAX_NUMBER        4
#define TCPIP_HTTP_NET_SSI_STATIC_ATTTRIB_NUMBER        2
#define TCPIP_HTTP_NET_SSI_CMD_MAX_LEN                  100
#define TCPIP_HTTP_NET_SSI_VARIABLES_NUMBER             13
#define TCPIP_HTTP_NET_SSI_VARIABLE_NAME_MAX_LENGTH     10
#define TCPIP_HTTP_NET_SSI_VARIABLE_STRING_MAX_LENGTH   20
#define TCPIP_HTTP_NET_SSI_ECHO_NOT_FOUND_MESSAGE       "SSI Echo - Not Found: "
#define TCPIP_HTTP_NET_CONNECTION_TIMEOUT          	0
#define TCPIP_HTTP_NET_MALLOC_FUNC                  pvPortMalloc
#define TCPIP_HTTP_NET_FREE_FUNC                    vPortFree
#define TCPIP_HTTP_NET_CONSOLE_CMD           		false


/******************************************************************************/
/*wolfSSL TLS Layer Configuration*/
/******************************************************************************/

#define WOLFSSL_ALT_NAMES
#define WOLFSSL_DER_LOAD
#define KEEP_OUR_CERT
#define KEEP_PEER_CERT
#define HAVE_CRL_IO
#define HAVE_IO_TIMEOUT
#define TFM_NO_ASM
#define WOLFSSL_NO_ASM
#define SIZEOF_LONG_LONG 8
#define WOLFSSL_USER_IO
#define NO_WRITEV
#define MICROCHIP_TCPIP
#include "osal/osal.h"
#define XMALLOC_OVERRIDE
#define XMALLOC(s, h, type)  OSAL_Malloc((s))
#define XFREE(p, h, type)    OSAL_Free((p))
#define WOLFSSL_DTLS
#define NO_PWDBASED
#define NO_ERROR_STRINGS
#define NO_OLD_TLS


/*** TCP Configuration ***/
#define TCPIP_TCP_MAX_SEG_SIZE_TX		        	1460
#define TCPIP_TCP_SOCKET_DEFAULT_TX_SIZE			512
#define TCPIP_TCP_SOCKET_DEFAULT_RX_SIZE			512
#define TCPIP_TCP_DYNAMIC_OPTIONS             			true
#define TCPIP_TCP_START_TIMEOUT_VAL		        	1000
#define TCPIP_TCP_DELAYED_ACK_TIMEOUT		    		100
#define TCPIP_TCP_FIN_WAIT_2_TIMEOUT		    		5000
#define TCPIP_TCP_KEEP_ALIVE_TIMEOUT		    		10000
#define TCPIP_TCP_CLOSE_WAIT_TIMEOUT		    		0
#define TCPIP_TCP_MAX_RETRIES		            		5
#define TCPIP_TCP_MAX_UNACKED_KEEP_ALIVES			6
#define TCPIP_TCP_MAX_SYN_RETRIES		        	3
#define TCPIP_TCP_AUTO_TRANSMIT_TIMEOUT_VAL			40
#define TCPIP_TCP_WINDOW_UPDATE_TIMEOUT_VAL			200
#define TCPIP_TCP_MAX_SOCKETS		                10
#define TCPIP_TCP_TASK_TICK_RATE		        	5
#define TCPIP_TCP_MSL_TIMEOUT		        	    0
#define TCPIP_TCP_QUIET_TIME		        	    0
#define TCPIP_TCP_COMMANDS   false
#define TCPIP_TCP_EXTERN_PACKET_PROCESS   false
#define TCPIP_TCP_DISABLE_CRYPTO_USAGE		        	    false



/*** DHCP Configuration ***/
#define TCPIP_STACK_USE_DHCP_CLIENT
#define TCPIP_DHCP_TIMEOUT                          10
#define TCPIP_DHCP_TASK_TICK_RATE                   5
#define TCPIP_DHCP_HOST_NAME_SIZE                   20
#define TCPIP_DHCP_CLIENT_CONNECT_PORT              68
#define TCPIP_DHCP_SERVER_LISTEN_PORT               67
#define TCPIP_DHCP_CLIENT_CONSOLE_CMD               true

#define TCPIP_DHCP_USE_OPTION_TIME_SERVER           0
#define TCPIP_DHCP_TIME_SERVER_ADDRESSES            0
#define TCPIP_DHCP_USE_OPTION_NTP_SERVER            0
#define TCPIP_DHCP_NTP_SERVER_ADDRESSES             0
#define TCPIP_DHCP_ARP_LEASE_CHECK_TMO              1000
#define TCPIP_DHCP_WAIT_ARP_FAIL_CHECK_TMO          10



/*** ARP Configuration ***/
#define TCPIP_ARP_CACHE_ENTRIES                 		5
#define TCPIP_ARP_CACHE_DELETE_OLD		        	true
#define TCPIP_ARP_CACHE_SOLVED_ENTRY_TMO			1200
#define TCPIP_ARP_CACHE_PENDING_ENTRY_TMO			60
#define TCPIP_ARP_CACHE_PENDING_RETRY_TMO			2
#define TCPIP_ARP_CACHE_PERMANENT_QUOTA		    		50
#define TCPIP_ARP_CACHE_PURGE_THRESHOLD		    		75
#define TCPIP_ARP_CACHE_PURGE_QUANTA		    		1
#define TCPIP_ARP_CACHE_ENTRY_RETRIES		    		3
#define TCPIP_ARP_GRATUITOUS_PROBE_COUNT			1
#define TCPIP_ARP_TASK_PROCESS_RATE		        	2000
#define TCPIP_ARP_PRIMARY_CACHE_ONLY		        	true
#define TCPIP_ARP_COMMANDS false



#define TCPIP_STACK_USE_ICMPV6_SERVER


#define TCPIP_IPV6_NDP_MAX_RTR_SOLICITATION_DELAY 	1
#define TCPIP_IPV6_NDP_RTR_SOLICITATION_INTERVAL 	4
#define TCPIP_IPV6_NDP_MAX_RTR_SOLICITATIONS 		3
#define TCPIP_IPV6_NDP_MAX_MULTICAST_SOLICIT 		3
#define TCPIP_IPV6_NDP_MAX_UNICAST_SOLICIT 			3
#define TCPIP_IPV6_NDP_MAX_ANYCAST_DELAY_TIME 		1
#define TCPIP_IPV6_NDP_MAX_NEIGHBOR_ADVERTISEMENT 	3
#define TCPIP_IPV6_NDP_REACHABLE_TIME 				30
#define TCPIP_IPV6_NDP_RETRANS_TIMER 				1
#define TCPIP_IPV6_NDP_DELAY_FIRST_PROBE_TIME 		5
#define TCPIP_IPV6_NDP_VALID_LIFETIME_TWO_HOURS 	(60 * 60 * 2)
#define TCPIP_IPV6_MTU_INCREASE_TIMEOUT 			600
#define TCPIP_IPV6_NDP_TASK_TIMER_RATE 				32


/* Network Configuration Index 0 */
#define TCPIP_NETWORK_DEFAULT_INTERFACE_NAME_IDX0 "GMAC"
#define TCPIP_IF_GMAC  

#define TCPIP_NETWORK_DEFAULT_HOST_NAME_IDX0              "MCHPBOARD_C"
#define TCPIP_NETWORK_DEFAULT_MAC_ADDR_IDX0               "00:04:25:1C:A0:02"

#define TCPIP_NETWORK_DEFAULT_IP_ADDRESS_IDX0         "192.168.100.11"
#define TCPIP_NETWORK_DEFAULT_IP_MASK_IDX0            "255.255.255.0"
#define TCPIP_NETWORK_DEFAULT_GATEWAY_IDX0            "192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_DNS_IDX0                "192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_SECOND_DNS_IDX0         "0.0.0.0"
#define TCPIP_NETWORK_DEFAULT_POWER_MODE_IDX0         "full"
#define TCPIP_NETWORK_DEFAULT_INTERFACE_FLAGS_IDX0            \
                                                    TCPIP_NETWORK_CONFIG_DHCP_CLIENT_ON |\
                                                    TCPIP_NETWORK_CONFIG_DNS_CLIENT_ON |\
                                                    TCPIP_NETWORK_CONFIG_IP_STATIC
                                                    
#define TCPIP_NETWORK_DEFAULT_MAC_DRIVER_IDX0         DRV_GMAC_Object



	/*** tcpip_cmd Configuration ***/
	#define TCPIP_STACK_COMMAND_ENABLE




/*** IPv6 Configuration ***/
#define TCPIP_IPV6_DEFAULT_ALLOCATION_BLOCK_SIZE 		64
#define TCPIP_IPV6_MINIMUM_LINK_MTU 					1280
#define TCPIP_IPV6_DEFAULT_LINK_MTU 					1500
#define TCPIP_IPV6_DEFAULT_CUR_HOP_LIMIT 				64
#define TCPIP_IPV6_DEFAULT_BASE_REACHABLE_TIME 			30
#define TCPIP_IPV6_DEFAULT_RETRANSMIT_TIME 				1000
#define TCPIP_IPV6_QUEUE_NEIGHBOR_PACKET_LIMIT 			1
#define TCPIP_IPV6_NEIGHBOR_CACHE_ENTRY_STALE_TIMEOUT 	600
#define TCPIP_IPV6_QUEUE_MCAST_PACKET_LIMIT 			4
#define TCPIP_IPV6_QUEUED_MCAST_PACKET_TIMEOUT 			10
#define TCPIP_IPV6_TASK_PROCESS_RATE 					1000
#define TCPIP_IPV6_INIT_TASK_PROCESS_RATE 				32
#define TCPIP_IPV6_ULA_GENERATE_ENABLE 					true
#define TCPIP_IPV6_ULA_NTP_ACCESS_TMO 					12000
#define TCPIP_IPV6_ULA_NTP_VALID_WINDOW 				1000
#define TCPIP_IPV6_FRAGMENT_PKT_TIMEOUT 				60
#define TCPIP_IPV6_RX_FRAGMENTED_BUFFER_SIZE 			1514
#define TCPIP_IPV6_EXTERN_PACKET_PROCESS   false


#define TCPIP_IPV6_G3_PLC_SUPPORT                       false



/*** IPv4 Configuration ***/
#define TCPIP_IPV4_ARP_SLOTS                        10
#define TCPIP_IPV4_EXTERN_PACKET_PROCESS   false

#define TCPIP_IPV4_COMMANDS false

#define TCPIP_IPV4_FORWARDING_ENABLE    false 





/*** SMTPC Configuration ***/
#define TCPIP_STACK_USE_SMTPC
#define TCPIP_SMTPC_MAIL_CONNECTIONS 	            2
#define TCPIP_SMTPC_CLIENT_MESSAGE_DATE 	        "Wed, 20 July 2016 14:55:06 -0600"
#define TCPIP_SMTPC_SERVER_REPLY_TIMEOUT 	        60
#define TCPIP_SMTPC_SERVER_DATA_TIMEOUT 	        60
#define TCPIP_SMTPC_TLS_HANDSHAKE_TIMEOUT 	        10
#define TCPIP_SMTPC_MAIL_RETRIES 	                3
#define TCPIP_SMTPC_SERVER_TRANSIENT_RETRY_TIMEOUT  600
#define TCPIP_SMTPC_INTERNAL_RETRY_TIMEOUT          10
#define TCPIP_SMTPC_SERVER_REPLY_BUFFER_SIZE 	    2048
#define TCPIP_SMTPC_CLIENT_AUTH_BUFFER_SIZE 	    100
#define TCPIP_SMTPC_CLIENT_ADDR_BUFFER_SIZE 	    80
#define TCPIP_SMTPC_PLAIN_LINE_BUFF_SIZE 	        256
#define TCPIP_SMTPC_SKT_TX_BUFF_SIZE			    2048
#define TCPIP_SMTPC_SKT_RX_BUFF_SIZE			    2048
#define TCPIP_SMTPC_TASK_TICK_RATE			        55



/*** TCPIP Heap Configuration ***/
#define TCPIP_STACK_USE_INTERNAL_HEAP
#define TCPIP_STACK_DRAM_SIZE                       96960
#define TCPIP_STACK_DRAM_RUN_LIMIT                  2048

#define TCPIP_STACK_MALLOC_FUNC                     malloc

#define TCPIP_STACK_CALLOC_FUNC                     calloc

#define TCPIP_STACK_FREE_FUNC                       free



#define TCPIP_STACK_HEAP_USE_FLAGS                   TCPIP_STACK_HEAP_FLAG_ALLOC_UNCACHED

#define TCPIP_STACK_HEAP_USAGE_CONFIG                TCPIP_STACK_HEAP_USE_DEFAULT

#define TCPIP_STACK_SUPPORTED_HEAPS                  1




// *****************************************************************************
// *****************************************************************************
// Section: TCPIP Stack Configuration
// *****************************************************************************
// *****************************************************************************

#define TCPIP_STACK_USE_IPV4
#define TCPIP_STACK_USE_IPV6
#define TCPIP_STACK_USE_TCP
#define TCPIP_STACK_USE_UDP

#define TCPIP_STACK_TICK_RATE		        		5
#define TCPIP_STACK_SECURE_PORT_ENTRIES             10
#define TCPIP_STACK_LINK_RATE		        		333

#define TCPIP_STACK_ALIAS_INTERFACE_SUPPORT   false

#define TCPIP_PACKET_LOG_ENABLE     0

/* TCP/IP stack event notification */
#define TCPIP_STACK_USE_EVENT_NOTIFICATION
#define TCPIP_STACK_USER_NOTIFICATION   false
#define TCPIP_STACK_DOWN_OPERATION   true
#define TCPIP_STACK_IF_UP_DOWN_OPERATION   true
#define TCPIP_STACK_MAC_DOWN_OPERATION  true
#define TCPIP_STACK_INTERFACE_CHANGE_SIGNALING   false
#define TCPIP_STACK_CONFIGURATION_SAVE_RESTORE   true
#define TCPIP_STACK_EXTERN_PACKET_PROCESS   false
#define TCPIP_STACK_RUN_TIME_INIT   false

#define TCPIP_STACK_INTMAC_COUNT           1



/* TCP/IP RTOS Configurations*/
#define TCPIP_RTOS_STACK_SIZE                1024
#define TCPIP_RTOS_PRIORITY             1


/*** GMAC Configuration ***/
#define DRV_GMAC
#define DRV_SAME7x_V7x
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY    1
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY    1
#define TCPIP_GMAC_RX_BUFF_SIZE_DUMMY            64
#define TCPIP_GMAC_TX_BUFF_SIZE_DUMMY            64
/*** QUEUE 0 TX Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE0            8
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE0                 1536
/*** QUEUE 0 RX Configuration ***/
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE0            8
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE0                    1536
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE0            8
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE0              2
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE0         1
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE0             2
/*** QUEUE 1 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE1             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE1                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE1             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE1                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE1             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE1               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE1          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE1              0
/*** QUEUE 2 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE2             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE2                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE2             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE2                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE2             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE2               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE2          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE2              0
/*** QUEUE 3 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE3             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE3                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE3             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE3                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE3             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE3               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE3          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE3              0
/*** QUEUE 4 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE4             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE4                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE4             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE4                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE4             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE4               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE4          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE4              0
/*** QUEUE 5 Not Enabled - Dummy Configuration ***/
#define TCPIP_GMAC_TX_DESCRIPTORS_COUNT_QUE5             TCPIP_GMAC_TX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_MAX_TX_PKT_SIZE_QUE5                  0
#define TCPIP_GMAC_RX_DESCRIPTORS_COUNT_QUE5             TCPIP_GMAC_RX_DESCRIPTORS_COUNT_DUMMY
#define TCPIP_GMAC_RX_BUFF_SIZE_QUE5                     TCPIP_GMAC_RX_BUFF_SIZE_DUMMY
#define TCPIP_GMAC_RX_DEDICATED_BUFFERS_QUE5             1
#define TCPIP_GMAC_RX_ADDL_BUFF_COUNT_QUE5               0
#define TCPIP_GMAC_RX_BUFF_COUNT_THRESHOLD_QUE5          0
#define TCPIP_GMAC_RX_BUFF_ALLOC_COUNT_QUE5              0
#define TCPIP_GMAC_RX_FILTERS                       \
                                                        TCPIP_MAC_RX_FILTER_TYPE_BCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_MCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_UCAST_ACCEPT |\
                                                        TCPIP_MAC_RX_FILTER_TYPE_CRC_ERROR_REJECT |\
                                                          0
       
#define TCPIP_GMAC_SCREEN1_COUNT_QUE        0 
#define TCPIP_GMAC_SCREEN2_COUNT_QUE        0       

#define TCPIP_GMAC_ETH_OPEN_FLAGS                   \
                                                        TCPIP_ETH_OPEN_AUTO |\
                                                        TCPIP_ETH_OPEN_FDUPLEX |\
                                                        TCPIP_ETH_OPEN_HDUPLEX |\
                                                        TCPIP_ETH_OPEN_100 |\
                                                        TCPIP_ETH_OPEN_10 |\
                                                        TCPIP_ETH_OPEN_MDIX_AUTO |\
                                                        TCPIP_ETH_OPEN_RMII |\
                                                        0

#define TCPIP_GMAC_MODULE_ID                       GMAC_BASE_ADDRESS

#define TCPIP_INTMAC_PERIPHERAL_CLK                 150000000

#define DRV_GMAC_RX_CHKSM_OFFLOAD               (TCPIP_MAC_CHECKSUM_NONE)           
#define DRV_GMAC_TX_CHKSM_OFFLOAD               (TCPIP_MAC_CHECKSUM_NONE)       
#define TCPIP_GMAC_TX_PRIO_COUNT                1
#define TCPIP_GMAC_RX_PRIO_COUNT                1
#define DRV_GMAC_NUMBER_OF_QUEUES               6
#define DRV_GMAC_RMII_MODE                      0

#define DRV_GMAC_DESCRIPTOR_ADDRESS                0x2045f000



/*** SNTP Configuration ***/
#define TCPIP_STACK_USE_SNTP_CLIENT
#define TCPIP_NTP_DEFAULT_IF		        	"GMAC"
#define TCPIP_NTP_VERSION             			4
#define TCPIP_NTP_DEFAULT_CONNECTION_TYPE   	IP_ADDRESS_TYPE_IPV4
#define TCPIP_NTP_EPOCH		                	2208988800ul
#define TCPIP_NTP_REPLY_TIMEOUT		        	6
#define TCPIP_NTP_MAX_STRATUM		        	15
#define TCPIP_NTP_TIME_STAMP_TMO				660
#define TCPIP_NTP_SERVER		        		"pool.ntp.org"
#define TCPIP_NTP_SERVER_MAX_LENGTH				30
#define TCPIP_NTP_QUERY_INTERVAL				600
#define TCPIP_NTP_FAST_QUERY_INTERVAL	    	14
#define TCPIP_NTP_TASK_TICK_RATE				1100
#define TCPIP_NTP_RX_QUEUE_LIMIT				2



/*** announce Configuration ***/
#define TCPIP_STACK_USE_ANNOUNCE
#define TCPIP_ANNOUNCE_MAX_PAYLOAD 	512
#define TCPIP_ANNOUNCE_TASK_RATE    333
#define TCPIP_ANNOUNCE_NETWORK_DIRECTED_BCAST             			false



/*** UDP Configuration ***/
#define TCPIP_UDP_MAX_SOCKETS		                	10
#define TCPIP_UDP_SOCKET_DEFAULT_TX_SIZE		    	512
#define TCPIP_UDP_SOCKET_DEFAULT_TX_QUEUE_LIMIT    	 	3
#define TCPIP_UDP_SOCKET_DEFAULT_RX_QUEUE_LIMIT			3
#define TCPIP_UDP_USE_POOL_BUFFERS   false
#define TCPIP_UDP_USE_TX_CHECKSUM             			true
#define TCPIP_UDP_USE_RX_CHECKSUM             			true
#define TCPIP_UDP_COMMANDS   false
#define TCPIP_UDP_EXTERN_PACKET_PROCESS   false


#define DRV_LAN8740_PHY_CONFIG_FLAGS       ( 0 \
                                                    | DRV_ETHPHY_CFG_RMII \
                                                    )
                                                    
#define DRV_LAN8740_PHY_LINK_INIT_DELAY            500
#define DRV_LAN8740_PHY_ADDRESS                    0
#define DRV_LAN8740_PHY_PERIPHERAL_ID              GMAC_BASE_ADDRESS
#define DRV_ETHPHY_LAN8740_NEG_INIT_TMO            1
#define DRV_ETHPHY_LAN8740_NEG_DONE_TMO            2000
#define DRV_ETHPHY_LAN8740_RESET_CLR_TMO           500



/*** wolfCrypt Library Configuration ***/
#define MICROCHIP_PIC32
#define MICROCHIP_MPLAB_HARMONY
#define MICROCHIP_MPLAB_HARMONY_3
#define HAVE_MCAPI
#define SIZEOF_LONG_LONG 8
#define WOLFSSL_USER_IO
#define NO_WRITEV
#define NO_FILESYSTEM
#define USE_FAST_MATH
#define NO_PWDBASED
#define HAVE_MCAPI
#define WOLF_CRYPTO_CB  // provide call-back support
// ---------- FUNCTIONAL CONFIGURATION START ----------
#define WOLFSSL_AES_SMALL_TABLES
#define NO_MD4
#define WOLFSSL_SHA224
#define WOLFSSL_AES_128
#define WOLFSSL_AES_192
#define WOLFSSL_AES_256
#define WOLFSSL_AES_DIRECT
#define HAVE_AES_DECRYPT
#define HAVE_AES_ECB
#define HAVE_AES_CBC
#define WOLFSSL_AES_COUNTER
#define WOLFSSL_AES_CFB
#define WOLFSSL_AES_OFB
#define HAVE_AESGCM
#define HAVE_AESCCM
#define NO_RC4
#define NO_HC128
#define NO_RABBIT
#define HAVE_ECC
#define NO_DH
#define NO_DSA
#define FP_MAX_BITS 4096
#define USE_CERT_BUFFERS_2048
#define NO_DEV_RANDOM
#define HAVE_HASHDRBG
#define WC_NO_HARDEN
#define FREERTOS
#define NO_SIG_WRAPPER
#define NO_ERROR_STRINGS
#define NO_WOLFSSL_MEMORY
// ---------- FUNCTIONAL CONFIGURATION END ----------

/* MPLAB Harmony Net Presentation Layer Definitions*/
#define NET_PRES_NUM_INSTANCE 1
#define NET_PRES_NUM_SOCKETS 10

/* Net Pres RTOS Configurations*/
#define NET_PRES_RTOS_STACK_SIZE                8192
#define NET_PRES_RTOS_TASK_PRIORITY             1
	
#define FREERTOS


#define TCPIP_STACK_NETWORK_INTERAFCE_COUNT  	1






/*** SNMPv3 Configuration ***/
#define TCPIP_STACK_USE_SNMPV3_SERVER
#define TCPIP_SNMPV3_USER_SECURITY_NAME_LEN 			16
#define TCPIP_SNMPV3_AUTH_LOCALIZED_PASSWORD_KEY_LEN 	20
#define TCPIP_SNMPV3_PRIV_LOCALIZED_PASSWORD_KEY_LEN 	20
#define TCPIP_SNMPV3_USM_MAX_USER						3
#define TCPIP_SNMPV3_STACK_USE_V1_V2_TRAP				true

/*** SNMPV3 Stack Configuration Index 0 ***/
#define TCPIP_SNMPV3_STACK_USM_NAME_IDX0 	"microchip" 
#define TCPIP_SNMPV3_STACK_SECURITY_LEVEL_IDX0 	AUTH_PRIV
#define TCPIP_SNMPV3_STACK_AUTH_PROTOCOL_IDX0 	SNMPV3_HMAC_MD5
#define TCPIP_SNMPV3_STACK_AUTH_PASSWORD_IDX0 	"auth12345" 
#define TCPIP_SNMPV3_STACK_PRIV_PROTOCOL_IDX0 	SNMPV3_AES_PRIV
#define TCPIP_SNMPV3_STACK_PRIV_PASSWORD_IDX0 	"priv12345" 
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_NAME_IDX0 	"microchip" 
#define TCPIP_SNMPV3_TARGET_ENTRY_MESSAGE_PROTOCOL_TYPE_IDX0 	SNMPV3_MSG_PROCESSING_MODEL
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_MODEL_TYPE_IDX0 	SNMPV3_USM_SECURITY_MODEL
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_LEVEL_IDX0 	AUTH_PRIV

/*** SNMPV3 Stack Configuration Index 1 ***/
#define TCPIP_SNMPV3_STACK_USM_NAME_IDX1 	"SnmpAdmin" 
#define TCPIP_SNMPV3_STACK_SECURITY_LEVEL_IDX1 	AUTH_NO_PRIV
#define TCPIP_SNMPV3_STACK_AUTH_PROTOCOL_IDX1 	SNMPV3_HMAC_SHA1
#define TCPIP_SNMPV3_STACK_AUTH_PASSWORD_IDX1 	"ChandlerUS" 
#define TCPIP_SNMPV3_STACK_PRIV_PROTOCOL_IDX1 	SNMPV3_NO_PRIV
#define TCPIP_SNMPV3_STACK_PRIV_PASSWORD_IDX1	0
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_NAME_IDX1 	"SnmpAdmin" 
#define TCPIP_SNMPV3_TARGET_ENTRY_MESSAGE_PROTOCOL_TYPE_IDX1 	SNMPV3_MSG_PROCESSING_MODEL
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_MODEL_TYPE_IDX1 	SNMPV3_USM_SECURITY_MODEL
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_LEVEL_IDX1 	AUTH_NO_PRIV

/*** SNMPV3 Stack Configuration Index 2 ***/
#define TCPIP_SNMPV3_STACK_USM_NAME_IDX2 	"root" 
#define TCPIP_SNMPV3_STACK_SECURITY_LEVEL_IDX2 	NO_AUTH_NO_PRIV
#define TCPIP_SNMPV3_STACK_AUTH_PROTOCOL_IDX2 	SNMPV3_NO_HMAC_AUTH
#define TCPIP_SNMPV3_STACK_AUTH_PASSWORD_IDX2	0
#define TCPIP_SNMPV3_STACK_PRIV_PROTOCOL_IDX2 	SNMPV3_NO_PRIV
#define TCPIP_SNMPV3_STACK_PRIV_PASSWORD_IDX2	0
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_NAME_IDX2 	"root" 
#define TCPIP_SNMPV3_TARGET_ENTRY_MESSAGE_PROTOCOL_TYPE_IDX2 	SNMPV3_MSG_PROCESSING_MODEL
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_MODEL_TYPE_IDX2 	SNMPV3_USM_SECURITY_MODEL
#define TCPIP_SNMPV3_TARGET_ENTRY_SEC_LEVEL_IDX2 	NO_AUTH_NO_PRIV


#define TCPIP_SNMPV3_SUPPORT_AES

/***User security name length for memory validation***/
#define TCPIP_SNMPV3_USER_SECURITY_NAME_LEN_MEM_USE (TCPIP_SNMPV3_USER_SECURITY_NAME_LEN+1)

/***SNMPv3 authentication localized Key length for memory validation***/
#define TCPIP_SNMPV3_AUTH_LOCALIZED_PASSWORD_KEY_LEN_MEM_USE (TCPIP_SNMPV3_AUTH_LOCALIZED_PASSWORD_KEY_LEN+1)

/***SNMPv3 privacy key length size for memory validation***/
#define TCPIP_SNMPV3_PRIV_LOCALIZED_PASSWORD_KEY_LEN_MEM_USE (TCPIP_SNMPV3_PRIV_LOCALIZED_PASSWORD_KEY_LEN+1)




// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/
