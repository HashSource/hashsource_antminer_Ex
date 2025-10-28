int __fastcall sub_569F4(int a1, int a2)
{
  int v2; // r9
  int v5; // r10
  unsigned __int16 *v6; // r9
  unsigned int v7; // r7
  int v8; // r0
  unsigned __int8 *v9; // r2
  int v10; // r12
  unsigned int v11; // r3
  int v12; // t1
  int result; // r0
  int v14; // r2
  int v15; // r7
  int v16; // [sp+4h] [bp-10D0h]
  int v17; // [sp+4Ch] [bp-1088h]
  unsigned __int16 *ptr; // [sp+54h] [bp-1080h]
  int v19; // [sp+5Ch] [bp-1078h] BYREF
  _DWORD v20[4]; // [sp+60h] [bp-1074h] BYREF
  _DWORD v21[7]; // [sp+70h] [bp-1064h] BYREF
  int v22; // [sp+8Ch] [bp-1048h]
  _DWORD v23[7]; // [sp+90h] [bp-1044h] BYREF
  int v24; // [sp+ACh] [bp-1028h]
  _DWORD v25[8]; // [sp+B0h] [bp-1024h] BYREF
  char v26[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = 0;
  v19 = 0;
  V_LOCK();
  logfmt_raw(v26, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_CKB2", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_CKB2",
    25,
    26,
    20,
    v26);
  v20[0] = 0;
  v20[2] = 1;
  v20[1] = 0;
  v20[3] = 0;
  ptr = (unsigned __int16 *)calloc(12 * a2, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 176))(
    a1,
    v20,
    a2,
    ptr,
    &v19,
    v16,
    3000,
    0);
  V_LOCK();
  V_INT((int)v21, "chain", *(int *)(a1 + 140));
  logfmt_raw(
    v26,
    0x1000u,
    0,
    v22,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v22,
    "%s detect %d chips",
    "ChipSetting_get_addr_CKB2",
    v19);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_CKB2",
    25,
    36,
    60,
    v26);
  if ( v19 > 0 )
  {
    v5 = 0;
    v17 = 0;
    v6 = ptr;
    do
    {
      v7 = *v6;
      V_LOCK();
      LOWORD(v7) = __rev16(v7);
      logfmt_raw(
        v26,
        0x1000u,
        0,
        "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
        (unsigned __int16)v7,
        *(_DWORD *)(a1 + 192),
        v5,
        v6[3],
        *((unsigned __int8 *)v6 + 4));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_CKB2",
        25,
        40,
        20,
        v26);
      v8 = *(_DWORD *)(a1 + 196);
      if ( *(_DWORD *)(a1 + 192) == (unsigned __int16)v7 )
        ++v17;
      if ( v8 > 0 )
      {
        v9 = *(unsigned __int8 **)(a1 + 296);
        v10 = *((unsigned __int8 *)v6 + 4);
        if ( *v9 == v10 )
        {
          v14 = 1;
          v15 = 0;
LABEL_18:
          *(_DWORD *)(*(_DWORD *)(a1 + 300) + v15) |= v14;
          V_LOCK();
          logfmt_raw(v26, 0x1000u, 0, "detected_chip_bitmask %x", *(_DWORD *)(*(_DWORD *)(a1 + 300) + v15));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/chip_setting.c",
            143,
            "ChipSetting_get_addr_CKB2",
            25,
            47,
            20,
            v26);
        }
        else
        {
          v11 = 0;
          while ( ++v11 != v8 )
          {
            v12 = *++v9;
            if ( v12 == v10 )
            {
              v15 = 4 * (v11 >> 5);
              v14 = 1 << (v11 & 0x1F);
              goto LABEL_18;
            }
          }
        }
      }
      ++v5;
      v6 += 6;
    }
    while ( v19 > v5 );
    v2 = v17;
  }
  else
  {
    v17 = 0;
  }
  if ( *(_DWORD *)(a1 + 196) > v17 )
  {
    V_LOCK();
    V_INT((int)v23, "chain", *(int *)(a1 + 140));
    V_STR(v25, "error", "asic num error");
    logfmt_raw(
      v26,
      0x1000u,
      0,
      v24,
      v23[0],
      v23[1],
      v23[2],
      v23[3],
      v23[4],
      v23[5],
      v23[6],
      v24,
      v25[0],
      v25[1],
      v25[2],
      v25[3],
      v25[4],
      v25[5],
      v25[6],
      v25[7],
      "detected asic num less than design");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_CKB2",
      25,
      54,
      100,
      v26);
  }
  free(ptr);
  result = v19;
  *(_DWORD *)(a1 + 236) = v2;
  return result;
}
