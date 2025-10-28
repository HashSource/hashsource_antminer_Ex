int __fastcall sub_1B41C0(int a1, char a2, int a3, void *a4)
{
  int v4; // r5
  int v5; // r6
  unsigned int v6; // r0
  _BYTE v12[80]; // [sp+4Ch] [bp-1050h] BYREF
  int v13; // [sp+104Ch] [bp-50h] BYREF
  _WORD s[8]; // [sp+1050h] [bp-4Ch] BYREF
  _DWORD v15[7]; // [sp+1060h] [bp-3Ch] BYREF
  int v16; // [sp+107Ch] [bp-20h]
  void *src; // [sp+1080h] [bp-1Ch]
  int i; // [sp+1084h] [bp-18h]

  v13 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[4]) = 0;
  HIBYTE(s[4]) = a2;
  s[5] = a3;
  src = malloc(0xCu);
  memset(src, 0, 0xCu);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *))(a1 + 316))(a1, s, 1, src, &v13);
  for ( i = 0; i < v13; ++i )
  {
    if ( a3 == *((unsigned __int16 *)src + 6 * i + 3) )
    {
      V_LOCK();
      sub_1A9DE8((int)v15, *(int *)(a1 + 272));
      v4 = *((unsigned __int8 *)src + 12 * i + 4);
      v5 = *((unsigned __int16 *)src + 6 * i + 3);
      v6 = sub_1AA37C(*((_DWORD *)src + 3 * i));
      logfmt_raw(
        v12,
        0x1000u,
        0,
        v16,
        v15[0],
        v15[1],
        v15[2],
        v15[3],
        v15[4],
        v15[5],
        v15[6],
        v16,
        "[Chip-%d status] asic %02x, reg_addr %04x reg_data %08x",
        i,
        v4,
        v5,
        v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_single_chip_status_RVN",
        38,
        1703,
        20,
        v12);
    }
  }
  if ( a4 )
    memcpy(a4, src, 0xCu);
  free(src);
  return v13;
}
