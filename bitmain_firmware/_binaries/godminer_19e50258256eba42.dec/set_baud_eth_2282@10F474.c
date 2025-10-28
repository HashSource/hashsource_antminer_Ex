int __fastcall set_baud_eth_2282(int a1, Elf32_Sym *a2)
{
  _BYTE v5[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v6[7]; // [sp+1030h] [bp-34h] BYREF
  int v7; // [sp+104Ch] [bp-18h]
  int v8; // [sp+1050h] [bp-14h]
  unsigned __int8 v9; // [sp+1057h] [bp-Dh]

  v8 = -65536;
  v9 = 26;
  if ( a2 == (Elf32_Sym *)((char *)&loc_FE500 + 2) )
  {
LABEL_18:
    v9 = 2;
    goto LABEL_23;
  }
  if ( (int)a2 > 1041666 )
  {
    if ( a2 != (Elf32_Sym *)&loc_17D784 )
    {
      if ( (int)a2 > 1562500 )
      {
        if ( a2 != (Elf32_Sym *)&loc_2DC6C0 && a2 != (Elf32_Sym *)&loc_2FAF08 )
          goto LABEL_22;
        v9 = 0;
        goto LABEL_23;
      }
      if ( a2 != (Elf32_Sym *)&loc_16E360 )
        goto LABEL_22;
    }
    v9 = 1;
    goto LABEL_23;
  }
  if ( a2 == &stru_1C200 )
  {
    v9 = 26;
    goto LABEL_23;
  }
  if ( (int)a2 > (int)&stru_1C200 )
  {
    if ( a2 == (Elf32_Sym *)&loc_70800 )
    {
      v9 = 6;
      goto LABEL_23;
    }
    if ( a2 != (Elf32_Sym *)&loc_E1000 )
      goto LABEL_22;
    goto LABEL_18;
  }
  if ( a2 != (Elf32_Sym *)38400 )
  {
LABEL_22:
    v9 = 26;
    goto LABEL_23;
  }
  v9 = 80;
LABEL_23:
  v8 |= v9;
  V_LOCK();
  sub_FBD60((int)v6, *(int *)(a1 + 272));
  logfmt_raw(v5, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "set baudrate to %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_baud_eth_2282",
    17,
    1446,
    60,
    v5);
  return sub_FDBFC(a1, v8);
}
