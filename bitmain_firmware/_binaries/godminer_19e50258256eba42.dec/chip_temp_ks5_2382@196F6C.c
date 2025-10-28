int __fastcall chip_temp_ks5_2382(int a1, int a2)
{
  float v2; // s15
  _BYTE v6[24]; // [sp+3Ch] [bp-3058h] BYREF
  int v7; // [sp+103Ch] [bp-2058h] BYREF
  int v8; // [sp+1040h] [bp-2054h]
  _BYTE v9[8192]; // [sp+1044h] [bp-2050h] BYREF
  int v10; // [sp+3044h] [bp-50h] BYREF
  _DWORD s[4]; // [sp+3048h] [bp-4Ch] BYREF
  _DWORD v12[7]; // [sp+3058h] [bp-3Ch] BYREF
  int v13; // [sp+3074h] [bp-20h]
  void *ptr; // [sp+3078h] [bp-1Ch]
  int v15; // [sp+307Ch] [bp-18h]
  float v16; // [sp+3080h] [bp-14h]
  int i; // [sp+3084h] [bp-10h]

  v10 = 0;
  memset(v9, 0, sizeof(v9));
  v16 = 0.0;
  v8 = 285212672;
  memset(s, 0, sizeof(s));
  s[2] = 12582913;
  s[0] = 285212672;
  v15 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  v8 = 285343744;
  memset(s, 0, sizeof(s));
  s[2] = 12582913;
  s[0] = 285343744;
  v15 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  memset(s, 0, sizeof(s));
  s[2] = 12845057;
  ptr = malloc(12 * *(_DWORD *)(a1 + 372));
  memset(ptr, 0, 12 * *(_DWORD *)(a1 + 372));
  (*(void (__fastcall **)(int, _DWORD *, _DWORD, void *, int *))(a1 + 316))(a1, s, *(_DWORD *)(a1 + 372), ptr, &v10);
  for ( i = 0; i < v10; ++i )
  {
    if ( *((_WORD *)ptr + 6 * i + 3) == 196 )
    {
      V_LOCK();
      sub_184FA8((int)v12, *(int *)(a1 + 272));
      logfmt_raw(
        v6,
        0x1000u,
        0,
        v13,
        v12[0],
        v12[1],
        v12[2],
        v12[3],
        v12[4],
        v12[5],
        v12[6],
        v13,
        "[MISC CTRL] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)ptr + 12 * i + 4),
        *((unsigned __int16 *)ptr + 6 * i + 3),
        *((_DWORD *)ptr + 3 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
        171,
        "chip_temp_ks5_2382",
        18,
        1052,
        20,
        v6);
      v7 = 0;
      sub_185308(&v7, *((_DWORD *)ptr + 3 * i));
      v2 = ((double)(unsigned __int16)v7 - 0.5) * 662.88 / 4096.0 - 287.48;
      v16 = v2;
      *(float *)(a2 + 4 * (*((_BYTE *)ptr + 12 * i + 4) >> 1)) = v2;
    }
  }
  free(ptr);
  return 0;
}
