//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/					    /*Command*/							            /*Update Interval*/ /*Update Signal*/
  {"^c#3b414d^^c#7aa2f7^"   	, "net $(wifiInterface)"   			                  , 		1, 			  0},
  //is slow to update
  //{"^c#3b414d^^c#7aa2f7^ "   , "printf '%s USDT\n' $(curl -s rate.sx/1btc | cut -d '.' -f1)"   			  , 		5, 			  0},
  {"^c#3b414d^^c#7aa2f7^"       , "audio"       					                      , 		1, 			  0},
  {"^c#3b414d^^b#7ec7a2^ "      , "battery fancy"                               , 		1, 			  0},
  {"^c#1e222a^^b#70A1C1^  "    , "echo $(light | cut -d'.' -f1)%"              , 		0, 			 10}, //this signal is used as pkill -RTMIN+10 dwmblocks
  {"^c#3b414d^^b#7ec7a2^  "    , "ram"                                         , 		2, 			  0},
  {"^c#1e222a^^b#70A1C1^  "    , "cpu" 						                            , 		2, 			  0},
  {"^c#1e222a^^b#668ee3^ 羽 "   , "date '+%a %b %d, %r '" 				              ,		  2, 		    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
