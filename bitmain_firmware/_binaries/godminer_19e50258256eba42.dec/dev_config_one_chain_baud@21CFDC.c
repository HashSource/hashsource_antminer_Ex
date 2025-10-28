int __fastcall dev_config_one_chain_baud(int a1, Elf32_Sym *a2)
{
  _BYTE v5[4]; // [sp+Ch] [bp-10h] BYREF
  int v6; // [sp+10h] [bp-Ch] BYREF
  int v7; // [sp+14h] [bp-8h]

  uart_get_config(0, 0, &v6, (int)v5);
  printf("%s: get zynq bt8d %08x\n", "dev_config_one_chain_baud", v6);
  if ( a2 == (Elf32_Sym *)&loc_17D784 )
    goto LABEL_21;
  if ( (int)a2 <= 1562500 )
  {
    if ( a2 == (Elf32_Sym *)&loc_70800 )
    {
      v7 = 6;
      goto LABEL_26;
    }
    if ( (int)a2 <= 460800 )
    {
      if ( a2 != &stru_1C200 )
        goto LABEL_25;
      v7 = 26;
      goto LABEL_26;
    }
    if ( a2 == (Elf32_Sym *)&loc_E1000 )
    {
      v7 = 2;
      goto LABEL_26;
    }
    if ( a2 != (Elf32_Sym *)&loc_16E360 )
      goto LABEL_25;
LABEL_21:
    v7 = 1;
    goto LABEL_26;
  }
  if ( a2 == (Elf32_Sym *)&unk_5F5E10 )
  {
    v7 = 3;
  }
  else if ( (int)a2 > (int)&unk_5F5E10 )
  {
    if ( a2 == (Elf32_Sym *)&unk_BEBC20 )
    {
      v7 = 4;
    }
    else
    {
      if ( a2 != (Elf32_Sym *)25000000 )
      {
LABEL_25:
        v7 = 26;
        goto LABEL_26;
      }
      v7 = 5;
    }
  }
  else
  {
    if ( a2 != (Elf32_Sym *)&loc_2DC6C0 && a2 != (Elf32_Sym *)&loc_2FAF08 )
      goto LABEL_25;
    v7 = 0;
  }
LABEL_26:
  printf("%s: set zynq bt8d %d\n", "dev_config_one_chain_baud", v7);
  v6 = (v7 << (8 * a1)) | v6 & ~(63 << (8 * a1));
  uart_set_config(a1, 0, &v6);
  usleep((__useconds_t)&stru_186A0);
  uart_get_config(0, 0, &v6, (int)v5);
  printf("%s: after set baud, get zynq bt8d %08x\n", "dev_config_one_chain_baud", v6);
  return 0;
}
