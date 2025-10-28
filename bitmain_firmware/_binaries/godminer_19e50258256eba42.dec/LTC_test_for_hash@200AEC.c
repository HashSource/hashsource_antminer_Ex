int __fastcall LTC_test_for_hash(int a1, int a2)
{
  int v2; // r3
  _DWORD v6[2915]; // [sp+Ch] [bp-2D98h] BYREF
  unsigned int v7; // [sp+2D98h] [bp-Ch] BYREF
  unsigned int i; // [sp+2D9Ch] [bp-8h]

  v7 = 0;
  memset(&v6[35], 0, 0x2D00u);
  v6[35] = 1;
  LTC_test_init_hash(a1, a2);
  get_ltc_package_count(&v7, a1, a2);
  ltc_dev_init();
  for ( i = 0; i < v7; ++i )
  {
    memset(v6, 0, 0x8Au);
    get_ltc_138byte_data(v6, i, 0, 0);
  }
  ltc_dev_uninit();
  return v2;
}
