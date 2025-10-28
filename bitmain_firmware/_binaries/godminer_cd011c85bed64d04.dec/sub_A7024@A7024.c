int __fastcall sub_A7024(int a1, int a2)
{
  int v2; // r9
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r10
  unsigned __int16 *v10; // r9
  unsigned int v11; // r7
  int v12; // r0
  unsigned __int8 *v13; // r2
  int v14; // r12
  unsigned int v15; // r3
  int v16; // t1
  int v17; // r0
  int result; // r0
  int v19; // r0
  int v20; // r2
  int v21; // r7
  int v22; // [sp+4h] [bp-10D0h]
  int v23; // [sp+4Ch] [bp-1088h]
  unsigned __int16 *ptr; // [sp+54h] [bp-1080h]
  int v25; // [sp+5Ch] [bp-1078h] BYREF
  _DWORD v26[4]; // [sp+60h] [bp-1074h] BYREF
  int v27; // [sp+70h] [bp-1064h] BYREF
  char v28[32]; // [sp+90h] [bp-1044h] BYREF
  int v29; // [sp+B0h] [bp-1024h] BYREF
  _BYTE v30[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = 0;
  v25 = 0;
  V_LOCK(a1);
  v5 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_get_addr_KDA",
    24,
    49,
    20,
    v30);
  v26[0] = 0;
  v26[2] = 1;
  v26[1] = 0;
  v26[3] = 0;
  ptr = (unsigned __int16 *)calloc(12 * a2, 1u);
  v6 = (*(int (__fastcall **)(int, _DWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 184))(
         a1,
         v26,
         a2,
         ptr,
         &v25,
         v22,
         3000,
         0);
  V_LOCK(v6);
  V_INT((int)&v27, "chain");
  v7 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/chip_setting.c",
         143,
         "ChipSetting_get_addr_KDA",
         24,
         59,
         60,
         v30);
  if ( v25 > 0 )
  {
    v9 = 0;
    v23 = 0;
    v10 = ptr;
    do
    {
      v11 = *v10;
      V_LOCK(v8);
      v12 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_KDA",
        24,
        63,
        20,
        v30);
      v8 = *(_DWORD *)(a1 + 204);
      if ( *(_DWORD *)(a1 + 200) == (unsigned __int16)__rev16(v11) )
        ++v23;
      if ( v8 > 0 )
      {
        v13 = *(unsigned __int8 **)(a1 + 304);
        v14 = *((unsigned __int8 *)v10 + 4);
        if ( *v13 == v14 )
        {
          v20 = 1;
          v21 = 0;
LABEL_18:
          *(_DWORD *)(*(_DWORD *)(a1 + 308) + v21) |= v20;
          V_LOCK(v8);
          v19 = logfmt_raw((int)v30, 0x1000u);
          V_UNLOCK(v19);
          v8 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/chip_setting.c",
                 143,
                 "ChipSetting_get_addr_KDA",
                 24,
                 70,
                 20,
                 v30);
        }
        else
        {
          v15 = 0;
          while ( ++v15 != v8 )
          {
            v16 = *++v13;
            if ( v16 == v14 )
            {
              v21 = 4 * (v15 >> 5);
              v20 = 1 << (v15 & 0x1F);
              goto LABEL_18;
            }
          }
        }
      }
      ++v9;
      v10 += 6;
    }
    while ( v25 > v9 );
    v2 = v23;
  }
  else
  {
    v23 = 0;
  }
  if ( *(_DWORD *)(a1 + 204) > v23 )
  {
    V_LOCK(v8);
    V_INT((int)v28, "chain");
    V_STR((int)&v29, "error");
    v17 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_KDA",
      24,
      77,
      100,
      v30);
  }
  free(ptr);
  result = v25;
  *(_DWORD *)(a1 + 244) = v2;
  return result;
}
