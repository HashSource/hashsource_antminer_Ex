int __fastcall softreset_hal(int a1)
{
  _BYTE v3[16]; // [sp+8h] [bp-14h] BYREF

  while ( dev_read_nonce_reg_data_hal(a1, (int)v3, 0x10u) )
    ;
  sleep(1u);
  while ( dev_read_nonce_reg_data_hal(a1, (int)v3, 0x10u) )
    ;
  return 0;
}
