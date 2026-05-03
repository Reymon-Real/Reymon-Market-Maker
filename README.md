# Reymon Market Maker

The file used to define what is to be bought or sold is `setting.json`
which must be placed in the same folder as the one where you run the bot

# List Supporterd Exchanges

These are the exchanges that the bot officially supports

1. Binance
2. Kraken

# Dependencies

1. libcurl
2. OpenSSL
3. SQLite3

# Json Format

```json
{
	"exchange": "",		// Name of the exchange
	"symbol": "", 		// Symbol name
	"ordertype": "",	// Order Type
	"bid": 0, 			// Number of orders in bid
	"ask": 0,			// Number of orders in ask
	"size": 0,			// Size of the orders
	"apikey": "",		// Public API
	"apisecret": "",	// Secret API
}
```