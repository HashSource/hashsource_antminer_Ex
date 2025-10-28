int __fastcall sub_593D8(int a1)
{
  int v1; // r9
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r10
  unsigned __int16 *v8; // r9
  unsigned int v9; // r7
  int v10; // r0
  unsigned __int8 *v11; // r2
  int v12; // r12
  unsigned int v13; // r3
  int v14; // t1
  int v15; // r0
  int result; // r0
  int v17; // r0
  int v18; // r2
  int v19; // r7
  int v20; // [sp+4h] [bp-10D0h]
  int v21; // [sp+4Ch] [bp-1088h]
  unsigned __int16 *ptr; // [sp+54h] [bp-1080h]
  int v23; // [sp+5Ch] [bp-1078h] BYREF
  _DWORD v24[4]; // [sp+60h] [bp-1074h] BYREF
  int v25; // [sp+70h] [bp-1064h] BYREF
  char v26[32]; // [sp+90h] [bp-1044h] BYREF
  int v27; // [sp+B0h] [bp-1024h] BYREF
  _BYTE v28[4100]; // [sp+D0h] [bp-1004h] BYREF

  v1 = 0;
  v23 = 0;
  V_LOCK(a1);
  v3 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_DASH",
    25,
    26,
    20,
    v28);
  v24[0] = 0;
  v24[2] = 1;
  v24[1] = 0;
  v24[3] = 0;
  ptr = (unsigned __int16 *)calloc(0x348u, 1u);
  v4 = (*(int (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 176))(
         a1,
         v24,
         70,
         ptr,
         &v23,
         v20,
         3000,
         0);
  V_LOCK(v4);
  V_INT((int)&v27, "chain");
  v5 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v5);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/chip_setting.c",
         143,
         "ChipSetting_get_addr_DASH",
         25,
         36,
         60,
         v28);
  if ( v23 > 0 )
  {
    v7 = 0;
    v21 = 0;
    v8 = ptr;
    do
    {
      v9 = *v8;
      V_LOCK(v6);
      v10 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_DASH",
        25,
        40,
        20,
        v28);
      v6 = *(_DWORD *)(a1 + 196);
      if ( (unsigned __int16)__rev16(v9) == *(_DWORD *)(a1 + 192) )
        ++v21;
      if ( v6 > 0 )
      {
        v11 = *(unsigned __int8 **)(a1 + 296);
        v12 = *((unsigned __int8 *)v8 + 4);
        if ( *v11 == v12 )
        {
          v18 = 1;
          v19 = 0;
LABEL_18:
          *(_DWORD *)(*(_DWORD *)(a1 + 300) + v19) |= v18;
          V_LOCK(v6);
          v17 = logfmt_raw((int)v28, 0x1000u);
          V_UNLOCK(v17);
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/chip_setting.c",
                 143,
                 "ChipSetting_get_addr_DASH",
                 25,
                 47,
                 20,
                 v28);
        }
        else
        {
          v13 = 0;
          while ( ++v13 != v6 )
          {
            v14 = *++v11;
            if ( v14 == v12 )
            {
              v19 = 4 * (v13 >> 5);
              v18 = 1 << (v13 & 0x1F);
              goto LABEL_18;
            }
          }
        }
      }
      ++v7;
      v8 += 6;
    }
    while ( v7 < v23 );
    v1 = v21;
  }
  else
  {
    v21 = 0;
  }
  if ( *(_DWORD *)(a1 + 196) > v21 )
  {
    V_LOCK(v6);
    V_INT((int)v26, "chain");
    V_STR((int)&v25, "error");
    v15 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_DASH",
      25,
      54,
      100,
      v28);
  }
  free(ptr);
  result = v23;
  *(_DWORD *)(a1 + 236) = v1;
  return result;
}
