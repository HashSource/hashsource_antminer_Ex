int __fastcall get_all_phy12_test_data(int *a1)
{
  int v1; // r3
  int v4; // [sp+8h] [bp-14h] BYREF
  int j; // [sp+Ch] [bp-10h]
  int v6; // [sp+10h] [bp-Ch]
  unsigned int i; // [sp+14h] [bp-8h]

  ltc_dev_init();
  for ( i = 0; i <= 0x17; ++i )
  {
    printf("channel %d\n", i);
    v6 = 4 * i;
    v4 = 0;
    for ( j = 0; j <= 7; ++j )
    {
      ltc_read(v6, &v4);
      printf("reg_addr:%08x, ltcdata %08x\n", v6, v4);
      *a1 = v4;
      a1 += 4;
      v6 += 96;
    }
  }
  ltc_dev_init();
  return v1;
}
