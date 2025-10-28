int __fastcall dev_config_hal(Elf32_Sym *a1)
{
  int v3; // [sp+8h] [bp-14h] BYREF
  int v4; // [sp+Ch] [bp-10h] BYREF
  int v5; // [sp+10h] [bp-Ch]
  _DWORD *all_created_runtime; // [sp+14h] [bp-8h]

  all_created_runtime = get_all_created_runtime(&v3);
  if ( a1 == (Elf32_Sym *)&loc_17D784 )
    goto LABEL_21;
  if ( (int)a1 <= 1562500 )
  {
    if ( a1 == (Elf32_Sym *)&loc_70800 )
    {
      v5 = 6;
      goto LABEL_26;
    }
    if ( (int)a1 <= 460800 )
    {
      if ( a1 != &stru_1C200 )
        goto LABEL_25;
      v5 = 26;
      goto LABEL_26;
    }
    if ( a1 == (Elf32_Sym *)&loc_E1000 )
    {
      v5 = 2;
      goto LABEL_26;
    }
    if ( a1 != (Elf32_Sym *)&loc_16E360 )
      goto LABEL_25;
LABEL_21:
    v5 = 1;
    goto LABEL_26;
  }
  if ( a1 == (Elf32_Sym *)&unk_5F5E10 )
  {
    v5 = 3;
  }
  else if ( (int)a1 > (int)&unk_5F5E10 )
  {
    if ( a1 == (Elf32_Sym *)&unk_BEBC20 )
    {
      v5 = 4;
    }
    else
    {
      if ( a1 != (Elf32_Sym *)25000000 )
      {
LABEL_25:
        v5 = 26;
        goto LABEL_26;
      }
      v5 = 5;
    }
  }
  else
  {
    if ( a1 != (Elf32_Sym *)&loc_2DC6C0 && a1 != (Elf32_Sym *)&loc_2FAF08 )
      goto LABEL_25;
    v5 = 0;
  }
LABEL_26:
  printf("%s: set zynq bt8d %d\n", "dev_config_hal", v5);
  v4 = (v5 << 24) | (v5 << 16) | (v5 << 8) | v5;
  uart_set_config(0, 0, &v4);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
