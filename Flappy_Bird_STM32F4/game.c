#include "game.h"

const uint16_t ToadImage[] = {
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0X9CF3, 0X39EF, 0x0001, 0x0001, 0x0001,
	0X5AE7, 0x7D7C, 0x7D7C, 0XBDF7, 0x0001, 0x0001, 0x0001, 0x0001,
	0XFFDD, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0XFFDD, 0X18E7, 0X39E7, 0X5AE7, 0X7BEF, 0X5AE7, 0X59E7,
	0x0001, 0X39E7, 0X39E7, 0x0001, 0x7D7C, 0XFFDD, 0XFFDD, 0X9CF3,
	0x0001, 0X9DF7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0X9CF3, 0X59E7, 0XBDF7, 0X7BEF, 0X9CF3, 0XFFDD, 0XBED7,
	0XBDF7, 0X18E7, 0x0001, 0XBDF7, 0X7BEF, 0XFFDD, 0x7D7C, 0x7D7C,
	0X39E7, 0X39E7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0X9CF3, 0X7CEF, 0X39E7, 0XFFDD, 0XBED7, 0XBED7, 0XBED7,
	0X9CF3, 0X5AEF, 0X39E7, 0X9CF3, 0XBDF7, 0X18E7, 0X39E7, 0x0001,
	0x0001, 0X5AE7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XFFDD, 0X7BEF,
	0X38E0, 0x0001, 0X7BEF, 0X39E7, 0x7D7C, 0XBED7, 0XBED7, 0XFFDD,
	0x0001, 0x0001, 0x0001, 0x0001, 0XBDF7, 0X5AEF, 0X39E7, 0x7D7C,
	0X9CF3, 0X39E7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XBDF7, 0X7BEF, 0X18E7, 0x0001,
	0X7BEF, 0X7BEF, 0X7BEF, 0X3AE7, 0x7D7C, 0XBED7, 0XBED7, 0XFFDD,
	0X5AE7, 0X5AE7, 0x0001, 0x0001, 0XBED7, 0X5AE7, 0x7D7C, 0x7D7C,
	0X39E7, 0X5AEF, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0X7BEF, 0x0001, 0X7BEF, 0XBDF7, 0XFFDD,
	0x7D7C, 0X7BEF, 0X18E7, 0X59E7, 0X9CF3, 0XFFDD, 0XFFDD, 0XFFDD,
	0XFFDD, 0X19E7, 0x0001, 0X59E7, 0X7AE7, 0X59E7, 0X7AEF, 0X5AEF,
	0x0001, 0XFFDD, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0X9CF3, 0X9CF3, 0x7D7C, 0x7D7C, 0X9CF7,
	0X59E0, 0X79E7, 0x0001, 0x0001, 0x0001, 0X39EF, 0X5AE7, 0X5AEF,
	0x0001, 0X38E0, 0X79E7, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
	0X18E7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XBDF7, 0X18E7, 0X9CF3,
	0X18E7, 0X79E0, 0XBBE7, 0X7AE7, 0X38E0, 0X38E0, 0X38E0, 0X38E0,
	0X79E7, 0XBAE7, 0X9AE7, 0X59E7, 0XDCE7, 0XBAE7, 0X9AE7, 0XBAE7,
	0X99E7, 0X39E7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0X7BEF, 0X7BEF, 0XBDF7, 0XBDF7,
	0XBED7, 0X7BEF, 0X39E7, 0X79E0, 0XBAE7, 0X9AE7, 0X9AE7, 0X9AE7,
	0X9AE7, 0X9AE7, 0X9AE7, 0X38E0, 0X79E7, 0X59E7, 0X38E7, 0X59E7,
	0X5AE7, 0X38E7, 0XBDF7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0XFFDD, 0X5AE7, 0X38E0, 0XDEEF, 0XBDF7, 0XBDF7,
	0XBDF7, 0XBDF7, 0X9CF3, 0X7BEF, 0X58E0, 0X9AE7, 0X9AE7, 0X9AE7,
	0X9AE7, 0X9AE7, 0X38E0, 0X39E0, 0X79E7, 0X59E7, 0X79E7, 0X79E7,
	0X5AE7, 0X38E0, 0X39E7, 0XFFDD, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0X7BE7, 0x0001, 0x0001, 0X59E0, 0X9CE7, 0XBDF7,
	0XBDF7, 0XBDF7, 0XBDF7, 0XBDF7, 0X7CEF, 0X58E7, 0X99E0, 0XBAE7,
	0X7AE7, 0X38E0, 0X39E0, 0X7AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7,
	0X9AE7, 0X9AE7, 0X38E0, 0XFFDD, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0XFFDD, 0X5AE7, 0X5AE0, 0XBDE0, 0X38E0, 0x0001, 0x0001, 0X7CE0,
	0XBDF7, 0XBDF7, 0XBDF7, 0XBDF7, 0XBDF7, 0XBDF7, 0X39EF, 0X38E0,
	0X9AE7, 0X9AE0, 0XBAE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7,
	0X9AE7, 0X7AE7, 0x0001, 0XFFDD, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0X39E7, 0X5AE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X5AE0, 0X39E0, 0X39E0,
	0X9CE7, 0X9CF3, 0XBDF7, 0XBDF7, 0XBDF7, 0XBDF7, 0XBDF7, 0X9DF7,
	0X38E0, 0X99E7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7,
	0X9AE7, 0X7AE7, 0X39E0, 0XFFDD, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XBDF7,
	0X39E0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7CE0, 0X7AE0, 0x0001,
	0X38E0, 0X7BE0, 0XBDEF, 0XBDF7, 0XBDF7, 0XBDF7, 0XBDF7, 0XBED7,
	0X9CF3, 0X5AE7, 0X38E7, 0X79E7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7,
	0X9AE7, 0X79E0, 0X7CEF, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0X39F7,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0,
	0x0001, 0x0001, 0X39E0, 0X9CE0, 0XA63D, 0XBDF7, 0XBDF7, 0XBDF7,
	0XBDF7, 0XBDF7, 0XBDF7, 0X7BEF, 0X78E0, 0XBAE7, 0X9AE7, 0X9AE7,
	0XBAE7, 0X38E0, 0X9CF7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XBED7, 0X39E0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0,
	0X9CE0, 0X38E0, 0x0001, 0X39E0, 0X39E0, 0X9CF3, 0XBDF7, 0XBDF7,
	0XBDF7, 0XBED7, 0X7BEF, 0x0001, 0X7BEF, 0X39E7, 0X59E0, 0X5AE0,
	0X19E0, 0X38E0, 0x0001, 0X9CF7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XFFDD, 0X39E7,
	0X7BE0, 0X39E0, 0X5AE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X9CE0, 0X38E0, 0X38E0, 0X5AE7, 0XBDF7, 0XBDF7,
	0XBDF7, 0X5AE7, 0X38E0, 0X9AE7, 0X59E7, 0X5AEF, 0X39E7, 0X5BEF,
	0X38E0, 0XBAE7, 0XBAE7, 0x0001, 0XBDF7, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0X5AEF,
	0X39E0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X5AE0, 0x0001, 0x0001, 0X7BEF, 0XFFDD,
	0X18E7, 0X59E7, 0X9AE7, 0X9AE7, 0X79E7, 0X38E0, 0x0001, 0X38E0,
	0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X38E0, 0X9CF3, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0X5AE7,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X38E0, 0X7BE0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X5AE0, 0x0001, 0x0001, 0x0001,
	0X7AE0, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X79E7, 0x0001, 0X79E7,
	0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X79E7, 0X59E7, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0X39E7, 0X5AE0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X39E0, 0X7BE0, 0X7BE0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X9CE0, 0X59E0, 0x0001,
	0x0001, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X59E0, 0X7CEF,
	0X58E0, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X58E0, 0X7BEF, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XBDF7, 0X39E0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X5AE0, 0X5AE0, 0X7BE0, 0X7BE0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7AE0,
	0X19E0, 0X38E0, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X59E0, 0XBDF7,
	0X9CF3, 0X38E0, 0X79E0, 0X9AE7, 0X9AE7, 0X79E0, 0XBCEF, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0X5AE7, 0X5AE0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X5AE0, 0X38E0, 0X7CE0, 0X7BE0, 0X7BE0, 0X7BE0,
	0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X5AE0, 0X5AE0, 0X5AE0, 0X5AE0,
	0X39E7, 0X7BEF, 0X7AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0x0001,
	0x7D7C, 0XBDF7, 0X59E7, 0X59E0, 0X58E0, 0X58E0, 0XBCEF, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0X7BEF, 0X5AE7, 0X7BE0, 0X7BE0, 0X7BE0,
	0X7BE0, 0X5AE0, 0X39E0, 0X5AE0, 0X38E0, 0x0001, 0X38E0, 0x0001,
	0x0001, 0x0001, 0x0001, 0x0001, 0X9CF3, 0X7BEF, 0X9CEF, 0XBED7,
	0XFFDD, 0x7D7C, 0X7BE7, 0X59E7, 0X9AE7, 0X9AE7, 0X9AE7, 0X38E0,
	0x7D7C, 0x7D7C, 0x7D7C, 0X9DF7, 0X7BEF, 0X9CEF, 0XBED7, 0x7D7C,
	0x7D7C, 0XBDF7, 0x0001, 0X38E0, 0X7BE0, 0X7BE0, 0X7BE0, 0X7BE0,
	0X5AE0, 0X39E0, 0X7BE0, 0X7BE0, 0X7CE0, 0X7BE0, 0X7BE7, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0X5CEF, 0X59E0, 0X9AE7, 0X9AE7, 0X38E0,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0X7AEF, 0X99E7, 0XBAE7, 0X59E0, 0X5AE0, 0X7BE0, 0X7BE0,
	0x0001, 0X5AE0, 0X7BE0, 0X7BE0, 0X7BE0, 0X39E7, 0XFFDD, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0X9CF3, 0X5AE7, 0X79E7, 0X5AE7,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0XBDF7, 0X38E0, 0X9AE7, 0X9AE7, 0X9AE7, 0X79E7, 0X5AE0, 0X39E0,
	0X59E7, 0X7AE7, 0X59E0, 0X5AE0, 0X5AE0, 0X9CF7, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0XBDF7, 0XFFDD,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0X9CF3, 0X79E7, 0X9AE7, 0X9AE7, 0X9AE7, 0XBAE7, 0X59E0, 0x0001,
	0XDBE7, 0X9AE7, 0X9AE7, 0X7AE7, 0x0001, 0XFFDD, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0XBED7, 0X39E0, 0X9AE7, 0X9AE7, 0X9AE7, 0X9AE7, 0X7AE7, 0XA63D,
	0X58E0, 0X9AE7, 0X7AE7, 0X38E0, 0XBED7, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0X9CEF, 0X38E0, 0X9AE7, 0X9AE7, 0X38E0, 0X9CEF, 0x7D7C,
	0X9CF3, 0X39E0, 0X39E7, 0X9CF3, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0XFFDD, 0X7CEF, 0X5AE7, 0X5AE7, 0X7CEF, 0XFFDD, 0x7D7C,
	0x7D7C, 0XBED7, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0XFFDD, 0XFFDD, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
	0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C, 0x7D7C,
};

const uint16_t TubeColor[] = {
	0X02E3, 0X0303, 0X0323, 0X0343, 0X0363, 0X0BA3, 0X0BC4, 0X13E4,
	0X1424, 0X1C44, 0X2465, 0X24A5, 0X2CC5, 0X3506, 0X3526, 0X3D47,
	0X4587, 0X4DA7, 0X4DE8, 0X5608, 0X5E49, 0X6669, 0X66A9, 0X6ECA,
	0X76EA, 0X770B, 0X7F2B, 0X874B, 0X876C, 0X8F8C, 0X8FAC, 0X97CC,
};


typedef struct{
	_Bool IsGrounded;
	uint16_t posX;
	uint8_t Height;
} Tube;

uint8_t score = 0;

uint16_t toad_posX;
uint16_t toad_posY;
int8_t toad_SpeedY;

Tube tubes[2];


void Game_Init()
{
	__GPIOC_CLK_ENABLE();
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.Pin = GPIO_PIN_5;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	POINT_COLOR = DARKBLUE;
	LCD_DrawLine(0, 16, 240, 16);
	POINT_COLOR = RED;
	LCD_ShowString(3, 0, 48, 16, 16, "score: ");
	

	toad_posX = DEFAULT_TOAD_POS_X;
	toad_posY = DEFAULT_TOAD_POS_Y;
	toad_SpeedY = 0;

	tubes[0].posX = 240;
	tubes[0].Height = 150;
	tubes[0].IsGrounded = 1;

	tubes[1].posX = 100;
	tubes[1].Height = 0;
	score = 0;
}


void Toad_Go(void)
{
	if (toad_posY >= 288) {
		Game_Over();
		return;
	}

	if (SCREEN_TOUCHED) {
		toad_SpeedY = -7;
	}
	else {
		toad_SpeedY += 1;
	}

	LCD_ColorFill(toad_posX, toad_posY, 40, 32, BACK_COLOR);

	toad_posY += toad_SpeedY;

	if (toad_posY < 17) {
		toad_posY = 17;
		toad_SpeedY = 0;
	}

	LCD_DrawPicture(toad_posX, toad_posY, 40, 32, ToadImage);
	Tube_Move();
}

void Tube_Move(void)
{
	uint16_t y1, y2;

	for (uint8_t k = 0; k < 2; k++)
	{
		if (tubes[k].IsGrounded)
		{
			y1 = 320 - tubes[k].Height;
			y2 = 320;
		}
		else
		{
			y1 = 17;
			y2 = tubes[k].Height;
		}

		if ((toad_posX > tubes[k].posX && toad_posX < tubes[k].posX + TUBE_WIDTH - 4) 
		|| (toad_posX + 40 > tubes[k].posX && toad_posX  + 40 < tubes[k].posX + TUBE_WIDTH))
		{
			if (tubes[k].IsGrounded)
			{
				if (toad_posY + 30 > y1)
				{
					Game_Over();
					return;
				}
			}
			else
			{
				if (toad_posY < y2)
				{
					Game_Over();
					return;
				}
			}
		}

		LCD_ColorFill(tubes[k].posX, y1, TUBE_WIDTH, tubes[k].Height, BACK_COLOR);

		tubes[k].posX -= 1;

		if (tubes[k].posX < 2)
		{
			tubes[k].posX = 240;
			tubes[k].Height = 61 + toad_posY % 149;
			tubes[k].IsGrounded = (score + toad_posY) & 1;
			LCD_ShowNum(48, 0, ++score, 3, 16);

			continue;
		}
		
		for (uint8_t i = 0; i < tubes[k].Height; i++)
		{
			LCD_SetCursor(tubes[k].posX, y1 + i);
			LCD->REG = CMD_WRITE_RAM;

			uint8_t delta = 240 - tubes[k].posX;
			delta = delta > TUBE_WIDTH ? TUBE_WIDTH : delta;


			for (uint16_t j = 0; j < delta; j++)
			{
				LCD->RAM = TubeColor[j];
			}
		}
	}
}

void Game_Over(void)
{
	LCD_Clear(BACK_COLOR);

	LCD_ShowString(64, 120, 120, 24, 24, "Game Over!");
	LCD_ShowString(64, 160, 100, 16, 16, "your score is");
	LCD_ShowNum(170, 160, score, 3, 16);

	HAL_Delay(600);
	while (!SCREEN_TOUCHED) {
		HAL_Delay(600);
	}
	LCD_Clear(BACK_COLOR);
	Game_Init();
}


