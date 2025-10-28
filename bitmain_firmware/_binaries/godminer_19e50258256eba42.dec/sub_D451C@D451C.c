unsigned int __fastcall sub_D451C(int a1, int a2, void *a3)
{
  int v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  unsigned int v6; // r2
  _BYTE v11[80]; // [sp+4Ch] [bp-1050h] BYREF
  unsigned int v12; // [sp+104Ch] [bp-50h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-4Ch] BYREF
  _DWORD v14[7]; // [sp+1060h] [bp-3Ch] BYREF
  int v15; // [sp+107Ch] [bp-20h]
  void *src; // [sp+1080h] [bp-1Ch]
  int i; // [sp+1084h] [bp-18h]

  v12 = 0;
  memset(s, 0, sizeof(s));
  s[4] = 1;
  s[5] = a2;
  src = malloc(0x450u);
  memset(src, 0, 0x450u);
  (*(void (__fastcall **)(int, _WORD *, int, void *, unsigned int *))(a1 + 316))(a1, s, 92, src, &v12);
  for ( i = 0; i < (int)v12; ++i )
  {
    if ( a2 == *((unsigned __int16 *)src + 6 * i + 3) )
    {
      V_LOCK();
      sub_CA5F0((int)v14, *(int *)(a1 + 272));
      v3 = *((unsigned __int8 *)src + 12 * i + 4);
      v4 = *((unsigned __int16 *)src + 6 * i + 3);
      v5 = sub_CA9D4(*((_DWORD *)src + 3 * i));
      logfmt_raw(
        v11,
        0x1000u,
        0,
        v15,
        v14[0],
        v14[1],
        v14[2],
        v14[3],
        v14[4],
        v14[5],
        v14[6],
        v15,
        "[Chip-%d status] asic %02x, reg_addr %04x reg_data %08x",
        i,
        v3,
        v4,
        v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_chip_status_CKB_2042",
        36,
        1674,
        20,
        v11);
    }
  }
  if ( a3 )
  {
    v6 = v12;
    if ( *(_DWORD *)(a1 + 464) < v12 )
      v6 = *(_DWORD *)(a1 + 464);
    memcpy(a3, src, 12 * v6);
  }
  free(src);
  return v12;
}
