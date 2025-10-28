// attributes: thunk
int __fastcall set_baud_hns(int a1, int a2)
{
  return chip_setting_fuart_cfg_hns(a1, a2);
}
