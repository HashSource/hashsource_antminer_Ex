int __fastcall set_frequency_eth_2282(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  unsigned int v4; // r0
  float v5; // s15
  _BYTE v9[76]; // [sp+40h] [bp-108Ch] BYREF
  __int64 v10; // [sp+1040h] [bp-8Ch] BYREF
  int v11; // [sp+1048h] [bp-84h]
  int v12; // [sp+104Ch] [bp-80h]
  int v13; // [sp+1050h] [bp-7Ch]
  int v14; // [sp+1054h] [bp-78h]
  int v15; // [sp+1058h] [bp-74h]
  int v16; // [sp+105Ch] [bp-70h]
  __int64 v17; // [sp+1060h] [bp-6Ch] BYREF
  int v18; // [sp+1068h] [bp-64h]
  int v19; // [sp+106Ch] [bp-60h]
  int v20; // [sp+1070h] [bp-5Ch]
  int v21; // [sp+1074h] [bp-58h]
  int v22; // [sp+1078h] [bp-54h]
  int v23; // [sp+107Ch] [bp-50h]
  __int64 v24; // [sp+1080h] [bp-4Ch] BYREF
  int v25; // [sp+1088h] [bp-44h]
  int v26; // [sp+108Ch] [bp-40h]
  int v27; // [sp+1090h] [bp-3Ch]
  int v28; // [sp+1094h] [bp-38h]
  int v29; // [sp+1098h] [bp-34h]
  int v30; // [sp+109Ch] [bp-30h]
  void *ptr; // [sp+10A4h] [bp-28h]
  signed int i; // [sp+10A8h] [bp-24h]
  float v33; // [sp+10ACh] [bp-20h]
  signed int v34; // [sp+10B0h] [bp-1Ch]
  int v35; // [sp+10B4h] [bp-18h]

  V_LOCK();
  sub_FBD60((int)&v10, *(int *)(a1 + 272));
  logfmt_raw(v9, 0x1000u, 0, v16, v10, v11, v12, v13, v14, v15, v16, "set_frequency_eth_2282 begin!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_frequency_eth_2282",
    22,
    1277,
    20,
    v9);
  v35 = 0;
  v34 = 0;
  v33 = 0.0;
  ptr = malloc(0x48u);
  sub_100980(a1, a2, 1, 0);
  v34 = sub_1062CC(a1, 72, ptr);
  if ( v34 == 6 )
  {
    for ( i = 0; i < v34; ++i )
    {
      if ( *((_WORD *)ptr + 6 * i + 3) == 72 )
      {
        V_LOCK();
        sub_FBD60((int)&v24, *(int *)(a1 + 272));
        v2 = *((unsigned __int8 *)ptr + 12 * i + 4);
        v3 = *((unsigned __int16 *)ptr + 6 * i + 3);
        v4 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
        logfmt_raw(v9, 0x1000u, 0, v30, v24, v25, v26, v27, v28, v29, v30, "asic %02x, reg %02x state %08x", v2, v3, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "set_frequency_eth_2282",
          22,
          1295,
          20,
          v9);
      }
      if ( ((sub_FC76C(*((_DWORD *)ptr + 3 * i)) >> 16) & 1) == 1 )
      {
        v5 = (double)(25 * (unsigned int)(unsigned __int16)sub_FC76C(*((_DWORD *)ptr + 3 * i))) / 256.0;
        v33 = v5;
      }
    }
  }
  else
  {
    V_LOCK();
    sub_FBD60((int)&v17, *(int *)(a1 + 272));
    logfmt_raw(
      v9,
      0x1000u,
      0,
      v23,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      "get top reg addr 0x48 failed, resp_num: %d",
      v34);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "set_frequency_eth_2282",
      22,
      1287,
      100,
      v9);
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "clk mointor result : %.1f", v33);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_frequency_eth_2282",
    22,
    1304,
    20,
    v9);
  if ( ptr )
    free(ptr);
  return v35;
}
