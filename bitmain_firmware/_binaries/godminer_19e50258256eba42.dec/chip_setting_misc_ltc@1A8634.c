int __fastcall chip_setting_misc_ltc(int a1, Elf32_Sym *a2)
{
  _BYTE v5[32]; // [sp+1Ch] [bp-1020h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-20h] BYREF
  int v7; // [sp+102Ch] [bp-10h]
  unsigned __int8 v8; // [sp+1037h] [bp-5h]

  v7 = 0;
  v8 = 26;
  memset(s, 0, sizeof(s));
  s[2] = 1572865;
  if ( a2 == (Elf32_Sym *)&loc_16E360 )
    goto LABEL_21;
  if ( (int)a2 <= 1500000 )
  {
    if ( a2 == (Elf32_Sym *)&loc_70800 )
    {
      v8 = 6;
    }
    else if ( (int)a2 > 460800 )
    {
      if ( a2 != (Elf32_Sym *)&loc_E1000 && a2 != (Elf32_Sym *)((char *)&loc_FE500 + 2) )
        goto LABEL_26;
      v8 = 2;
    }
    else if ( a2 == (Elf32_Sym *)38400 )
    {
      v8 = 80;
    }
    else
    {
      if ( a2 != &stru_1C200 )
        goto LABEL_26;
      v8 = 26;
    }
    goto LABEL_27;
  }
  if ( a2 == (Elf32_Sym *)&loc_2FAF08 )
  {
LABEL_20:
    v8 = 0;
    goto LABEL_27;
  }
  if ( (int)a2 <= 3125000 )
  {
    if ( a2 != (Elf32_Sym *)&loc_17D784 )
    {
      if ( a2 != (Elf32_Sym *)&loc_2DC6C0 )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_21:
    v8 = 1;
    goto LABEL_27;
  }
  if ( a2 == (Elf32_Sym *)&unk_5F5E10 )
  {
    v8 = 0;
  }
  else
  {
    if ( a2 != (Elf32_Sym *)&unk_BEBC20 )
    {
LABEL_26:
      v8 = 26;
      goto LABEL_27;
    }
    v8 = 0;
  }
LABEL_27:
  v7 = (v8 << 8) & 0x1F00 | 0x70060F1;
  s[0] = v7;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "set_misc value %08x/%d", s[0], a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_misc_ltc",
    21,
    98,
    60,
    v5);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
