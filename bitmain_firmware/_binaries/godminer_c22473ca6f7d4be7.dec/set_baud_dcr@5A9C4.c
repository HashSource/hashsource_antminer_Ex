// attributes: thunk
int __fastcall set_baud_dcr(int a1, int a2)
{
  return chip_setting_fuart_cfg_dcr(a1, a2);
}
