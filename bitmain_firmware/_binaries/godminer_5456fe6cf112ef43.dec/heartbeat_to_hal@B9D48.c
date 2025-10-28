int __fastcall heartbeat_to_hal(int a1)
{
  return pic1704_heart_beat(g_chain_info[2 * a1]);
}
