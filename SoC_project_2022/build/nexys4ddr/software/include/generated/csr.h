//--------------------------------------------------------------------------------
// Auto-generated by LiteX (49d04633) on 2022-06-22 07:35:44
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x82000000L
#endif

/* leds */
#define CSR_LEDS_BASE CSR_BASE + 0x0L
#define CSR_LEDS_OUT_ADDR CSR_BASE + 0x0L
#define CSR_LEDS_OUT_SIZE 1
static inline uint32_t leds_out_read(void) {
	return csr_read_simple(CSR_BASE + 0x0L);
}
static inline void leds_out_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x0L);
}

/* switchs */
#define CSR_SWITCHS_BASE CSR_BASE + 0x800L
#define CSR_SWITCHS_IN_ADDR CSR_BASE + 0x800L
#define CSR_SWITCHS_IN_SIZE 1
static inline uint32_t switchs_in_read(void) {
	return csr_read_simple(CSR_BASE + 0x800L);
}

/* buttons */
#define CSR_BUTTONS_BASE CSR_BASE + 0x1000L
#define CSR_BUTTONS_IN_ADDR CSR_BASE + 0x1000L
#define CSR_BUTTONS_IN_SIZE 1
static inline uint32_t buttons_in_read(void) {
	return csr_read_simple(CSR_BASE + 0x1000L);
}

/* display */
#define CSR_DISPLAY_BASE CSR_BASE + 0x1800L
#define CSR_DISPLAY_DIG_0_ADDR CSR_BASE + 0x1800L
#define CSR_DISPLAY_DIG_0_SIZE 1
static inline uint32_t display_dig_0_read(void) {
	return csr_read_simple(CSR_BASE + 0x1800L);
}
static inline void display_dig_0_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1800L);
}
#define CSR_DISPLAY_DIG_1_ADDR CSR_BASE + 0x1804L
#define CSR_DISPLAY_DIG_1_SIZE 1
static inline uint32_t display_dig_1_read(void) {
	return csr_read_simple(CSR_BASE + 0x1804L);
}
static inline void display_dig_1_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1804L);
}
#define CSR_DISPLAY_DIG_2_ADDR CSR_BASE + 0x1808L
#define CSR_DISPLAY_DIG_2_SIZE 1
static inline uint32_t display_dig_2_read(void) {
	return csr_read_simple(CSR_BASE + 0x1808L);
}
static inline void display_dig_2_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1808L);
}
#define CSR_DISPLAY_DIG_3_ADDR CSR_BASE + 0x180cL
#define CSR_DISPLAY_DIG_3_SIZE 1
static inline uint32_t display_dig_3_read(void) {
	return csr_read_simple(CSR_BASE + 0x180cL);
}
static inline void display_dig_3_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x180cL);
}
#define CSR_DISPLAY_DIG_4_ADDR CSR_BASE + 0x1810L
#define CSR_DISPLAY_DIG_4_SIZE 1
static inline uint32_t display_dig_4_read(void) {
	return csr_read_simple(CSR_BASE + 0x1810L);
}
static inline void display_dig_4_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1810L);
}
#define CSR_DISPLAY_DIG_5_ADDR CSR_BASE + 0x1814L
#define CSR_DISPLAY_DIG_5_SIZE 1
static inline uint32_t display_dig_5_read(void) {
	return csr_read_simple(CSR_BASE + 0x1814L);
}
static inline void display_dig_5_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1814L);
}
#define CSR_DISPLAY_DIG_6_ADDR CSR_BASE + 0x1818L
#define CSR_DISPLAY_DIG_6_SIZE 1
static inline uint32_t display_dig_6_read(void) {
	return csr_read_simple(CSR_BASE + 0x1818L);
}
static inline void display_dig_6_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1818L);
}
#define CSR_DISPLAY_DIG_7_ADDR CSR_BASE + 0x181cL
#define CSR_DISPLAY_DIG_7_SIZE 1
static inline uint32_t display_dig_7_read(void) {
	return csr_read_simple(CSR_BASE + 0x181cL);
}
static inline void display_dig_7_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x181cL);
}

/* ledRGB_1 */
#define CSR_LEDRGB_1_BASE CSR_BASE + 0x2000L
#define CSR_LEDRGB_1_R_ENABLE_ADDR CSR_BASE + 0x2000L
#define CSR_LEDRGB_1_R_ENABLE_SIZE 1
static inline uint32_t ledRGB_1_r_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x2000L);
}
static inline void ledRGB_1_r_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2000L);
}
#define CSR_LEDRGB_1_R_WIDTH_ADDR CSR_BASE + 0x2004L
#define CSR_LEDRGB_1_R_WIDTH_SIZE 1
static inline uint32_t ledRGB_1_r_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x2004L);
}
static inline void ledRGB_1_r_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2004L);
}
#define CSR_LEDRGB_1_R_PERIOD_ADDR CSR_BASE + 0x2008L
#define CSR_LEDRGB_1_R_PERIOD_SIZE 1
static inline uint32_t ledRGB_1_r_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x2008L);
}
static inline void ledRGB_1_r_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2008L);
}
#define CSR_LEDRGB_1_G_ENABLE_ADDR CSR_BASE + 0x200cL
#define CSR_LEDRGB_1_G_ENABLE_SIZE 1
static inline uint32_t ledRGB_1_g_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x200cL);
}
static inline void ledRGB_1_g_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x200cL);
}
#define CSR_LEDRGB_1_G_WIDTH_ADDR CSR_BASE + 0x2010L
#define CSR_LEDRGB_1_G_WIDTH_SIZE 1
static inline uint32_t ledRGB_1_g_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x2010L);
}
static inline void ledRGB_1_g_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2010L);
}
#define CSR_LEDRGB_1_G_PERIOD_ADDR CSR_BASE + 0x2014L
#define CSR_LEDRGB_1_G_PERIOD_SIZE 1
static inline uint32_t ledRGB_1_g_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x2014L);
}
static inline void ledRGB_1_g_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2014L);
}
#define CSR_LEDRGB_1_B_ENABLE_ADDR CSR_BASE + 0x2018L
#define CSR_LEDRGB_1_B_ENABLE_SIZE 1
static inline uint32_t ledRGB_1_b_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x2018L);
}
static inline void ledRGB_1_b_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2018L);
}
#define CSR_LEDRGB_1_B_WIDTH_ADDR CSR_BASE + 0x201cL
#define CSR_LEDRGB_1_B_WIDTH_SIZE 1
static inline uint32_t ledRGB_1_b_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x201cL);
}
static inline void ledRGB_1_b_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x201cL);
}
#define CSR_LEDRGB_1_B_PERIOD_ADDR CSR_BASE + 0x2020L
#define CSR_LEDRGB_1_B_PERIOD_SIZE 1
static inline uint32_t ledRGB_1_b_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x2020L);
}
static inline void ledRGB_1_b_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2020L);
}

/* ledRGB_2 */
#define CSR_LEDRGB_2_BASE CSR_BASE + 0x2800L
#define CSR_LEDRGB_2_R_ENABLE_ADDR CSR_BASE + 0x2800L
#define CSR_LEDRGB_2_R_ENABLE_SIZE 1
static inline uint32_t ledRGB_2_r_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x2800L);
}
static inline void ledRGB_2_r_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2800L);
}
#define CSR_LEDRGB_2_R_WIDTH_ADDR CSR_BASE + 0x2804L
#define CSR_LEDRGB_2_R_WIDTH_SIZE 1
static inline uint32_t ledRGB_2_r_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x2804L);
}
static inline void ledRGB_2_r_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2804L);
}
#define CSR_LEDRGB_2_R_PERIOD_ADDR CSR_BASE + 0x2808L
#define CSR_LEDRGB_2_R_PERIOD_SIZE 1
static inline uint32_t ledRGB_2_r_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x2808L);
}
static inline void ledRGB_2_r_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2808L);
}
#define CSR_LEDRGB_2_G_ENABLE_ADDR CSR_BASE + 0x280cL
#define CSR_LEDRGB_2_G_ENABLE_SIZE 1
static inline uint32_t ledRGB_2_g_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x280cL);
}
static inline void ledRGB_2_g_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x280cL);
}
#define CSR_LEDRGB_2_G_WIDTH_ADDR CSR_BASE + 0x2810L
#define CSR_LEDRGB_2_G_WIDTH_SIZE 1
static inline uint32_t ledRGB_2_g_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x2810L);
}
static inline void ledRGB_2_g_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2810L);
}
#define CSR_LEDRGB_2_G_PERIOD_ADDR CSR_BASE + 0x2814L
#define CSR_LEDRGB_2_G_PERIOD_SIZE 1
static inline uint32_t ledRGB_2_g_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x2814L);
}
static inline void ledRGB_2_g_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2814L);
}
#define CSR_LEDRGB_2_B_ENABLE_ADDR CSR_BASE + 0x2818L
#define CSR_LEDRGB_2_B_ENABLE_SIZE 1
static inline uint32_t ledRGB_2_b_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x2818L);
}
static inline void ledRGB_2_b_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2818L);
}
#define CSR_LEDRGB_2_B_WIDTH_ADDR CSR_BASE + 0x281cL
#define CSR_LEDRGB_2_B_WIDTH_SIZE 1
static inline uint32_t ledRGB_2_b_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x281cL);
}
static inline void ledRGB_2_b_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x281cL);
}
#define CSR_LEDRGB_2_B_PERIOD_ADDR CSR_BASE + 0x2820L
#define CSR_LEDRGB_2_B_PERIOD_SIZE 1
static inline uint32_t ledRGB_2_b_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x2820L);
}
static inline void ledRGB_2_b_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2820L);
}

/* ctrl */
#define CSR_CTRL_BASE CSR_BASE + 0x3000L
#define CSR_CTRL_RESET_ADDR CSR_BASE + 0x3000L
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple(CSR_BASE + 0x3000L);
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3000L);
}
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
static inline uint32_t ctrl_reset_soc_rst_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t ctrl_reset_soc_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_soc_rst_extract(word);
}
static inline uint32_t ctrl_reset_soc_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void ctrl_reset_soc_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_soc_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1
static inline uint32_t ctrl_reset_cpu_rst_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t ctrl_reset_cpu_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_cpu_rst_extract(word);
}
static inline uint32_t ctrl_reset_cpu_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void ctrl_reset_cpu_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_cpu_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_SCRATCH_ADDR CSR_BASE + 0x3004L
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple(CSR_BASE + 0x3004L);
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3004L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR CSR_BASE + 0x3008L
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple(CSR_BASE + 0x3008L);
}

/* timer0 */
#define CSR_TIMER0_BASE CSR_BASE + 0x3800L
#define CSR_TIMER0_LOAD_ADDR CSR_BASE + 0x3800L
#define CSR_TIMER0_LOAD_SIZE 1
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple(CSR_BASE + 0x3800L);
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3800L);
}
#define CSR_TIMER0_RELOAD_ADDR CSR_BASE + 0x3804L
#define CSR_TIMER0_RELOAD_SIZE 1
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple(CSR_BASE + 0x3804L);
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3804L);
}
#define CSR_TIMER0_EN_ADDR CSR_BASE + 0x3808L
#define CSR_TIMER0_EN_SIZE 1
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple(CSR_BASE + 0x3808L);
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3808L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR CSR_BASE + 0x380cL
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x380cL);
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x380cL);
}
#define CSR_TIMER0_VALUE_ADDR CSR_BASE + 0x3810L
#define CSR_TIMER0_VALUE_SIZE 1
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x3810L);
}
#define CSR_TIMER0_EV_STATUS_ADDR CSR_BASE + 0x3814L
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x3814L);
}
#define CSR_TIMER0_EV_STATUS_ZERO_OFFSET 0
#define CSR_TIMER0_EV_STATUS_ZERO_SIZE 1
static inline uint32_t timer0_ev_status_zero_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t timer0_ev_status_zero_read(void) {
	uint32_t word = timer0_ev_status_read();
	return timer0_ev_status_zero_extract(word);
}
#define CSR_TIMER0_EV_PENDING_ADDR CSR_BASE + 0x3818L
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x3818L);
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x3818L);
}
#define CSR_TIMER0_EV_PENDING_ZERO_OFFSET 0
#define CSR_TIMER0_EV_PENDING_ZERO_SIZE 1
static inline uint32_t timer0_ev_pending_zero_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t timer0_ev_pending_zero_read(void) {
	uint32_t word = timer0_ev_pending_read();
	return timer0_ev_pending_zero_extract(word);
}
static inline uint32_t timer0_ev_pending_zero_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void timer0_ev_pending_zero_write(uint32_t plain_value) {
	uint32_t oldword = timer0_ev_pending_read();
	uint32_t newword = timer0_ev_pending_zero_replace(oldword, plain_value);
	timer0_ev_pending_write(newword);
}
#define CSR_TIMER0_EV_ENABLE_ADDR CSR_BASE + 0x381cL
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x381cL);
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x381cL);
}
#define CSR_TIMER0_EV_ENABLE_ZERO_OFFSET 0
#define CSR_TIMER0_EV_ENABLE_ZERO_SIZE 1
static inline uint32_t timer0_ev_enable_zero_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t timer0_ev_enable_zero_read(void) {
	uint32_t word = timer0_ev_enable_read();
	return timer0_ev_enable_zero_extract(word);
}
static inline uint32_t timer0_ev_enable_zero_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void timer0_ev_enable_zero_write(uint32_t plain_value) {
	uint32_t oldword = timer0_ev_enable_read();
	uint32_t newword = timer0_ev_enable_zero_replace(oldword, plain_value);
	timer0_ev_enable_write(newword);
}

/* uart */
#define CSR_UART_BASE CSR_BASE + 0x4000L
#define CSR_UART_RXTX_ADDR CSR_BASE + 0x4000L
#define CSR_UART_RXTX_SIZE 1
static inline uint32_t uart_rxtx_read(void) {
	return csr_read_simple(CSR_BASE + 0x4000L);
}
static inline void uart_rxtx_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4000L);
}
#define CSR_UART_TXFULL_ADDR CSR_BASE + 0x4004L
#define CSR_UART_TXFULL_SIZE 1
static inline uint32_t uart_txfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x4004L);
}
#define CSR_UART_RXEMPTY_ADDR CSR_BASE + 0x4008L
#define CSR_UART_RXEMPTY_SIZE 1
static inline uint32_t uart_rxempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x4008L);
}
#define CSR_UART_EV_STATUS_ADDR CSR_BASE + 0x400cL
#define CSR_UART_EV_STATUS_SIZE 1
static inline uint32_t uart_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x400cL);
}
#define CSR_UART_EV_STATUS_TX_OFFSET 0
#define CSR_UART_EV_STATUS_TX_SIZE 1
static inline uint32_t uart_ev_status_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart_ev_status_tx_read(void) {
	uint32_t word = uart_ev_status_read();
	return uart_ev_status_tx_extract(word);
}
#define CSR_UART_EV_STATUS_RX_OFFSET 1
#define CSR_UART_EV_STATUS_RX_SIZE 1
static inline uint32_t uart_ev_status_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart_ev_status_rx_read(void) {
	uint32_t word = uart_ev_status_read();
	return uart_ev_status_rx_extract(word);
}
#define CSR_UART_EV_PENDING_ADDR CSR_BASE + 0x4010L
#define CSR_UART_EV_PENDING_SIZE 1
static inline uint32_t uart_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x4010L);
}
static inline void uart_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4010L);
}
#define CSR_UART_EV_PENDING_TX_OFFSET 0
#define CSR_UART_EV_PENDING_TX_SIZE 1
static inline uint32_t uart_ev_pending_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart_ev_pending_tx_read(void) {
	uint32_t word = uart_ev_pending_read();
	return uart_ev_pending_tx_extract(word);
}
static inline uint32_t uart_ev_pending_tx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void uart_ev_pending_tx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_pending_read();
	uint32_t newword = uart_ev_pending_tx_replace(oldword, plain_value);
	uart_ev_pending_write(newword);
}
#define CSR_UART_EV_PENDING_RX_OFFSET 1
#define CSR_UART_EV_PENDING_RX_SIZE 1
static inline uint32_t uart_ev_pending_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart_ev_pending_rx_read(void) {
	uint32_t word = uart_ev_pending_read();
	return uart_ev_pending_rx_extract(word);
}
static inline uint32_t uart_ev_pending_rx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void uart_ev_pending_rx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_pending_read();
	uint32_t newword = uart_ev_pending_rx_replace(oldword, plain_value);
	uart_ev_pending_write(newword);
}
#define CSR_UART_EV_ENABLE_ADDR CSR_BASE + 0x4014L
#define CSR_UART_EV_ENABLE_SIZE 1
static inline uint32_t uart_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x4014L);
}
static inline void uart_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4014L);
}
#define CSR_UART_EV_ENABLE_TX_OFFSET 0
#define CSR_UART_EV_ENABLE_TX_SIZE 1
static inline uint32_t uart_ev_enable_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart_ev_enable_tx_read(void) {
	uint32_t word = uart_ev_enable_read();
	return uart_ev_enable_tx_extract(word);
}
static inline uint32_t uart_ev_enable_tx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void uart_ev_enable_tx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_enable_read();
	uint32_t newword = uart_ev_enable_tx_replace(oldword, plain_value);
	uart_ev_enable_write(newword);
}
#define CSR_UART_EV_ENABLE_RX_OFFSET 1
#define CSR_UART_EV_ENABLE_RX_SIZE 1
static inline uint32_t uart_ev_enable_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart_ev_enable_rx_read(void) {
	uint32_t word = uart_ev_enable_read();
	return uart_ev_enable_rx_extract(word);
}
static inline uint32_t uart_ev_enable_rx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void uart_ev_enable_rx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_enable_read();
	uint32_t newword = uart_ev_enable_rx_replace(oldword, plain_value);
	uart_ev_enable_write(newword);
}
#define CSR_UART_TXEMPTY_ADDR CSR_BASE + 0x4018L
#define CSR_UART_TXEMPTY_SIZE 1
static inline uint32_t uart_txempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x4018L);
}
#define CSR_UART_RXFULL_ADDR CSR_BASE + 0x401cL
#define CSR_UART_RXFULL_SIZE 1
static inline uint32_t uart_rxfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x401cL);
}

#endif
