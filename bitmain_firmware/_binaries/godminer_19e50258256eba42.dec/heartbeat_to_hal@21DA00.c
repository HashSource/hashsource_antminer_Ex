int __fastcall heartbeat_to_hal(int a1)
{
  int is_pic_mcu_en; // r3

  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
    return pic1704_heart_beat(g_chain_info[2 * a1]);
  return is_pic_mcu_en;
}
