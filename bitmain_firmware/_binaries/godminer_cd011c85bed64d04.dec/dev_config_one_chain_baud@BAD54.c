int __fastcall dev_config_one_chain_baud(int a1, int a2)
{
  char v4; // r6
  int v5; // r2
  int v6; // r5
  int v8; // [sp+0h] [bp-8h] BYREF
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  uart_get_config(0, 0, &v8, (int)v9);
  printf("%s: get zynq bt8d %08x\n", "dev_config_one_chain_baud", v8);
  v4 = 8 * a1;
  if ( a2 == 3000000 )
    goto LABEL_22;
  if ( a2 <= 3000000 )
  {
    if ( a2 == 921600 )
    {
      v5 = 2;
      v6 = 2 << v4;
      goto LABEL_13;
    }
    if ( a2 > 921600 )
    {
      if ( (_UNKNOWN *)a2 == &unk_16E360 || a2 == 1562500 )
      {
        v5 = 1;
        v6 = 1 << v4;
        goto LABEL_13;
      }
    }
    else if ( a2 == 460800 )
    {
      v5 = 6;
      v6 = 6 << v4;
      goto LABEL_13;
    }
LABEL_19:
    v5 = 26;
    v6 = 26 << v4;
    goto LABEL_13;
  }
  if ( a2 == 6250000 )
  {
    v5 = 3;
    v6 = 3 << v4;
    goto LABEL_13;
  }
  if ( a2 <= 6250000 )
  {
    if ( a2 != 3125000 )
      goto LABEL_19;
LABEL_22:
    v6 = 0;
    v5 = 0;
    goto LABEL_13;
  }
  if ( a2 == 12500000 )
  {
    v5 = 4;
    v6 = 4 << v4;
    goto LABEL_13;
  }
  if ( a2 != 25000000 )
    goto LABEL_19;
  v5 = 5;
  v6 = 5 << v4;
LABEL_13:
  printf("%s: set zynq bt8d %d\n", "dev_config_one_chain_baud", v5);
  v8 = v8 & ~(63 << v4) | v6;
  uart_set_config(a1, 0, &v8);
  usleep((__useconds_t)&stru_1869C.st_value);
  uart_get_config(0, 0, &v8, (int)v9);
  printf("%s: after set baud, get zynq bt8d %08x\n", "dev_config_one_chain_baud", v8);
  return 0;
}
