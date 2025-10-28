int __fastcall sub_A29E8(int a1)
{
  int v1; // r9
  int v3; // r10
  unsigned __int16 *v4; // r9
  unsigned int v5; // r7
  int v6; // r0
  unsigned __int8 *v7; // r2
  int v8; // r12
  unsigned int v9; // r3
  int v10; // t1
  int result; // r0
  int v12; // r2
  int v13; // r7
  int v14; // [sp+4h] [bp-10D0h]
  int v15; // [sp+4Ch] [bp-1088h]
  unsigned __int16 *ptr; // [sp+54h] [bp-1080h]
  int v17; // [sp+5Ch] [bp-1078h] BYREF
  _DWORD v18[4]; // [sp+60h] [bp-1074h] BYREF
  _DWORD v19[8]; // [sp+70h] [bp-1064h] BYREF
  _DWORD v20[7]; // [sp+90h] [bp-1044h] BYREF
  int v21; // [sp+ACh] [bp-1028h]
  _DWORD v22[7]; // [sp+B0h] [bp-1024h] BYREF
  int v23; // [sp+CCh] [bp-1008h]
  char v24[4100]; // [sp+D0h] [bp-1004h] BYREF

  v1 = 0;
  v17 = 0;
  V_LOCK();
  logfmt_raw(v24, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_GRIN29", 4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_GRIN29",
    27,
    26,
    20,
    v24);
  v18[0] = 0;
  v18[2] = 1;
  v18[1] = 0;
  v18[3] = 0;
  ptr = (unsigned __int16 *)calloc(0x30u, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 176))(
    a1,
    v18,
    4,
    ptr,
    &v17,
    v14,
    3000,
    0);
  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v24,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    "%s detect %d chips",
    "ChipSetting_get_addr_GRIN29",
    v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_GRIN29",
    27,
    36,
    60,
    v24);
  if ( v17 > 0 )
  {
    v3 = 0;
    v15 = 0;
    v4 = ptr;
    do
    {
      v5 = *v4;
      V_LOCK();
      LOWORD(v5) = __rev16(v5);
      logfmt_raw(
        v24,
        0x1000u,
        0,
        "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
        (unsigned __int16)v5,
        *(_DWORD *)(a1 + 192),
        v3,
        v4[3],
        *((unsigned __int8 *)v4 + 4));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_GRIN29",
        27,
        40,
        20,
        v24);
      v6 = *(_DWORD *)(a1 + 196);
      if ( (unsigned __int16)v5 == *(_DWORD *)(a1 + 192) )
        ++v15;
      if ( v6 > 0 )
      {
        v7 = *(unsigned __int8 **)(a1 + 296);
        v8 = *((unsigned __int8 *)v4 + 4);
        if ( *v7 == v8 )
        {
          v12 = 1;
          v13 = 0;
LABEL_18:
          *(_DWORD *)(*(_DWORD *)(a1 + 300) + v13) |= v12;
          V_LOCK();
          logfmt_raw(v24, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(*(_DWORD *)(a1 + 300) + v13));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/chip_setting.c",
            143,
            "ChipSetting_get_addr_GRIN29",
            27,
            47,
            20,
            v24);
        }
        else
        {
          v9 = 0;
          while ( ++v9 != v6 )
          {
            v10 = *++v7;
            if ( v10 == v8 )
            {
              v13 = 4 * (v9 >> 5);
              v12 = 1 << (v9 & 0x1F);
              goto LABEL_18;
            }
          }
        }
      }
      ++v3;
      v4 += 6;
    }
    while ( v3 < v17 );
    v1 = v15;
  }
  else
  {
    v15 = 0;
  }
  if ( *(_DWORD *)(a1 + 196) > v15 )
  {
    V_LOCK();
    V_INT((int)v20, "chain", *(int *)(a1 + 140));
    V_STR(v19, "error", "asic num error");
    logfmt_raw(
      v24,
      0x1000u,
      0,
      v21,
      v20[0],
      v20[1],
      v20[2],
      v20[3],
      v20[4],
      v20[5],
      v20[6],
      v21,
      v19[0],
      v19[1],
      v19[2],
      v19[3],
      v19[4],
      v19[5],
      v19[6],
      v19[7],
      "detected asic num less than design");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_GRIN29",
      27,
      54,
      100,
      v24);
  }
  free(ptr);
  result = v17;
  *(_DWORD *)(a1 + 236) = v1;
  return result;
}
