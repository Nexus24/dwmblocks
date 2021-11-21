//X=$(curl -s http://api.coindesk.com/v1/bpi/currentprice.json  | jq '.bpi.USD.rate' | sed 's/\"\,//g') echo BTC:${X%.*}
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"BTC:", ". /usr/bin/btcprice", 5, 0},
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	{"Vol:", "echo $(amixer get Master | tail -n1 | sed -r 's/.*\\[(.*)%\\].*/\\1/')%", 1, 10}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
