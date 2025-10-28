int __fastcall get_pcba_test_level_dash(_DWORD *a1, _DWORD *a2)
{
  int (**v2)(); // r0
  _BYTE v7[60]; // [sp+50h] [bp-107Ch] BYREF
  int v8; // [sp+1050h] [bp-7Ch] BYREF
  __int16 v9; // [sp+1054h] [bp-78h]
  _DWORD v10[7]; // [sp+1058h] [bp-74h] BYREF
  int v11; // [sp+1074h] [bp-58h]
  const char *v12[8]; // [sp+1078h] [bp-54h] BYREF
  _DWORD v13[7]; // [sp+1098h] [bp-34h] BYREF
  int v14; // [sp+10B4h] [bp-18h]
  unsigned int j; // [sp+10B8h] [bp-14h]
  unsigned int i; // [sp+10BCh] [bp-10h]

  v8 = 0;
  v9 = 0;
  if ( a1[260] )
  {
LABEL_22:
    *a2 = a1[260];
    return 0;
  }
  v2 = dev_ctrl();
  if ( !((int (__fastcall *)(_DWORD, int, int, int *))v2[26])(a1[66], 52, 393216, &v8) )
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( (unsigned __int16)v8 == *((unsigned __int16 *)&unk_4B3D14 + 5 * i + 2)
        && HIWORD(v8) == *((unsigned __int16 *)&unk_4B3D14 + 5 * i + 3)
        && (unsigned __int8)v9 == *((unsigned __int8 *)&unk_4B3D14 + 10 * i + 8)
        && HIBYTE(v9) == *((unsigned __int8 *)&unk_4B3D14 + 10 * i + 9) )
      {
        a1[260] = *(_DWORD *)((char *)&unk_4B3D14 + 10 * i);
        break;
      }
    }
    if ( !a1[260] )
    {
      for ( j = 0; j <= 4; ++j )
      {
        if ( (unsigned __int16)v8 == *((unsigned __int16 *)&unk_4B3D14 + 5 * j + 2)
          && HIWORD(v8) == *((unsigned __int16 *)&unk_4B3D14 + 5 * j + 3) )
        {
          a1[260] = *(_DWORD *)((char *)&unk_4B3D14 + 10 * j);
          break;
        }
      }
    }
    if ( !a1[260] )
      a1[260] = 5;
    V_LOCK();
    sub_DA978((int)v13, (int)a1[68]);
    logfmt_raw(
      v7,
      0x1000u,
      0,
      v14,
      v13[0],
      v13[1],
      v13[2],
      v13[3],
      v13[4],
      v13[5],
      v13[6],
      v14,
      "pic freq %d voltage %d rate%d.%d",
      (unsigned __int16)v8,
      HIWORD(v8),
      *((unsigned __int8 *)&unk_4B3D14 + 10 * a1[260] - 2),
      *((unsigned __int8 *)&unk_4B3D14 + 10 * a1[260] - 1));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      173,
      "get_pcba_test_level_dash",
      24,
      1049,
      40,
      v7);
    goto LABEL_22;
  }
  *a2 = -1;
  V_LOCK();
  sub_DA978((int)v10, (int)a1[68]);
  sub_DA940(v12, "pic info error");
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
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v12[7],
    "pic info lost");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "get_pcba_test_level_dash",
    24,
    1027,
    120,
    v7);
  return 15;
}
