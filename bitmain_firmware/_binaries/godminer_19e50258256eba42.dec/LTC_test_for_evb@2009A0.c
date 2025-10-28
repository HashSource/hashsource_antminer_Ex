unsigned int LTC_test_for_evb()
{
  _DWORD v1[2915]; // [sp+4h] [bp-2D98h] BYREF
  unsigned int v2; // [sp+2D90h] [bp-Ch] BYREF
  unsigned int i; // [sp+2D94h] [bp-8h]

  v2 = 0;
  memset(&v1[35], 0, 0x2D00u);
  v1[35] = 1;
  LTC_test_init_evb();
  get_ltc_package_count_evb(&v2);
  for ( i = 0; i < v2; ++i )
  {
    memset(v1, 0, 0x8Au);
    get_ltc_138byte_data(v1, i, 0, 0);
  }
  return v2;
}
