int __fastcall get_all_ip3_test_data(int *a1, int a2)
{
  int v2; // r3
  int v6; // [sp+8h] [bp-Ch] BYREF
  unsigned int i; // [sp+Ch] [bp-8h]

  ltc_dev_init();
  printf("dout %d\n", a2);
  v6 = 0;
  for ( i = 4 * a2; i < 4 * (a2 + 247680); i += 96 )
  {
    printf("reg_addr:%08x, ltcdata %08x\n", i, v6);
    ltc_read(i, &v6);
    *a1 = v6;
    a1 += 4;
  }
  ltc_dev_uninit();
  return v2;
}
