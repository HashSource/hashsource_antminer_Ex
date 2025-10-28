int __fastcall set_baud_zec_1746(int a1, Elf32_Sym *a2)
{
  _BYTE v6[12]; // [sp+18h] [bp-100Ch] BYREF
  int v7; // [sp+1018h] [bp-Ch]
  unsigned __int8 v8; // [sp+101Fh] [bp-5h]

  v7 = 0;
  v8 = 26;
  if ( a2 == (Elf32_Sym *)&loc_16E360 )
    goto LABEL_21;
  if ( (int)a2 > 1500000 )
  {
    if ( a2 == (Elf32_Sym *)&loc_2FAF08 )
      goto LABEL_20;
    if ( (int)a2 > 3125000 )
    {
      if ( a2 == (Elf32_Sym *)&unk_5F5E10 )
      {
        v8 = 0;
        goto LABEL_27;
      }
      if ( a2 == (Elf32_Sym *)&unk_BEBC20 )
      {
        v8 = 0;
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    if ( a2 != (Elf32_Sym *)&loc_17D784 )
    {
      if ( a2 != (Elf32_Sym *)&loc_2DC6C0 )
        goto LABEL_26;
LABEL_20:
      v8 = 0;
      goto LABEL_27;
    }
LABEL_21:
    v8 = 1;
    goto LABEL_27;
  }
  if ( a2 == (Elf32_Sym *)&loc_70800 )
  {
    v8 = 6;
    goto LABEL_27;
  }
  if ( (int)a2 > 460800 )
  {
    if ( a2 == (Elf32_Sym *)&loc_E1000 || a2 == (Elf32_Sym *)((char *)&loc_FE500 + 2) )
    {
      v8 = 2;
      goto LABEL_27;
    }
  }
  else
  {
    if ( a2 == (Elf32_Sym *)38400 )
    {
      v8 = 80;
      goto LABEL_27;
    }
    if ( a2 == &stru_1C200 )
    {
      v8 = 26;
      goto LABEL_27;
    }
  }
LABEL_26:
  v8 = 26;
LABEL_27:
  v7 = (v8 << 8) & 0x1F00 | 0x6064;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "set_misc value %08x/%d", v7, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "set_baud_zec_1746",
    17,
    776,
    60,
    v6);
  if ( sub_1E2434(a1, v7) )
    return 48;
  else
    return 0;
}
