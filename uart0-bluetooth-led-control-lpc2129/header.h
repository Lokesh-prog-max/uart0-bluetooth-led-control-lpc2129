void uart0_init(unsigned int );
unsigned char uart0_rx(void);
void uart0_tx(unsigned char );
void uart0_tx_string(const char *);
void uart0_rx_string(char *,unsigned int );
void uart0_tx_integer(int );
int uart0_rx_integer(void);
