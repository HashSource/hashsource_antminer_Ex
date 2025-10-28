int __fastcall sub_F4540(int a1, void *a2, unsigned int a3)
{
  unsigned int v3; // r2
  _BYTE v8[72]; // [sp+44h] [bp-1048h] BYREF
  int v9; // [sp+1044h] [bp-48h] BYREF
  _WORD s[8]; // [sp+1048h] [bp-44h] BYREF
  _DWORD v11[7]; // [sp+1058h] [bp-34h] BYREF
  int v12; // [sp+1074h] [bp-18h]
  void *src; // [sp+1078h] [bp-14h]
  int i; // [sp+107Ch] [bp-10h]

  v9 = 0;
  memset(s, 0, sizeof(s));
  s[4] = 1;
  s[5] = 52;
  src = malloc(12 * *(_DWORD *)(a1 + 464));
  memset(src, 0, 12 * *(_DWORD *)(a1 + 464));
  (*(void (__fastcall **)(int, _WORD *, _DWORD, void *, int *))(a1 + 316))(a1, s, *(_DWORD *)(a1 + 464), src, &v9);
  for ( i = 0; i < v9; ++i )
  {
    if ( *((_WORD *)src + 6 * i + 3) == 52 )
    {
      V_LOCK();
      sub_EC020((int)v11, *(int *)(a1 + 272));
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v12,
        v11[0],
        v11[1],
        v11[2],
        v11[3],
        v11[4],
        v11[5],
        v11[6],
        v12,
        "[Chip status] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)src + 12 * i + 4),
        *((unsigned __int16 *)src + 6 * i + 3),
        *((_DWORD *)src + 3 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_crc_status_DCR_1727",
        35,
        1472,
        60,
        v8);
    }
  }
  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 464);
    if ( v3 >= a3 )
      v3 = a3;
    memcpy(a2, src, 12 * v3);
  }
  free(src);
  return v9;
}
