int __fastcall lcd_show_eth_2282(unsigned __int8 a1, const char *a2)
{
  size_t v2; // r0

  v2 = strlen(a2);
  return lcd_show_result(a1, (int)a2, v2);
}
