int lcd_clear_result_eth_2282()
{
  lcd_show_result(0, (int)"                ", 0x10u);
  lcd_show_result(1u, (int)"                ", 0x10u);
  lcd_show_result(2u, (int)"                ", 0x10u);
  return lcd_show_result(3u, (int)"                ", 0x10u);
}
