int __fastcall sub_1874A8(int a1, int a2, char a3)
{
  _BYTE v7[24]; // [sp+4Ch] [bp-1098h] BYREF
  _DWORD s[4]; // [sp+104Ch] [bp-98h] BYREF
  int v9; // [sp+105Ch] [bp-88h] BYREF
  _DWORD v10[7]; // [sp+1060h] [bp-84h] BYREF
  int v11; // [sp+107Ch] [bp-68h]
  _DWORD v12[7]; // [sp+1080h] [bp-64h] BYREF
  int v13; // [sp+109Ch] [bp-48h]
  _DWORD v14[7]; // [sp+10A0h] [bp-44h] BYREF
  int v15; // [sp+10BCh] [bp-28h]
  void *ptr; // [sp+10C0h] [bp-24h]
  char v17; // [sp+10C7h] [bp-1Dh]
  int i; // [sp+10C8h] [bp-1Ch]
  int v19; // [sp+10CCh] [bp-18h]
  char v20; // [sp+10D3h] [bp-11h]
  int v21; // [sp+10D4h] [bp-10h]

  v19 = 0;
  v9 = 0;
  v21 = a3 & 1;
  v20 = 0;
  v17 = 0;
  if ( a2 == -1 || a2 > *(_DWORD *)(a1 + 372) )
    v20 = 1;
  else
    v17 = *(_BYTE *)(*(_DWORD *)(a1 + 528) + a2);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = v17;
  HIWORD(s[2]) = 255;
  s[0] = 0;
  LOBYTE(s[3]) = 0;
  ptr = malloc(0xCu);
  memset(ptr, 0, 0xCu);
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *))(a1 + 336))(a1, s, 1, ptr, &v9);
  for ( i = 0; i < v9; ++i )
  {
    if ( *((_WORD *)ptr + 6 * i + 3) == 255 )
    {
      V_LOCK();
      sub_184FA8((int)v10, *(int *)(a1 + 272));
      logfmt_raw(
        v7,
        0x1000u,
        0,
        v11,
        v10[0],
        v10[1],
        v10[2],
        v10[3],
        v10[4],
        v10[5],
        v10[6],
        v11,
        "%s chip %02x, core %02x, reg %02x, core_mode %08x",
        "ChipSetting_same_nonce_KS5_2382",
        *((unsigned __int8 *)ptr + 12 * i + 4),
        *((unsigned __int8 *)ptr + 12 * i + 8),
        *((unsigned __int16 *)ptr + 6 * i + 3),
        *((_DWORD *)ptr + 3 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_same_nonce_KS5_2382",
        31,
        431,
        20,
        v7);
      v21 = *((_DWORD *)ptr + 3 * i) | a3 & 1;
    }
    else
    {
      V_LOCK();
      sub_184FA8((int)v12, *(int *)(a1 + 272));
      logfmt_raw(
        v7,
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
        "%s chip %02x, expected reg %02x, but %02x, core_mode %08x",
        "ChipSetting_same_nonce_KS5_2382",
        *((unsigned __int8 *)ptr + 12 * i + 4),
        255,
        *((unsigned __int16 *)ptr + 6 * i + 3),
        *((_DWORD *)ptr + 3 * i));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_same_nonce_KS5_2382",
        31,
        435,
        100,
        v7);
    }
  }
  free(ptr);
  LOBYTE(s[2]) = v20;
  BYTE1(s[2]) = v17;
  HIWORD(s[2]) = 255;
  LOBYTE(s[3]) = -1;
  s[0] = v21;
  v19 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  if ( v19 < 0 )
  {
    V_LOCK();
    sub_184FA8((int)v14, *(int *)(a1 + 272));
    logfmt_raw(
      v7,
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
      "set same nonce failed! chip_id:%d",
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_same_nonce_KS5_2382",
      31,
      448,
      100,
      v7);
    return -1;
  }
  return v19;
}
