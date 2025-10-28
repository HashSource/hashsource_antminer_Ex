// attributes: thunk
int __fastcall set_baud_kda(int a1, int a2)
{
  return chip_setting_fuart_cfg_kda(a1, a2);
}
